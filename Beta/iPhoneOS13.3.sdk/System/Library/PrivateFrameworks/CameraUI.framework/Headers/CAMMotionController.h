/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class BKSAccelerometer, CAMLevelViewModel, CMMotionManager, NSString;

@interface CAMMotionController : NSObject

{
    _Bool __didNotifyCaptureOrientationWasInvalid;
    long long _dominantPhysicalButton;
    CAMLevelViewModel *_activeLevelViewModel;
    long long __cachedCaptureOrientation;
    long long __fallbackCaptureOrientation;
    BKSAccelerometer *__accelerometer;
    long long __numberOfDominantPhysicalButtonObservers;
    CMMotionManager *__physicalButtonMotionManager;
    CMMotionManager *__levelMotionManager;
}

@property (nonatomic, setter=_setCachedCaptureOrientation:) long long _cachedCaptureOrientation;
@property (nonatomic, readonly) long long _fallbackCaptureOrientation;
@property (nonatomic, setter=_setDidNotifyCaptureOrientationWasInvalid:) _Bool _didNotifyCaptureOrientationWasInvalid;
@property (retain, nonatomic, setter=_setAccelerometer:) BKSAccelerometer *_accelerometer;
@property (nonatomic, setter=_setNumberOfDominantPhysicalButtonObservers:) long long _numberOfDominantPhysicalButtonObservers;
@property (nonatomic, readonly) CMMotionManager *_physicalButtonMotionManager;
@property (nonatomic, setter=_setDominantPhysicalButton:) long long dominantPhysicalButton;
@property (nonatomic, readonly) CMMotionManager *_levelMotionManager;
@property (retain, nonatomic, setter=_setActiveLevelViewModel:) CAMLevelViewModel *activeLevelViewModel;
@property (nonatomic, readonly) long long captureOrientation;
@property (nonatomic, readonly) long long panoramaCaptureOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (void)observable:(id)arg1 didPublishChange:(unsigned long long)arg2 withContext:(void *)arg3;
- (id)_debugStringForDeviceOrientation:(long long)arg1;
- (id)_debugStringForInterfaceOrientation:(long long)arg1;
- (void)_updatePhysicalButtonObservation;
- (void)endUpdatingActiveLevelViewModel;
- (void)_handleLevelMotionUpdate:(id)arg1 error:(id)arg2;
- (void)_updateLevelMotionManagerFrequency;
- (void)beginGeneratingDominantPhysicalButtonNotifications;
- (void)endGeneratingDominantPhysicalButtonNotifications;
- (void)beginUpdatingLevelViewModel:(id)arg1;
- (void)debugValidateCaptureOrientationForMode:(long long)arg1;

@end
