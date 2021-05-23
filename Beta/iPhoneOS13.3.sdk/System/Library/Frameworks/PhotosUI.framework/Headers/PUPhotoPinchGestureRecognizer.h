/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIPinchGestureRecognizer.h>

@class PUValueFilter;

__attribute__((visibility("hidden")))
@interface PUPhotoPinchGestureRecognizer : UIPinchGestureRecognizer

{
    struct CGPoint _initialTouchLocations[2];
    struct CGPoint _latestTouchLocations[2];
    _Bool _initialTouchLocationsSet;
    _Bool __touchesNeedUpdate;
    double _rotationHysteresisDegrees;
    PUValueFilter *__rotationFilter;
    struct CGRect _initialPinchRect;
}

@property (nonatomic, setter=_setTouchesNeedUpdate:) _Bool _touchesNeedUpdate;
@property (retain, nonatomic, setter=_setRotationFilter:) PUValueFilter *_rotationFilter;
@property (nonatomic) double rotationHysteresisDegrees;
@property (nonatomic) struct CGRect initialPinchRect;

- (void)reset;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_updateIfNeeded;
- (struct CGPoint)adjustedInitialCenterInView:(id)arg1;
- (struct CGPoint)adjustedTranslationInView:(id)arg1;
- (double)adjustedRotationInView:(id)arg1;
- (double)adjustedScaleInView:(id)arg1;
- (struct CGPoint)adjustedTranslationVelocityInView:(id)arg1;
- (double)adjustedRotationVelocityInView:(id)arg1;
- (double)adjustedScaleVelocityInView:(id)arg1;

@end
