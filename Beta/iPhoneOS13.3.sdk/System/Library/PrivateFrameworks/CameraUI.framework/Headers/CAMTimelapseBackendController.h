/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class BKSApplicationStateMonitor, CAMNebulaKeepAliveController, CAMPersistenceController, CAMTimelapseState, NSMutableArray, NSString;

@protocol CAMTimelapseMovieWriterProtocol, OS_dispatch_queue;

@interface CAMTimelapseBackendController : NSObject <Swift>

{
    _Bool __writingMovie;
    _Bool __capturing;
    _Bool __oldMovieWriterEnabled;
    int __notifyRegisterTokenSuspendIO;
    int __notifyRegisterTokenResumeIO;
    NSMutableArray *__sessionContexts;
    NSObject<OS_dispatch_queue> *__workQueue;
    id <CAMTimelapseMovieWriterProtocol> __movieWriter;
    CAMTimelapseState *__currentState;
    CAMNebulaKeepAliveController *__keepAliveController;
    CAMPersistenceController *__persistenceController;
    BKSApplicationStateMonitor *__applicationStateMonitor;
}

@property (nonatomic, readonly) NSMutableArray *_sessionContexts;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_workQueue;
@property (nonatomic, readonly) _Bool _writingMovie;
@property (nonatomic, readonly) id <CAMTimelapseMovieWriterProtocol> _movieWriter;
@property (retain, nonatomic, setter=_setCurrentState:) CAMTimelapseState *_currentState;
@property (nonatomic, getter=_isCapturing, setter=_setCapturing:) _Bool _capturing;
@property (nonatomic, readonly) CAMNebulaKeepAliveController *_keepAliveController;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) _Bool _oldMovieWriterEnabled;
@property (nonatomic, readonly) int _notifyRegisterTokenSuspendIO;
@property (nonatomic, readonly) int _notifyRegisterTokenResumeIO;
@property (nonatomic, readonly) BKSApplicationStateMonitor *_applicationStateMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)_isCameraRunning;
- (void)videoRequestDidCompleteRemotePersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)startTimelapseWithUUID:(id)arg1;
- (void)resumeTimelapseWithUUID:(id)arg1;
- (void)updateTimelapseWithUUID:(id)arg1;
- (void)finishCaptureForTimelapseWithUUID:(id)arg1;
- (void)stopTimelapseWithUUID:(id)arg1;
- (void)persistenceController:(id)arg1 didGenerateVideoLocalPersistenceResult:(id)arg2 forCaptureResult:(id)arg3 fromRequest:(id)arg4;
- (id)initWithPersistenceController:(id)arg1 keepAliveController:(id)arg2;
- (void)_dispatchToMainQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)handleClientConnection:(id)arg1;
- (void)handleClientDisconnection;
- (void)_workQueue_setupCameraProcessMonitoringIfNecessary;
- (void)_workQueue_destroyApplicationStateMonitor;
- (id)_getOrCreateSessionContextForTimelapseUUID:(id)arg1;
- (void)_updateSessionContext:(id)arg1 withState:(id)arg2;
- (void)_performPendingWork;
- (void)_dispatchToWorkQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_updatePendingWorkFromDiskForceEndLastSession:(_Bool)arg1;
- (void)_permanentlyFailTimelapseUUID:(id)arg1 withState:(id)arg2;
- (void)_dispatchToWorkQueueAfterDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)_deleteItemAtPath:(id)arg1;
- (_Bool)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg1;
- (void)_writeMovieForSessionContext:(id)arg1;
- (_Bool)_shouldSaveLastTimelapseDataForDebugging;
- (void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)arg1;
- (void)_createPlaceholderAssetForState:(id)arg1;
- (struct CGAffineTransform)_frameTransformForState:(id)arg1;
- (void)_movieWrittenToFilePath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 state:(id)arg4;
- (void)_reserveDummyFileForTimelapseUUID:(id)arg1 firstImageFilePath:(id)arg2 useHEVC:(_Bool)arg3;
- (void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 metadata:(id)arg3 state:(id)arg4;
- (int)_pidForApplication:(id)arg1;

@end
