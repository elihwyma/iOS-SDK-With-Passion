/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <UIKit/UIView.h>

@class ARCoachingGlyphRenderer, ARCoachingUpdateManager, CAMetalLayer, MISSING_TYPE, NSString;

@interface ARCoachingAnimationView : UIView

{
    CAMetalLayer *_metalLayer;
    ARCoachingUpdateManager *_updateManager;
    ARCoachingGlyphRenderer *_renderer;
    MISSING_TYPE *_lastCameraRight;
    MISSING_TYPE *_lastCameraTranslation;
    MISSING_TYPE *_rotationStartCameraRight;
    MISSING_TYPE *_rotationStartCameraTranslation;
    float _cubeAngle;
    _Bool _isRotating;
    _Bool _wasRotating;
    double _nextStateTime;
    long long _lastUpdateState;
    long long _animationState;
}

@property (nonatomic) long long animationState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateForCurrentTime:(double)arg1 timeDelta:(double)arg2;
- (void)resizeForDrawable:(id)arg1;
- (void)drawInDrawable:(id)arg1 withCommandBuffer:(id)arg2 timeDelta:(double)arg3;
- (void)setupView;
- (void)startCoachingAnimation:(long long)arg1;
- (void)killCoachingAnimation;
- (void)updateWithFrame:(id)arg1 motionTracker:(id)arg2;
- (void)orientationChanged;
- (void)clampCubeToQuarterRotation;
- (void)updateMetalLayer;
- (void)updateCubeRotation:(id)arg1 motionTracker:(id)arg2;
- (double)calcNextAnimationSwitchTime:(double)arg1 forState:(unsigned long long)arg2;
- (void)updateAlternatingPlanes:(double)arg1;
- (void)updateVerticalClamp:(double)arg1;

@end
