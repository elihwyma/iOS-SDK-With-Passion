/*
 Image: /System/Library/Frameworks/CoreAudio.framework/CoreAudio
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListener, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface Core_Audio_Gateway : NSObject

{
    NSXPCListener *_listener;
    NSXPCListenerEndpoint *_endpoint;
    shared_ptr_3c219583 _clientObjectMap;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) NSXPCListener *listener;
@property (nonatomic, readonly) shared_ptr_3c219583 clientObjectMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithObjectMap:(shared_ptr_3c219583)arg1;
- (void)handle_server_disconnected;
- (void)handle_server_reconnected;
- (_Bool)has_endpoint;
- (void)create_endpoint;
- (void)destroy_endpoint;

@end
