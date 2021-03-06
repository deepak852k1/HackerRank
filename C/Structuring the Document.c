
typedef struct word word_t;
typedef struct sentence sentence_t;
typedef struct paragraph paragraph_t;
typedef struct document document_t;

document_t* new_document()
{
 
    document_t* Doc = calloc(1, sizeof(document_t));
    
    
    if(!Doc) exit(EXIT_FAILURE);

  
    Doc->data = NULL; 
    Doc->paragraph_count = 0; 

    
    return Doc;
}


void doc_add_paragraph(document_t* Doc)
{
    
    ++Doc->paragraph_count;

   
    size_t size = Doc->paragraph_count;

    Doc->data = realloc(
        Doc->data, size * sizeof(paragraph_t)
    );

    
    if (!Doc->data) exit(EXIT_FAILURE);


    int par_idx = Doc->paragraph_count - 1;

   
    Doc->data[par_idx].data = NULL; 
    Doc->data[par_idx].sentence_count = 0; 
}

void doc_add_sentence(document_t* Doc)
{
    
    int par_idx = Doc->paragraph_count - 1;

 
    ++Doc->data[par_idx].sentence_count;

      
    size_t size = Doc->data[par_idx].sentence_count;

    Doc->data[par_idx].data = realloc(
        Doc->data[par_idx].data, size * sizeof(sentence_t)
    );

 
    if (!Doc->data[par_idx].data) exit(EXIT_FAILURE);

 
    int sen_idx = Doc->data[par_idx].sentence_count - 1;
  
    Doc->data[par_idx].data[sen_idx].data = NULL; 
    Doc->data[par_idx].data[sen_idx].word_count = 0; 
}


void doc_add_word(document_t* Doc)
{
   
    int par_idx = Doc->paragraph_count - 1;
    int sen_idx = Doc->data[par_idx].sentence_count - 1;

   
    ++Doc->data[par_idx].data[sen_idx].word_count;

       
    size_t size = Doc->data[par_idx].data[sen_idx].word_count;

    Doc->data[par_idx].data[sen_idx].data = realloc(
        Doc->data[par_idx].data[sen_idx].data,
        size * sizeof(word_t)
    );

    
    if (!Doc->data[par_idx].data[sen_idx].data) exit(EXIT_FAILURE);

    
    int wor_idx = Doc->data[par_idx].data[sen_idx].word_count - 1;
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data = NULL;
}


void doc_add_char(document_t* Doc, char c)
{
    
    int par_idx = Doc->paragraph_count - 1;
    int sen_idx = Doc->data[par_idx].sentence_count - 1;
    int wor_idx = Doc->data[par_idx].data[sen_idx].word_count - 1;

    
    size_t len = 0;
    if (Doc->data[par_idx].data[sen_idx].data[wor_idx].data != NULL) {
        len = strlen(Doc->data[par_idx].data[sen_idx].data[wor_idx].data);
    }

  
    size_t size = len + 2;
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data = realloc(
        Doc->data[par_idx].data[sen_idx].data[wor_idx].data,
        size * sizeof(char)
    );

   
    if (!Doc->data[par_idx].data[sen_idx].data[wor_idx].data) exit(EXIT_FAILURE);

   
    int char_idx = size - 2;

   
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data[char_idx] = c;

   
    Doc->data[par_idx].data[sen_idx].data[wor_idx].data[char_idx + 1] = '\0';
}


struct document get_document(char* text)
{  
   
    document_t* Doc = new_document();

    
    doc_add_paragraph(Doc);
    doc_add_sentence(Doc);
    doc_add_word(Doc);

   
    size_t text_len = strlen(text);

    for (int char_idx = 0; char_idx < text_len; ++char_idx) {
        switch (text[char_idx])
        {
           
            case ' ':
                doc_add_word(Doc);
                break;

           
            case '.':
               
                if (text[char_idx + 1] != '\n' &&
                    text[char_idx + 1] != '\0') {
                    doc_add_sentence(Doc);
                    doc_add_word(Doc);
                }
                break;

            
            case '\n':
                doc_add_paragraph(Doc);
                doc_add_sentence(Doc);
                doc_add_word(Doc);
                break;

            
            case '\0':
                break;

           
            default:
                doc_add_char(Doc, text[char_idx]);
                break;
        }
    }

    
    return *Doc;
}


struct word kth_word_in_mth_sentence_of_nth_paragraph(struct document Doc, int k, int m, int n) {
   
    return Doc.data[n - 1].data[m - 1].data[k - 1];
}


struct sentence kth_sentence_in_mth_paragraph(struct document Doc, int k, int m) { 
    return Doc.data[m - 1].data[k- 1];
}


struct paragraph kth_paragraph(struct document Doc, int k) {
    return Doc.data[k - 1];
}

