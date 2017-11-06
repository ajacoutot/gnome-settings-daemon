/*
 * Generated by gdbus-codegen 2.54.1. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __ORG_FREEDESKTOP_ACCOUNTS_USER_H__
#define __ORG_FREEDESKTOP_ACCOUNTS_USER_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.freedesktop.Accounts.User */

#define GSD_TYPE_ACCOUNTS_USER (gsd_accounts_user_get_type ())
#define GSD_ACCOUNTS_USER(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_ACCOUNTS_USER, GsdAccountsUser))
#define GSD_IS_ACCOUNTS_USER(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_ACCOUNTS_USER))
#define GSD_ACCOUNTS_USER_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GSD_TYPE_ACCOUNTS_USER, GsdAccountsUserIface))

struct _GsdAccountsUser;
typedef struct _GsdAccountsUser GsdAccountsUser;
typedef struct _GsdAccountsUserIface GsdAccountsUserIface;

struct _GsdAccountsUserIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_get_password_expiration_policy) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

  gboolean (*handle_set_account_type) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    gint arg_accountType);

  gboolean (*handle_set_automatic_login) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_enabled);

  gboolean (*handle_set_email) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_email);

  gboolean (*handle_set_home_directory) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_homedir);

  gboolean (*handle_set_icon_file) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_filename);

  gboolean (*handle_set_language) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_language);

  gboolean (*handle_set_location) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_location);

  gboolean (*handle_set_locked) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    gboolean arg_locked);

  gboolean (*handle_set_password) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_password,
    const gchar *arg_hint);

  gboolean (*handle_set_password_hint) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_hint);

  gboolean (*handle_set_password_mode) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    gint arg_mode);

  gboolean (*handle_set_real_name) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_set_shell) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_shell);

  gboolean (*handle_set_user_name) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_set_xsession) (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_x_session);

  gint  (*get_account_type) (GsdAccountsUser *object);

  gboolean  (*get_automatic_login) (GsdAccountsUser *object);

  const gchar * (*get_email) (GsdAccountsUser *object);

  const gchar * (*get_home_directory) (GsdAccountsUser *object);

  const gchar * (*get_icon_file) (GsdAccountsUser *object);

  const gchar * (*get_language) (GsdAccountsUser *object);

  gboolean  (*get_local_account) (GsdAccountsUser *object);

  const gchar * (*get_location) (GsdAccountsUser *object);

  gboolean  (*get_locked) (GsdAccountsUser *object);

  guint64  (*get_login_frequency) (GsdAccountsUser *object);

  GVariant * (*get_login_history) (GsdAccountsUser *object);

  gint64  (*get_login_time) (GsdAccountsUser *object);

  const gchar * (*get_password_hint) (GsdAccountsUser *object);

  gint  (*get_password_mode) (GsdAccountsUser *object);

  const gchar * (*get_real_name) (GsdAccountsUser *object);

  const gchar * (*get_shell) (GsdAccountsUser *object);

  gboolean  (*get_system_account) (GsdAccountsUser *object);

  guint64  (*get_uid) (GsdAccountsUser *object);

  const gchar * (*get_user_name) (GsdAccountsUser *object);

  const gchar * (*get_xsession) (GsdAccountsUser *object);

  void (*changed) (
    GsdAccountsUser *object);

};

