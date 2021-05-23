/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <CoreAudio/Core_Audio_Gateway.h>

__attribute__((visibility("hidden")))
@interface Core_Audio_IO_Gateway : Core_Audio_Gateway

{
    struct Client_Side_IO_Gateway *_client_gateway;
}

@property (nonatomic) struct Client_Side_IO_Gateway *client_gateway;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handle_server_disconnected;
- (void)handle_io_message:(unsigned int)arg1 with:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)stop_before_io_device_change:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)start_after_io_device_change:(unsigned int)arg1;

@end
