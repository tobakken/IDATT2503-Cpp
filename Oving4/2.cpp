#include <gtkmm.h>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Label firstname_label;
  Gtk::Entry firstname;
  Gtk::Label lastname_label;
  Gtk::Entry lastname;
  Gtk::Button button;
  Gtk::Label label;

  Window() {

    set_title("Øving 4");
    button.set_label("Combine names");
    button.set_sensitive(false);
    firstname_label.set_label("First name");
    lastname_label.set_label("Last name");

    vbox.pack_start(firstname_label);
    vbox.pack_start(firstname);
    vbox.pack_start(lastname_label);
    vbox.pack_start(lastname);
    vbox.pack_start(button);
    vbox.pack_start(label);

    add(vbox);  // Add vbox to window
    show_all(); // Show all widgets

    firstname.signal_changed().connect([this]() {
      firstname.get_text().length() != 0 && lastname.get_text().length() != 0 ? button.set_sensitive(true) : button.set_sensitive(false);
    });

    lastname.signal_changed().connect([this]() {
      firstname.get_text().length() != 0 && lastname.get_text().length() != 0 ? button.set_sensitive(true) : button.set_sensitive(false);
    });

    button.signal_clicked().connect([this]() {
      label.set_text("Names combined: " + firstname.get_text() + " " + lastname.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
