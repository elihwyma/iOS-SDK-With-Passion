/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <UIKit/UIView.h>

@class CALayer, CAReplicatorLayer;

@interface CAMTimelapseShutterRingView : UIView

{
    _Bool _animating;
    double __smallTickRotationRadians;
    double __largeTickRotationRadians;
    CALayer *__smallTickLayer;
    CALayer *__largeTickLayer;
    CAReplicatorLayer *__smallTickReplicatorLayer;
    CAReplicatorLayer *__largeTickReplicatorLayer;
    CALayer *__timerHandLayer;
    CALayer *__timerHandParentLayer;
    CDStruct_8ae1ff66 _spec;
}

@property (nonatomic, readonly) double _smallTickRotationRadians;
@property (nonatomic, readonly) double _largeTickRotationRadians;
@property (nonatomic, readonly) CALayer *_smallTickLayer;
@property (nonatomic, readonly) CALayer *_largeTickLayer;
@property (nonatomic, readonly) CAReplicatorLayer *_smallTickReplicatorLayer;
@property (nonatomic, readonly) CAReplicatorLayer *_largeTickReplicatorLayer;
@property (nonatomic, readonly) CALayer *_timerHandLayer;
@property (nonatomic, readonly) CALayer *_timerHandParentLayer;
@property (nonatomic, readonly) CDStruct_8ae1ff66 spec;
@property (nonatomic, getter=isAnimating) _Bool animating;

- (void)layoutSublayersOfLayer:(id)arg1;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void)setSpec:(CDStruct_8ae1ff66)arg1;
- (_Bool)_shouldUseAnimations;
- (id)initWithSpec:(CDStruct_8ae1ff66)arg1;
- (id)initWithFrame:(struct CGRect)arg1 spec:(CDStruct_8ae1ff66)arg2;
- (void)_commonCAMTimelapseShutterRingViewInitializationWithSpec:(CDStruct_8ae1ff66)arg1;
- (double)_rotationRadiansFromTickCount:(long long)arg1;
- (double)_tickRadiusForTickSize:(struct CGSize)arg1 ringSize:(struct CGSize)arg2;
- (void)_removeStartAnimations;
- (void)_removeStopAnimations;
- (void)_addStartAnimations;
- (void)_addStopAnimations;
- (double)_rotationZFromTransform:(struct CATransform3D)arg1;

@end
