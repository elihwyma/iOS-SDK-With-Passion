/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class AVCaptureDeviceInput, AVCaptureSession, NSObject, NSString, OKWidgetCameraPreviewView;

@protocol OS_dispatch_queue;

@interface OKWidgetCameraView : OKWidgetView

{
    NSObject<OS_dispatch_queue> *_sessionQueue;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_videoDeviceInput;
    AVCaptureDeviceInput *_audioDeviceInput;
    _Bool _deviceAuthorized;
    id _runtimeErrorHandlingObserver;
    id _deviceConnectedObserver;
    id _deviceDisconnectedObserver;
    OKWidgetCameraPreviewView *_previewView;
    long long _inputType;
    NSString *_inputDeviceName;
    float _volume;
}

@property (nonatomic, getter=isDeviceAuthorized) _Bool deviceAuthorized;
@property (nonatomic, readonly, getter=isSessionRunningAndDeviceAuthorized) _Bool sessionRunningAndDeviceAuthorized;
@property (nonatomic) id deviceConnectedObserver;
@property (nonatomic) id deviceDisconnectedObserver;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;
+ (id)deviceWithInputType:(long long)arg1 inputDeviceName:(id)arg2;
+ (id)keyPathsForValuesAffectingSessionRunningAndDeviceAuthorized;

- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (void)_startRunning;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)_prepareSessionIfNeeded;
- (void)__stopRunning;
- (void)checkDeviceAuthorizationStatus;
- (void)setSettingInput:(long long)arg1;
- (void)setSettingInputDeviceName:(id)arg1;
- (void)setSettingVolume:(float)arg1;
- (void)_stopRunning;

@end
