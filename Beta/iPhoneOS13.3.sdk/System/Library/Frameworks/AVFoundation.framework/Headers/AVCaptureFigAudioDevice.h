/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <AVFoundation/AVCaptureDevice.h>

@class AVWeakReference, NSDictionary, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVCaptureFigAudioDevice : AVCaptureDevice

{
    NSObject<OS_dispatch_queue> *_fcsQueue;
    struct OpaqueFigCaptureSource *_fcs;
    NSDictionary *_attributes;
    _Bool _levelMeteringEnabled;
    _Bool _isConnected;
    NSString *_localizedName;
    AVWeakReference *_weakReference;
    NSObject<OS_dispatch_semaphore> *_serverConnectionDiedSemaphore;
}

+ (void)initialize;
+ (id)_devices;
+ (void)_reconnectDevices:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)localizedName;
- (id)uniqueID;
- (id)deviceType;
- (_Bool)isConnected;
- (_Bool)hasMediaType:(id)arg1;
- (void)_handleNotification:(struct __CFString *)arg1 payload:(id)arg2;
- (_Bool)startUsingDevice:(id *)arg1;
- (void)stopUsingDevice;
- (id)modelID;
- (_Bool)supportsAVCaptureSessionPreset:(id)arg1;
- (_Bool)isInUseByAnotherApplication;
- (struct OpaqueCMClock *)deviceClock;
- (_Bool)isBuiltInStereoAudioCaptureSupported;
- (id)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (void)_reconnectToFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg1;
- (id)_copyFigCaptureSourceProperty:(struct __CFString *)arg1;
- (void)audioInputDevicesDidChangeHandler:(id)arg1;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id)arg1;
- (struct OpaqueFigCaptureSource *)figCaptureSource;
- (id)figCaptureSourceAudioSettingsForSessionPreset:(id)arg1;

@end
