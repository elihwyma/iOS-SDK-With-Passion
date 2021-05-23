/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAGradientLayer, CALayer;

@interface CAMStageLightAnimator : NSObject

{
    CAGradientLayer *_gradientLayer;
    CALayer *_circleLayer;
    unsigned long long _state;
    unsigned long long __appearingAnimationCount;
    struct CGRect _circleBaseFrame;
}

@property (nonatomic, setter=_setAppearingAnimationCount:) unsigned long long _appearingAnimationCount;
@property (nonatomic, readonly, getter=_isAppearing) _Bool _appearing;
@property (nonatomic, readonly) CAGradientLayer *gradientLayer;
@property (nonatomic, readonly) CALayer *circleLayer;
@property (nonatomic) unsigned long long state;
@property (nonatomic) struct CGRect circleBaseFrame;

- (void)setCircleBaseFrame:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)_animateAppearing;
- (CDStruct_f31c9284)_circleGeometryForState:(unsigned long long)arg1;
- (CDStruct_d1ca95b4)_gradientGeometryForState:(unsigned long long)arg1;
- (CDStruct_9c823225)_gradientPropertiesForGeometry:(CDStruct_d1ca95b4)arg1;
- (void)_animateGradientToProperties:(CDStruct_9c823225)arg1 duration:(double)arg2 timing:(id)arg3;
- (void)_animateCircleToGeometry:(CDStruct_f31c9284)arg1 duration:(double)arg2 timing:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_animateSearchingIfNeededFromState:(unsigned long long)arg1;
- (void)_animateBounceIfNeeded;
- (void)_animateHidden;
- (void)_didFinishAppearing;
- (double)_circleLineWidth;
- (void)_animateGradientFromProperties:(CDStruct_9c823225)arg1 toProperties:(CDStruct_9c823225)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5;
- (void)_animateCircleFromGeometry:(CDStruct_f31c9284)arg1 toGeometry:(CDStruct_f31c9284)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (CDStruct_f31c9284)_currentCircleGeometry;
- (CDStruct_9c823225)_currentGradientProperties;
- (void)_animateGradientProperties:(CDStruct_9c823225 *)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5;
- (void)_animateCircleGeometry:(CDStruct_f31c9284 *)arg1 count:(unsigned long long)arg2 duration:(double)arg3 timing:(id)arg4 repeats:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithGradientLayer:(id)arg1 circleLayer:(id)arg2;

@end
