/*
 Image: /System/Library/PrivateFrameworks/XCTTargetBootstrap.framework/XCTTargetBootstrap
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListener;

@protocol OS_dispatch_queue, XCTConnectionAccepting;

@interface XCTTargetSession : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_daemonConnection;
    NSXPCListener *_clientListener;
    id <XCTConnectionAccepting> _connectionHandler;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) NSXPCListener *clientListener;
@property (retain) id <XCTConnectionAccepting> connectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)connect;
- (id)initWithDaemonConnection:(id)arg1;
- (void)_on_queue_connect;
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(id)arg1 protocolVersion:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_on_queue_startListeningForClientConnections;
- (_Bool)_on_queue_loadAutomationSupportLibraryFromPath:(id)arg1 error:(id *)arg2;
- (id)_on_queue_getListenerEndpoint;

@end
