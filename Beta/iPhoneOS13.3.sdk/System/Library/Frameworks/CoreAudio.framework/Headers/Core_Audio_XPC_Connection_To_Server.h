/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Core_Audio_XPC_Connection_To_Server : NSObject

{
    _Bool _first_contact;
    _Bool _definitely_die;
    _Bool _server_is_dead;
    _Bool _registered_for_notification;
    int _notify_token;
    NSXPCConnection *_current_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_lifetime_event_queue;
    weak_ptr_7745b585 _lifetime_event_handler;
}

@property _Bool first_contact;
@property _Bool definitely_die;
@property _Bool server_is_dead;
@property _Bool registered_for_notification;
@property int notify_token;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *lifetime_event_queue;
@property (retain, nonatomic) NSXPCConnection *current_connection;
@property (nonatomic) weak_ptr_7745b585 lifetime_event_handler;

+ (id)server;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)get_proxy:(CDUnknownBlockType)arg1;
- (void)create;
- (void)handle_server_death;
- (void)handle_server_resurrection;
- (void)remove_connection;
- (_Bool)do_ping:(id)arg1;
- (void)add_connection:(id)arg1;
- (void)send_server_died;
- (void)send_server_resurrected;
- (void)send_first_contact;
- (void)register_for_resurrection_notification;
- (id)_lazy_get_connection;
- (id)lazy_get_connection;

@end
