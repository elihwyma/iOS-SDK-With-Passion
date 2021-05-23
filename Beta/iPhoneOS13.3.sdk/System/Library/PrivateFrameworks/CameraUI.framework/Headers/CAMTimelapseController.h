/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

#import <CameraUI/Swift-Protocol.h>

@class CAMCaptureGraphConfiguration, CAMFocusResult, CAMLocationController, CAMMotionController, CAMNebulaDaemonProxyManager, CAMPersistenceController, CAMStorageController, CAMTimelapseState, CUCaptureController, NSCountedSet, NSDate, NSMutableSet, NSString;

@protocol CAMTimelapseControllerDelegate, OS_dispatch_source;

@interface CAMTimelapseController : NSObject <Swift>

{
    _Bool __ignoringTimerCallbacksForTearDown;
    _Bool __ignoringTimerCallbacksWaitingForCaptureResponse;
    _Bool __shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
    _Bool __backendRecoveryNeeded;
    _Bool __previewStarted;
    _Bool __focusAndExposureAdjusted;
    CAMCaptureGraphConfiguration *__graphConfigurationForCurrentState;
    id <CAMTimelapseControllerDelegate> _delegate;
    CAMFocusResult *_lastFocusResult;
    CAMTimelapseState *__state;
    NSObject<OS_dispatch_source> *__captureTimer;
    NSCountedSet *__inFlightTimelapseUUIDs;
    NSMutableSet *__pendingCompletedStates;
    CUCaptureController *__captureController;
    CAMLocationController *__locationController;
    CAMMotionController *__motionController;
    CAMPersistenceController *__persistenceController;
    CAMStorageController *__storageController;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
}

@property (nonatomic, readonly) CAMTimelapseState *_state;
@property (nonatomic, readonly, getter=_graphConfigurationForCurrentState) CAMCaptureGraphConfiguration *_graphConfigurationForCurrentState;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_captureTimer;
@property (nonatomic, readonly) _Bool _ignoringTimerCallbacksForTearDown;
@property (nonatomic, readonly) _Bool _ignoringTimerCallbacksWaitingForCaptureResponse;
@property (nonatomic, readonly) NSCountedSet *_inFlightTimelapseUUIDs;
@property (nonatomic, readonly) NSMutableSet *_pendingCompletedStates;
@property (nonatomic, setter=_setShouldUpdateFocusAndExposureWhenContrastDetectionCompletes:) _Bool _shouldUpdateFocusAndExposureWhenContrastDetectionCompletes;
@property (nonatomic, setter=_setBackendRecoveryNeeded:) _Bool _backendRecoveryNeeded;
@property (nonatomic, setter=_setPreviewStarted:) _Bool _previewStarted;
@property (nonatomic, getter=_isFocusAndExposureAdjusted, setter=_setFocusAndExposureAdjusted:) _Bool _focusAndExposureAdjusted;
@property (nonatomic, readonly) CUCaptureController *_captureController;
@property (nonatomic, readonly) CAMLocationController *_locationController;
@property (nonatomic, readonly) CAMMotionController *_motionController;
@property (nonatomic, readonly) CAMPersistenceController *_persistenceController;
@property (nonatomic, readonly) CAMStorageController *_storageController;
@property (nonatomic, readonly) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager;
@property (weak, nonatomic) id <CAMTimelapseControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isCapturing) _Bool capturing;
@property (nonatomic, readonly) NSDate *captureStartTime;
@property (nonatomic) CAMFocusResult *lastFocusResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)createPlaceholderResultForTimelapseState:(id)arg1;
+ (struct __IOSurface *)_newVideoPreviewSurfaceForTimelapseState:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)stillImageRequestDidCompleteStillImageCapture:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (void)stillImageRequestDidCompleteStillImageLocalPersistence:(id)arg1 withResponse:(id)arg2 error:(id)arg3;
- (_Bool)startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (_Bool)stopCapturingWithReasons:(long long)arg1;
- (void)forceStopTimelapseCaptureWithReasons:(long long)arg1;
- (void)_deviceStarted:(id)arg1;
- (void)_sessionStarted:(id)arg1;
- (void)_sessionRuntimeErrored:(id)arg1;
- (void)_previewStarted:(id)arg1;
- (id)initWithCaptureController:(id)arg1 locationController:(id)arg2 motionController:(id)arg3 persistenceController:(id)arg4 storageController:(id)arg5 nebulaDaemonProxyManager:(id)arg6;
- (void)_teardownCaptureTimer;
- (void)_restoreCaptureStateFromDisk;
- (void)_prepareForTimelapseCaptureSetModeAndDevice:(_Bool)arg1;
- (void)_triggerBackendCrashRecoveryIfNeeded;
- (void)_updateFocusAndExposureForStartCapturing;
- (void)_startCaptureTimer;
- (void)_startCapturingWithCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)_stopCapturingWithReasons:(long long)arg1;
- (void)_setNewCaptureStateForCaptureDevice:(long long)arg1 captureSession:(unsigned short)arg2;
- (void)_invalidateCachedGraphConfiguration;
- (void)_reserveDiskSpaceForTimelapseUUID:(id)arg1 preferHEVC:(_Bool)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)_saveStateToDisk:(id)arg1;
- (id)_createThumbnailImageFromPlaceholderResult:(id)arg1;
- (void)_notifyAGGDForDidStopCapturingWithState:(id)arg1;
- (void)_notifyInsufficientDiskSpaceForStartingCaptureWithNeededBytes:(long long)arg1 availableBytes:(long long)arg2;
- (void)_captureTimerFired;
- (void)_updateLocationIfNecessary;
- (_Bool)_canCapturePhoto;
- (_Bool)_enqueueCaptureRequest;
- (void)_notifyInsufficientDiskSpaceForContinuingCapture;
- (id)_stillImageCaptureRequestWithCurrentSettings;
- (void)_updateFocusLensPosition:(float)arg1 forTimelapseUUID:(id)arg2 forceUpdate:(_Bool)arg3;
- (void)_resetIgnoringTimerCallbacksWaitingForCaptureResponse;
- (void)restoreConfiguration;

@end
