/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMNebulaIrisBackendController, CAMNebulaKeepAliveController, CAMPersistenceController, CAMTimelapseBackendController, NSMutableArray, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface CAMNebulaDaemon : NSObject

{
    CAMTimelapseBackendController *__timelapseBackendController;
    CAMNebulaIrisBackendController *__irisBackendController;
    CAMPersistenceController *__persistenceController;
    CAMNebulaKeepAliveController *__keepAliveController;
    NSXPCListener *__listener;
    NSObject<OS_dispatch_queue> *__queue;
    NSMutableArray *__connections;
}

@property (nonatomic, readonly) CAMTimelapseBackendController *_timelapseBackendController;
@property (nonatomic, readonly) CAMNebulaIrisBackendController *_irisBackendController;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, readonly) NSXPCListener *_listener;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (nonatomic, readonly) NSMutableArray *_connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)daemonConnectionManagerHasBeenDisconnected:(id)arg1;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)allowedProtocolForClientAccess:(id)arg1;
- (void)performPendingWorkAfterDelay:(double)arg1;

@end
