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

#include "gtk_help_cb.h"
#include "gtk_help_dbox.h"
#include "support.h"

GtkWidget*
create_help_dbox (void)
{
  GtkWidget *help_dbox;
  GtkWidget *dialog_vbox1;
  GtkWidget *scrolledwindow1;
  GtkWidget *text1;
  GtkWidget *dialog_action_area1;
  GtkWidget *hbuttonbox1;
  GtkWidget *button1;
  GtkWidget *hbox1;
  GtkWidget *pixmap1;
  guint label1_key;
  GtkWidget *label1;
  GtkAccelGroup *accel_group;

  accel_group = gtk_accel_group_new ();

  help_dbox = gtk_dialog_new ();
  gtk_object_set_data (GTK_OBJECT (help_dbox), "help_dbox", help_dbox);
  gtk_window_set_title (GTK_WINDOW (help_dbox), _("Help !!!"));

  dialog_vbox1 = GTK_DIALOG (help_dbox)->vbox;
  gtk_object_set_data (GTK_OBJECT (help_dbox), "dialog_vbox1", dialog_vbox1);
  gtk_widget_show (dialog_vbox1);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_ref (scrolledwindow1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "scrolledwindow1", scrolledwindow1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (scrolledwindow1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), scrolledwindow1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (scrolledwindow1), 7);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (scrolledwindow1), GTK_POLICY_NEVER, GTK_POLICY_AUTOMATIC);

  text1 = gtk_text_new (NULL, NULL);
  gtk_widget_ref (text1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "text1", text1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (text1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), text1);
  gtk_widget_set_usize (text1, 320, 240);
  gtk_widget_realize (text1);
  gtk_text_insert (GTK_TEXT (text1), NULL, NULL, NULL,
                   _("Cannot find the help file."), 26);

  dialog_action_area1 = GTK_DIALOG (help_dbox)->action_area;
  gtk_object_set_data (GTK_OBJECT (help_dbox), "dialog_action_area1", dialog_action_area1);
  gtk_widget_show (dialog_action_area1);
  gtk_container_set_border_width (GTK_CONTAINER (dialog_action_area1), 10);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "hbuttonbox1", hbuttonbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (dialog_action_area1), hbuttonbox1, TRUE, TRUE, 0);

  button1 = gtk_button_new ();
  gtk_widget_ref (button1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "button1", button1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button1);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), button1);
  GTK_WIDGET_SET_FLAGS (button1, GTK_CAN_DEFAULT);
  gtk_widget_add_accelerator (button1, "clicked", accel_group,
                              GDK_Escape, 0,
                              GTK_ACCEL_VISIBLE);
  gtk_widget_add_accelerator (button1, "clicked", accel_group,
                              GDK_Return, 0,
                              GTK_ACCEL_VISIBLE);

  hbox1 = gtk_hbox_new (FALSE, 0);
  gtk_widget_ref (hbox1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "hbox1", hbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (button1), hbox1);

  pixmap1 = create_pixmap (help_dbox, "yes.xpm");
  gtk_widget_ref (pixmap1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "pixmap1", pixmap1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (pixmap1);
  gtk_box_pack_start (GTK_BOX (hbox1), pixmap1, TRUE, FALSE, 0);

  label1 = gtk_label_new ("");
  label1_key = gtk_label_parse_uline (GTK_LABEL (label1),
                                   _("_Close"));
  gtk_widget_ref (label1);
  gtk_object_set_data_full (GTK_OBJECT (help_dbox), "label1", label1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, TRUE, 0);
  gtk_misc_set_alignment (GTK_MISC (label1), 0, 0.5);
  gtk_misc_set_padding (GTK_MISC (label1), 5, 0);

  gtk_signal_connect (GTK_OBJECT (help_dbox), "show",
                      GTK_SIGNAL_FUNC (on_help_dbox_show),
                      text1);
  gtk_signal_connect (GTK_OBJECT (button1), "clicked",
                      GTK_SIGNAL_FUNC (help_ok_button_clicked),
                      help_dbox);

  gtk_widget_add_accelerator (button1, "clicked", accel_group,
                              label1_key, GDK_MOD1_MASK, 0);

  gtk_window_add_accel_group (GTK_WINDOW (help_dbox), accel_group);

  return help_dbox;
}
