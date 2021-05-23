/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSObject.h>

@class NSExtension, NSString, NSXPCConnection, NSXPCListener, NSXPCListenerEndpoint;

@interface RPBroadcastExtensionProxy : NSObject

{
    CDUnknownBlockType _serviceInfoHandler;
    CDUnknownBlockType _broadcastURLHandler;
    CDUnknownBlockType _errorHandler;
    NSXPCListener *_listener;
    NSExtension *_broadcastUploadExtension;
    NSXPCConnection *_connection;
    CDUnknownBlockType _connectionReadyHandler;
    NSXPCListenerEndpoint *_listenerEndpoint;
}

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSExtension *broadcastUploadExtension;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) CDUnknownBlockType connectionReadyHandler;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) CDUnknownBlockType serviceInfoHandler;
@property (copy, nonatomic) CDUnknownBlockType broadcastURLHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)ping;
- (void)invalidateConnection;
- (void)updateServiceInfo:(id)arg1;
- (void)updateBroadcastURL:(id)arg1;
- (void)finishBroadcastWithError:(id)arg1;
- (void)processPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupNewConnection:(id)arg1;
- (id)initWithBroadcastUploadExtension:(id)arg1;
- (id)initWithBroadcastUploadListenerEndpoint:(id)arg1;
- (void)establishConnectionWithHandler:(CDUnknownBlockType)arg1;

@end
