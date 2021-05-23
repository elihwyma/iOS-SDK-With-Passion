/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@class AVCaptureDevice, CALayer, NSArray, TUVideoEffect;

@protocol OS_dispatch_queue, TUVideoDeviceControllerProvider><TUVideoEffectsProvider;

@interface TUVideoDeviceController : NSObject

{
    _Bool _wantsPreview;
    _Bool _hasRefreshedPreviewAfterError;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <TUVideoDeviceControllerProvider><TUVideoEffectsProvider> _provider;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) id <TUVideoDeviceControllerProvider><TUVideoEffectsProvider> provider;
@property (nonatomic) _Bool wantsPreview;
@property (nonatomic) _Bool hasRefreshedPreviewAfterError;
@property (retain, nonatomic) AVCaptureDevice *currentInputDevice;
@property (nonatomic) int currentVideoOrientation;
@property (copy, nonatomic, readonly) NSArray *inputDevices;
@property (nonatomic, readonly, getter=isPreviewRunning) _Bool previewRunning;
@property (retain, nonatomic) CALayer *localFrontLayer;
@property (retain, nonatomic) CALayer *localBackLayer;
@property (nonatomic, readonly) struct CGRect localScreenContentsRect;
@property (retain, nonatomic) TUVideoEffect *currentVideoEffect;
@property (copy, nonatomic, readonly) NSArray *availableVideoEffects;

+ (int)_tuOrientationForVideoOrientation:(int)arg1;
+ (int)_videoOrientationForTUOrientation:(int)arg1;

- (id)init;
- (id)debugDescription;
- (id)initWithSerialQueue:(id)arg1;
- (void)startPreview;
- (void)stopPreview;
- (id)initWithProvider:(id)arg1 serialQueue:(id)arg2;
- (void)pausePreview;
- (void)setCameraZoomFactor:(double)arg1;
- (void)rampCameraZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)didStartPreviewForProvider:(id)arg1;
- (void)didStopPreviewForProvider:(id)arg1;
- (void)captureDevicesChangedForProvider:(id)arg1;
- (void)provider:(id)arg1 cameraDidBecomeAvailableForUniqueID:(id)arg2;
- (void)provider:(id)arg1 didChangeLocalVideoAttributes:(id)arg2;
- (void)provider:(id)arg1 didReceiveErrorFromCameraUniqueID:(id)arg2 error:(id)arg3;
- (void)provider:(id)arg1 didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg2;
- (void)provider:(id)arg1 cameraZoomAvailabilityDidChange:(_Bool)arg2;
- (void)noteBeginAnimationToPreview;
- (void)noteEndAnimationToPreview;
- (void)noteBeginAnimationToPIP;
- (void)noteEndAnimationToPIP;
- (void)setLocalPortraitAspectRatio:(struct CGSize)arg1 localLandscapeAspectRatio:(struct CGSize)arg2;

@end
