/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

@protocol Core_Audio_Hardware

- (unsigned short)create_aggregate_device:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)destroy_aggregate_device:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)add_property_listener:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)handle_io_message:with:incoming:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)audio_object_get_property_info:token:at:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)create_device_for_client_io:with:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)create_io_client_on:using_listener:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)audio_object_get_property_data:token:at:with:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)audio_object_set_property_data:token:at:with:value:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)ping:reply: /* Error: Ran out of types for this method. */;

@end
