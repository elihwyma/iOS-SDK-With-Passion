/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <CoreAudio/Core_Audio_Gateway.h>

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Core_Audio_Property_Listener_Gateway : Core_Audio_Gateway

{
    struct Listener_List *_list_ptr;
    NSObject<OS_dispatch_queue> *_notification_queue;
}

@property (nonatomic) struct Listener_List *list_ptr;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notification_queue;
@property (nonatomic, readonly) struct Listener_List *list;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithObjectMap:(shared_ptr_3c219583)arg1;
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity)arg1 with_listener_proc:(CDUnknownFunctionPointerType)arg2 and_user_data:(void *)arg3;
- (void)remove_listener_for_property_id:(struct Property_Identity)arg1 with_listener_proc:(CDUnknownFunctionPointerType)arg2 and_user_data:(void *)arg3;
- (unsigned long long)add_listener_for_property_id:(struct Property_Identity)arg1 with_listener_block:(CDUnknownBlockType)arg2 and_queue:(id)arg3;
- (void)handle_server_disconnected;
- (void)remove_listener_for_property_id:(struct Property_Identity)arg1 with_listener_block:(CDUnknownBlockType)arg2 and_queue:(id)arg3;
- (void)handle_server_reconnected;
- (void)release_resources;
- (void)synchronously_notify_listeners_of_object:(unsigned int)arg1 about_changes_to_properties:(const vector_9f82871d *)arg2;
- (void)notify_listeners_of_object:(unsigned int)arg1 about_changes_to_properties:(const vector_9f82871d *)arg2;
- (void)handle_property_changes:(id)arg1;
- (void)handle_property_changes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)remove_listener_with_token:(unsigned long long)arg1;
- (void)remove_listeners_for_device_id:(unsigned int)arg1;

@end
