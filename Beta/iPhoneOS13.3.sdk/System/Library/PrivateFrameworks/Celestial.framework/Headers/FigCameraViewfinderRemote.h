/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCameraViewfinder.h>

@class FigNSXPCConnection, FigStateMachine, NSMapTable, NSObject, NSString;

@protocol FigCameraViewfinderRemoteObject, OS_dispatch_queue;

@interface FigCameraViewfinderRemote : FigCameraViewfinder

{
    NSMapTable *_weakSessionTable;
    FigStateMachine *_stateMachine;
    FigNSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionManagementQueue;
    id <FigCameraViewfinderRemoteObject> _remoteViewfinder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)cameraViewfinder;
+ (id)remoteObjectCallbacksInterface;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)startWithOptions:(id)arg1;
- (void)_setupStateMachine;
- (void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
- (void)viewfinderSessionDidEnd;
- (void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(int)arg2 thumbnailData:(id)arg3 timestamp:(CDStruct_1b6d18a9)arg4;
- (void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
- (void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(int)arg2;
- (void)_bringupXPCConnectionAndStartRemoteViewfinderWithOptions:(id)arg1;
- (void)_teardownXPCConnectionAndRemoteViewfinder;
- (void)_handleServerDeathWithOptions:(id)arg1 reconnect:(_Bool)arg2;

@end
