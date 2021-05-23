/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCaptureSessionInternal, NSArray, NSString;

@interface AVCaptureSession : NSObject

{
    AVCaptureSessionInternal *_internal;
}

@property (copy, nonatomic) NSString *sessionPreset;
@property (nonatomic, readonly) NSArray *inputs;
@property (nonatomic, readonly) NSArray *outputs;
@property (nonatomic, readonly) NSArray *connections;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly, getter=isInterrupted) _Bool interrupted;
@property (nonatomic) _Bool usesApplicationAudioSession;
@property (nonatomic) _Bool automaticallyConfiguresApplicationAudioSession;
@property (nonatomic) _Bool automaticallyConfiguresCaptureDeviceForWideColor;
@property (nonatomic, readonly) struct OpaqueCMClock *masterClock;

+ (void)initialize;
+ (id)allSessionPresets;
+ (_Bool)_isActiveColorSpaceBeingConfiguredForDevice:(id)arg1;
+ (void)_beginConfiguringActiveColorSpaceForDevice:(id)arg1;
+ (void)_finishConfiguringActiveColorSpaceForDevice:(id)arg1;
+ (id)dotString;
+ (_Bool)automaticallyNotifiesObserversOfMasterClock;
+ (_Bool)automaticallyNotifiesObserversOfRunning;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)_setRunning:(_Bool)arg1;
- (void)stopRunning;
- (void)startRunning;
- (void)addConnection:(id)arg1;
- (void)removeConnection:(id)arg1;
- (void)beginConfiguration;
- (void)commitConfiguration;
- (_Bool)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (_Bool)canAddOutput:(id)arg1;
- (void)addOutput:(id)arg1;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (_Bool)isBeingConfigured;
- (_Bool)notifiesOnMainThread;
- (void)_handleServerConnectionDiedNotification;
- (int)_createFigCaptureSession;
- (void)_beginConfiguration;
- (void)_makeConfigurationLive:(id)arg1;
- (void)_teardownFigCaptureSession;
- (_Bool)canSetSessionPreset:(id)arg1;
- (void)_commitConfiguration;
- (id)sessionVideoCaptureDevices;
- (_Bool)_buildAndRunGraph;
- (void)_determineMasterClock;
- (void)_setMasterClock:(struct OpaqueCMClock *)arg1;
- (_Bool)_canAddInput:(id)arg1 failureReason:(id *)arg2;
- (_Bool)_addInputWithNoConnections:(id)arg1 exceptionReason:(id *)arg2;
- (id)_connectionsForNewInputPort:(id)arg1;
- (_Bool)_addConnection:(id)arg1 exceptionReason:(id *)arg2;
- (void)_removeInput:(id)arg1;
- (void)_removeConnectionsForInputPort:(id)arg1;
- (_Bool)_canAddOutput:(id)arg1 failureReason:(id *)arg2;
- (_Bool)_addOutputWithNoConnections:(id)arg1 exceptionReason:(id *)arg2;
- (id)_connectionsForNewOutput:(id)arg1;
- (_Bool)canAddConnection:(id)arg1;
- (void)_removeConnection:(id)arg1;
- (_Bool)_canAddVideoPreviewLayer:(id)arg1 failureReason:(id *)arg2;
- (void)_removeAllPreviewLayers;
- (id)_connectionsForNewVideoPreviewLayer:(id)arg1;
- (_Bool)_canAddConnection:(id)arg1 failureReason:(id *)arg2;
- (id)_stopError;
- (void)_postRuntimeError:(id)arg1;
- (_Bool)_stopFigCaptureSession;
- (_Bool)videoHDREnabledForDevice:(id)arg1 format:(id)arg2 sessionPreset:(id)arg3;
- (void)informSessionMembersOfChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)_rebuildGraph;
- (void)handleVideoInputDevice:(id)arg1 activeFormatChanged:(id)arg2;
- (void)handleVideoInputDevice:(id)arg1 activeDepthDataFormatChanged:(id)arg2;
- (void)_updateDeviceActiveFormatsAndActiveConnections;
- (void)_updateDepthDataDeliveryEnabledForAllConnectedSourceDevices;
- (_Bool)isOverCost:(id *)arg1;
- (id)_figCaptureSessionConfiguration;
- (_Bool)_startFigCaptureSession;
- (void)_stopAndTearDownGraph;
- (void)_notifySessionStopped;
- (id)_outputWithClass:(Class)arg1 forSourceDevice:(id)arg2;
- (void)_updateDepthDataDeliveryEnabledForSourceDevice:(id)arg1;
- (void)_setInterrupted:(_Bool)arg1 withReason:(int)arg2;
- (void)_notifySessionStarted;
- (void)_notifyMediaServerdDied;
- (void)_reconnectAfterServerConnectionDied;
- (void)_handleDidStartRunningNotificationWithPayload:(id)arg1;
- (void)_handleDidStopRunningNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationCommittedNotificationWithPayload:(id)arg1;
- (void)_handleConfigurationDidBecomeLiveNotificationWithPayload:(id)arg1;
- (void)addInputWithNoConnections:(id)arg1;
- (void)addOutputWithNoConnections:(id)arg1;
- (_Bool)_addVideoPreviewLayer:(id)arg1 exceptionReason:(id *)arg2;
- (_Bool)_addVideoPreviewLayerWithNoConnection:(id)arg1 exceptionReason:(id *)arg2;
- (void)_removeVideoPreviewLayer:(id)arg1;
- (void)cancelForegroundAutoResumeAfterDate:(id)arg1;

@end
