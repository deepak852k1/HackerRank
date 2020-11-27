
try {
  cout << Server::compute(A, B) << endl;
}
catch (const std::bad_alloc &ex) {
  cout << "Not enough memory" << endl;
}
catch (const std::exception &ex) {
  cout << "Exception: " << ex.what() << endl;
}
catch (...) {
  cout << "Other Exception" << endl;
}
