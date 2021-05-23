/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class BWFigCaptureDeviceClient, NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface BWFigCaptureDeviceVendor : NSObject

{
    CDUnknownFunctionPointerType _deviceCreateFunction;
    struct OpaqueFigCaptureDevice *_device;
    NSMutableArray *_controlledStreams;
    NSMutableArray *_streamsControlledByOtherClients;
    NSMutableArray *_registeredDeviceClients;
    BWFigCaptureDeviceClient *_deviceClient;
    NSMutableArray *_victimizedDeviceClients;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSObject<OS_dispatch_source> *_deviceCloseTimer;
    int _deviceUsageCount;
    double _deviceCloseTimeoutSeconds;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_transaction> *_activeForClientAssertion;
}

+ (void)initialize;
+ (id)sharedCaptureDeviceVendor;
+ (_Bool)videoCaptureDeviceFirmwareIsLoaded;

- (void)dealloc;
- (float)structuredLightProjectorStandbyTemperatureWithError:(int *)arg1;
- (id)initWithDeviceCreateFunction:(CDUnknownFunctionPointerType)arg1;
- (void)invalidateVideoDevice:(struct OpaqueFigCaptureDevice *)arg1 forPID:(int)arg2;
- (void)_createDevice:(const char *)arg1 clientPID:(int)arg2;
- (void)_setupDeviceCloseTimer;
- (void)_resetDeviceCloseTimer;
- (void)_performBlockOnDeviceQueue:(CDUnknownBlockType)arg1;
- (void)_performBlockOnDeviceQueueSynchronously:(CDUnknownBlockType)arg1;
- (id)_registeredDeviceClientWithID:(int)arg1;
- (void)_relinquishControlOfStreams;
- (void)_releaseDevice;
- (id)_moveDeviceClientToVictimizedList;
- (void)_dumpInventory;
- (void)_deviceAvailabilityChangedForClient:(id)arg1 available:(_Bool)arg2 postNotification:(_Bool)arg3 reason:(int)arg4;
- (struct OpaqueFigCaptureStream *)_copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice *)arg3 requestControl:(_Bool)arg4 error:(int *)arg5;
- (id)_copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice *)arg3 requestControl:(_Bool)arg4 error:(int *)arg5;
- (int)_requestControlOfStreams:(id)arg1 device:(struct OpaqueFigCaptureDevice *)arg2;
- (id)_popLatestVictimizedDeviceClient;
- (void)_removeDeviceClient;
- (void)_removeVictimizedDeviceClientWithClientID:(int)arg1;
- (void)_unregisterFromStreamNotifications:(struct OpaqueFigCaptureStream *)arg1;
- (void)_handleErrorForGlobalDevice;
- (void)_registerForStreamNotifications:(struct OpaqueFigCaptureStream *)arg1;
- (void)_registerForDeviceNotifications:(struct OpaqueFigCaptureDevice *)arg1;
- (void)_unregisterForDeviceNotifications:(struct OpaqueFigCaptureDevice *)arg1;
- (void)prewarmDefaultVideoDeviceForPID:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (int)registerClientWithPID:(int)arg1 stealingBehavior:(int)arg2 deviceSharingWithOtherClientsAllowed:(_Bool)arg3 deviceAvailabilityChangedHandler:(CDUnknownBlockType)arg4;
- (struct OpaqueFigCaptureDevice *)copyDeviceForClient:(int)arg1;
- (struct OpaqueFigCaptureStream *)copyStreamWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice *)arg3 error:(int *)arg4;
- (struct OpaqueFigCaptureStream *)copyStreamForFlashlightWithPosition:(int)arg1 deviceType:(int)arg2 forDevice:(struct OpaqueFigCaptureDevice *)arg3;
- (id)copyStreamsWithPositions:(id)arg1 deviceTypes:(id)arg2 forDevice:(struct OpaqueFigCaptureDevice *)arg3 error:(int *)arg4;
- (void)setDeviceReleaseBehavior:(int)arg1 forClient:(int)arg2;
- (void)takeBackDevice:(struct OpaqueFigCaptureDevice *)arg1 forClient:(int)arg2;
- (void)shutDownSystemPressuredDevice:(struct OpaqueFigCaptureDevice *)arg1;
- (void)resumeSystemPressuredDevice;
- (_Bool)activeDeviceEquals:(struct OpaqueFigCaptureDevice *)arg1;
- (void)unregisterCallbacksForClient:(int)arg1;
- (void)_handleStreamControlTakenByAnotherClientNotification:(struct OpaqueFigCaptureStream *)arg1;
- (void)_handleStreamRelinquishedByAnotherClientNotification:(struct OpaqueFigCaptureStream *)arg1;
- (void)_handleStreamFrameReceiveTimeoutNotification:(struct OpaqueFigCaptureStream *)arg1;
- (void)_handleDeviceUnrecoverableError:(int)arg1 fromDevice:(struct OpaqueFigCaptureDevice *)arg2;

@end
