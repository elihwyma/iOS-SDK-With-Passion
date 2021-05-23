/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface Core_Audio_Daemon : NSObject

{
    _Bool _is_alive;
    NSMutableSet *_remote_connections;
    NSMutableSet *_property_listener_connections;
    NSMutableSet *_io_listener_connections;
    struct queue _high_priority_root_queue;
    struct queue _scratch_queue;
    shared_ptr_667dfb54 _creation_mutex;
    shared_ptr_49302bbc _guts;
    shared_ptr_49cded41 _portal;
    shared_ptr_5a4052be _host;
    shared_ptr_09b27a3f _settings_storage;
    shared_ptr_3125c406 _default_device_manager;
    shared_ptr_5c838a21 _object_state_manager;
    shared_ptr_05bb91fa _default_device_all_control_value_observer;
}

@property (nonatomic) shared_ptr_667dfb54 creation_mutex;
@property (nonatomic) _Bool is_alive;
@property (nonatomic) shared_ptr_49302bbc guts;
@property (nonatomic) shared_ptr_49cded41 portal;
@property (retain, nonatomic) NSMutableSet *remote_connections;
@property (retain, nonatomic) NSMutableSet *property_listener_connections;
@property (retain, nonatomic) NSMutableSet *io_listener_connections;
@property (nonatomic) shared_ptr_5a4052be host;
@property (nonatomic) shared_ptr_09b27a3f settings_storage;
@property (nonatomic) shared_ptr_3125c406 default_device_manager;
@property (nonatomic) shared_ptr_5c838a21 object_state_manager;
@property (nonatomic) shared_ptr_05bb91fa default_device_all_control_value_observer;
@property (nonatomic) struct queue high_priority_root_queue;
@property (nonatomic) struct queue scratch_queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id).cxx_construct;
- (void)create_aggregate_device:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)destroy_aggregate_device:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)add_property_listener:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)handle_io_message:(unsigned int)arg1 with:(unsigned int)arg2 incoming:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)release_resources;
- (void)audio_object_get_property_info:(unsigned int)arg1 token:(unsigned int)arg2 at:(struct AudioObjectPropertyAddress)arg3 reply:(CDUnknownBlockType)arg4;
- (void)create_device_for_client_io:(unsigned int)arg1 with:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)create_io_client_on:(unsigned int)arg1 using_listener:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)audio_object_get_property_data:(unsigned int)arg1 token:(unsigned int)arg2 at:(struct AudioObjectPropertyAddress)arg3 with:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)audio_object_set_property_data:(unsigned int)arg1 token:(unsigned int)arg2 at:(struct AudioObjectPropertyAddress)arg3 with:(id)arg4 value:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)send_io_message:(struct XPC_Message_Payload)arg1;
- (void)call_all_remote_listeners_async:(id)arg1;
- (void)ping:(int)arg1 reply:(CDUnknownBlockType)arg2;
- (id)initWithMCPType:(long long)arg1;
- (void)add_device_token_to_user_info:(unsigned int)arg1 user_info:(id)arg2;
- (unsigned int)device_token_from_user_info_item:(id)arg1;
- (void)stop_all_client_io:(unsigned int)arg1;
- (void)start_all_client_io:(unsigned int)arg1;
- (void)create_config_change_observers;
- (void)create_property_observer;
- (id)create_listener_connection:(id)arg1;
- (id)create_io_listener_connection:(id)arg1;
- (int)get_client_pid_from_current_connection;
- (void)sendPropertiesChanged:(unsigned int)arg1 count:(unsigned long long)arg2 addresses:(const struct AudioObjectPropertyAddress *)arg3;
- (void)call_all_remote_listeners:(id)arg1;

@end