GType gsd_accounts_user_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *gsd_accounts_user_interface_info (void);
guint gsd_accounts_user_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void gsd_accounts_user_complete_set_user_name (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_real_name (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_email (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_language (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_xsession (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_location (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_home_directory (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_shell (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_icon_file (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_locked (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_account_type (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_password_mode (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_password (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_password_hint (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_set_automatic_login (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation);

void gsd_accounts_user_complete_get_password_expiration_policy (
    GsdAccountsUser *object,
    GDBusMethodInvocation *invocation,
    gint64 expiration_time,
    gint64 last_change_time,
    gint64 min_days_between_changes,
    gint64 max_days_between_changes,
    gint64 days_to_warn,
    gint64 days_after_expiration_until_lock);



/* D-Bus signal emissions functions: */
void gsd_accounts_user_emit_changed (
    GsdAccountsUser *object);



/* D-Bus method calls: */
void gsd_accounts_user_call_set_user_name (
    GsdAccountsUser *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_user_name_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_user_name_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_real_name (
    GsdAccountsUser *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_real_name_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_real_name_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_email (
    GsdAccountsUser *proxy,
    const gchar *arg_email,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_email_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_email_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_email,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_language (
    GsdAccountsUser *proxy,
    const gchar *arg_language,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_language_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_language_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_language,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_xsession (
    GsdAccountsUser *proxy,
    const gchar *arg_x_session,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_xsession_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_xsession_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_x_session,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_location (
    GsdAccountsUser *proxy,
    const gchar *arg_location,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_location_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_location_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_location,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_home_directory (
    GsdAccountsUser *proxy,
    const gchar *arg_homedir,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_home_directory_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_home_directory_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_homedir,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_shell (
    GsdAccountsUser *proxy,
    const gchar *arg_shell,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_shell_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_shell_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_shell,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_icon_file (
    GsdAccountsUser *proxy,
    const gchar *arg_filename,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_icon_file_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_icon_file_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_filename,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_locked (
    GsdAccountsUser *proxy,
    gboolean arg_locked,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_locked_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_locked_sync (
    GsdAccountsUser *proxy,
    gboolean arg_locked,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_account_type (
    GsdAccountsUser *proxy,
    gint arg_accountType,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_account_type_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_account_type_sync (
    GsdAccountsUser *proxy,
    gint arg_accountType,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_password_mode (
    GsdAccountsUser *proxy,
    gint arg_mode,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_password_mode_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_password_mode_sync (
    GsdAccountsUser *proxy,
    gint arg_mode,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_password (
    GsdAccountsUser *proxy,
    const gchar *arg_password,
    const gchar *arg_hint,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_password_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_password_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_password,
    const gchar *arg_hint,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_password_hint (
    GsdAccountsUser *proxy,
    const gchar *arg_hint,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_password_hint_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_password_hint_sync (
    GsdAccountsUser *proxy,
    const gchar *arg_hint,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_set_automatic_login (
    GsdAccountsUser *proxy,
    gboolean arg_enabled,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_set_automatic_login_finish (
    GsdAccountsUser *proxy,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_set_automatic_login_sync (
    GsdAccountsUser *proxy,
    gboolean arg_enabled,
    GCancellable *cancellable,
    GError **error);

void gsd_accounts_user_call_get_password_expiration_policy (
    GsdAccountsUser *proxy,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean gsd_accounts_user_call_get_password_expiration_policy_finish (
    GsdAccountsUser *proxy,
    gint64 *out_expiration_time,
    gint64 *out_last_change_time,
    gint64 *out_min_days_between_changes,
    gint64 *out_max_days_between_changes,
    gint64 *out_days_to_warn,
    gint64 *out_days_after_expiration_until_lock,
    GAsyncResult *res,
    GError **error);

gboolean gsd_accounts_user_call_get_password_expiration_policy_sync (
    GsdAccountsUser *proxy,
    gint64 *out_expiration_time,
    gint64 *out_last_change_time,
    gint64 *out_min_days_between_changes,
    gint64 *out_max_days_between_changes,
    gint64 *out_days_to_warn,
    gint64 *out_days_after_expiration_until_lock,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
guint64 gsd_accounts_user_get_uid (GsdAccountsUser *object);
void gsd_accounts_user_set_uid (GsdAccountsUser *object, guint64 value);

const gchar *gsd_accounts_user_get_user_name (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_user_name (GsdAccountsUser *object);
void gsd_accounts_user_set_user_name (GsdAccountsUser *object, const gchar *value);

const gchar *gsd_accounts_user_get_real_name (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_real_name (GsdAccountsUser *object);
void gsd_accounts_user_set_real_name (GsdAccountsUser *object, const gchar *value);

gint gsd_accounts_user_get_account_type (GsdAccountsUser *object);
void gsd_accounts_user_set_account_type (GsdAccountsUser *object, gint value);

const gchar *gsd_accounts_user_get_home_directory (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_home_directory (GsdAccountsUser *object);
void gsd_accounts_user_set_home_directory (GsdAccountsUser *object, const gchar *value);

const gchar *gsd_accounts_user_get_shell (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_shell (GsdAccountsUser *object);
void gsd_accounts_user_set_shell (GsdAccountsUser *object, const gchar *value);

const gchar *gsd_accounts_user_get_email (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_email (GsdAccountsUser *object);
void gsd_accounts_user_set_email (GsdAccountsUser *object, const gchar *value);

const gchar *gsd_accounts_user_get_language (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_language (GsdAccountsUser *object);
void gsd_accounts_user_set_language (GsdAccountsUser *object, const gchar *value);

const gchar *gsd_accounts_user_get_xsession (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_xsession (GsdAccountsUser *object);
void gsd_accounts_user_set_xsession (GsdAccountsUser *object, const gchar *value);

const gchar *gsd_accounts_user_get_location (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_location (GsdAccountsUser *object);
void gsd_accounts_user_set_location (GsdAccountsUser *object, const gchar *value);

guint64 gsd_accounts_user_get_login_frequency (GsdAccountsUser *object);
void gsd_accounts_user_set_login_frequency (GsdAccountsUser *object, guint64 value);

gint64 gsd_accounts_user_get_login_time (GsdAccountsUser *object);
void gsd_accounts_user_set_login_time (GsdAccountsUser *object, gint64 value);

GVariant *gsd_accounts_user_get_login_history (GsdAccountsUser *object);
GVariant *gsd_accounts_user_dup_login_history (GsdAccountsUser *object);
void gsd_accounts_user_set_login_history (GsdAccountsUser *object, GVariant *value);

const gchar *gsd_accounts_user_get_icon_file (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_icon_file (GsdAccountsUser *object);
void gsd_accounts_user_set_icon_file (GsdAccountsUser *object, const gchar *value);

gboolean gsd_accounts_user_get_locked (GsdAccountsUser *object);
void gsd_accounts_user_set_locked (GsdAccountsUser *object, gboolean value);

gint gsd_accounts_user_get_password_mode (GsdAccountsUser *object);
void gsd_accounts_user_set_password_mode (GsdAccountsUser *object, gint value);

const gchar *gsd_accounts_user_get_password_hint (GsdAccountsUser *object);
gchar *gsd_accounts_user_dup_password_hint (GsdAccountsUser *object);
void gsd_accounts_user_set_password_hint (GsdAccountsUser *object, const gchar *value);

gboolean gsd_accounts_user_get_automatic_login (GsdAccountsUser *object);
void gsd_accounts_user_set_automatic_login (GsdAccountsUser *object, gboolean value);

gboolean gsd_accounts_user_get_system_account (GsdAccountsUser *object);
void gsd_accounts_user_set_system_account (GsdAccountsUser *object, gboolean value);

gboolean gsd_accounts_user_get_local_account (GsdAccountsUser *object);
void gsd_accounts_user_set_local_account (GsdAccountsUser *object, gboolean value);


/* ---- */

#define GSD_TYPE_ACCOUNTS_USER_PROXY (gsd_accounts_user_proxy_get_type ())
#define GSD_ACCOUNTS_USER_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_ACCOUNTS_USER_PROXY, GsdAccountsUserProxy))
#define GSD_ACCOUNTS_USER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GSD_TYPE_ACCOUNTS_USER_PROXY, GsdAccountsUserProxyClass))
#define GSD_ACCOUNTS_USER_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_ACCOUNTS_USER_PROXY, GsdAccountsUserProxyClass))
#define GSD_IS_ACCOUNTS_USER_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_ACCOUNTS_USER_PROXY))
#define GSD_IS_ACCOUNTS_USER_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_ACCOUNTS_USER_PROXY))

typedef struct _GsdAccountsUserProxy GsdAccountsUserProxy;
typedef struct _GsdAccountsUserProxyClass GsdAccountsUserProxyClass;
typedef struct _GsdAccountsUserProxyPrivate GsdAccountsUserProxyPrivate;

struct _GsdAccountsUserProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  GsdAccountsUserProxyPrivate *priv;
};

struct _GsdAccountsUserProxyClass
{
  GDBusProxyClass parent_class;
};

GType gsd_accounts_user_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GsdAccountsUserProxy, g_object_unref)
#endif

void gsd_accounts_user_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GsdAccountsUser *gsd_accounts_user_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
GsdAccountsUser *gsd_accounts_user_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void gsd_accounts_user_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
GsdAccountsUser *gsd_accounts_user_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
GsdAccountsUser *gsd_accounts_user_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GSD_TYPE_ACCOUNTS_USER_SKELETON (gsd_accounts_user_skeleton_get_type ())
#define GSD_ACCOUNTS_USER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GSD_TYPE_ACCOUNTS_USER_SKELETON, GsdAccountsUserSkeleton))
#define GSD_ACCOUNTS_USER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GSD_TYPE_ACCOUNTS_USER_SKELETON, GsdAccountsUserSkeletonClass))
#define GSD_ACCOUNTS_USER_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GSD_TYPE_ACCOUNTS_USER_SKELETON, GsdAccountsUserSkeletonClass))
#define GSD_IS_ACCOUNTS_USER_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GSD_TYPE_ACCOUNTS_USER_SKELETON))
#define GSD_IS_ACCOUNTS_USER_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GSD_TYPE_ACCOUNTS_USER_SKELETON))

typedef struct _GsdAccountsUserSkeleton GsdAccountsUserSkeleton;
typedef struct _GsdAccountsUserSkeletonClass GsdAccountsUserSkeletonClass;
typedef struct _GsdAccountsUserSkeletonPrivate GsdAccountsUserSkeletonPrivate;

struct _GsdAccountsUserSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  GsdAccountsUserSkeletonPrivate *priv;
};

struct _GsdAccountsUserSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType gsd_accounts_user_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (GsdAccountsUserSkeleton, g_object_unref)
#endif

GsdAccountsUser *gsd_accounts_user_skeleton_new (void);


G_END_DECLS

#endif /* __ORG_FREEDESKTOP_ACCOUNTS_USER_H__ */
