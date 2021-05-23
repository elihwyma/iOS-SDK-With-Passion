/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSXPCConnection;

@protocol ICCloudServerListenerEndpointProvider, OS_dispatch_queue;

@interface ICCloudClientCloudService : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <ICCloudServerListenerEndpointProvider> _listenerEndpointProvider;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic, readonly) id <ICCloudServerListenerEndpointProvider> listenerEndpointProvider;
@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

- (id)_xpcConnectionWithListenerEndpoint:(id)arg1;
- (id)initWithListenerEndpointProvider:(id)arg1;

@end
