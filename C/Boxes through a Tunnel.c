

struct box
{
	/**
	* Define three fields of type int: length, width and height
	*/
    int length;
    int width;
    int height;
};

typedef struct box box;

int get_volume(box b) {
	/**
	* Return the volume of the box
	*/
    int vol =0;
    vol = b.length*b.width*b.height;
    return vol;
}

int is_lower_than_max_height(box b) {
	if(b.height<MAX_HEIGHT)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    /**
	* Return 1 if the box's height is lower than MAX_HEIGHT and 0 otherwise
	*/
}

