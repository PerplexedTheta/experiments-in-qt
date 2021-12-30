#include "main.h"

int main(int argc, char** argv) {
    QApplication app(argc, argv); // create the QApplication
    QLabel label("Hello world!"); // create the label to go in the window

    label.show(); // render the label in the window
    
    return app.exec(); // execute the app - if it fails, return the value to
                       // bash/zsh/etc
}
