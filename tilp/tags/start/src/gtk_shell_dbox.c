/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "gtk_shell_cb.h"
#include "gtk_shell_dbox.h"
#include "support.h"

GtkWidget*
create_shell_dbox (void)
{
  GtkWidget *shell_dbox;
  GtkWidget *dialog_vbox1;
  GtkWidget *scrolledwindow1;
  GtkWidget *text1;
  GtkWidget *dialog_action_area1;
  GtkWidget *hbox1;
  GtkWidget *label1;
  GtkWidget *entry1;

  shell_dbox = gtk_dialog_new ();
  gtk_object_set_data (GTK_OBJECT (shell_dbox), "shell_dbox", shell_dbox);
  gtk_window_set_title (GTK_WINDOW (shell_dbox), _("Shell"));

  dialog_vbox1 = GTK_DIALOG (shell_dbox)->vbox;
  gtk_object_set_data (GTK_OBJECT (shell_dbox), "dialog_vbox1", dialog_vbox1);
  gtk_widget_show (dialog_vbox1);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow1);
  gtk_object_set_data_full (GTK_OBJECT (shell_dbox), "scrolledwindow1", scrolledwindow1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), scrolledwindow1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (scrolledwindow1), 7);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);

  text1 = gtk_text_new (NULL, NULL);
  gtk_widget_ref (text1);
  gtk_object_set_data_full (GTK_OBJECT (shell_dbox), "text1", text1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (text1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), text1);
  gtk_widget_set_usize (text1, 320, 240);
  gtk_widget_realize (text1);
  gtk_text_insert (GTK_TEXT (text1), NULL, NULL, NULL,
                   _("Use the text entry below for entering \ncommands...\nType 'quit' when finished."), 77);

  dialog_action_area1 = GTK_DIALOG (shell_dbox)->action_area;
  gtk_object_set_data (GTK_OBJECT (shell_dbox), "dialog_action_area1", dialog_action_area1);
  gtk_widget_show (dialog_action_area1);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area1), 10);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox1);
  gtk_object_set_data_full (GTK_OBJECT (shell_dbox), "hbox1", hbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox1);
  gtk_box_pack_start (GTK_BOX (dialog_action_area1), hbox1, TRUE, TRUE, 0);

  label1 = gtk_label_new (_("Cmd:"));
  gtk_widget_ref (label1);
  gtk_object_set_data_full (GTK_OBJECT (shell_dbox), "label1", label1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);
  gtk_label_set_justify (GTK_LABEL (label1), GTK_JUSTIFY_LEFT);
  gtk_misc_set_alignment (GTK_MISC (label1), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (label1), 5, 0);

  entry1 = gtk_entry_new ();
  gtk_widget_ref (entry1);
  gtk_object_set_data_full (GTK_OBJECT (shell_dbox), "entry1", entry1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (entry1);
  gtk_box_pack_start (GTK_BOX (hbox1), entry1, TRUE, TRUE, 0);

  gtk_signal_connect (GTK_OBJECT (shell_dbox), "show",
                      GTK_SIGNAL_FUNC (on_shell_dbox_show),
                      text1);
  gtk_signal_connect (GTK_OBJECT (shell_dbox), "show",
                      GTK_SIGNAL_FUNC (on_shell_dbox_show2),
                      entry1);
  gtk_signal_connect (GTK_OBJECT (shell_dbox), "destroy",
                      GTK_SIGNAL_FUNC (on_shell_dbox_destroy),
                      shell_dbox);
  gtk_signal_connect (GTK_OBJECT (entry1), "activate",
                      GTK_SIGNAL_FUNC (on_shell_entry1_activate),
                      shell_dbox);

  return shell_dbox;
}
