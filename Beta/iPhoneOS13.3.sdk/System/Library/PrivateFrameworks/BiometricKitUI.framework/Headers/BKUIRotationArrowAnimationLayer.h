/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <QuartzCore/CALayer.h>

@class CAShapeLayer, UIColor;

@interface BKUIRotationArrowAnimationLayer : CALayer

{
    long long _orientation;
    double _radius;
    double _arrowAngle;
    double _arrowlength;
    UIColor *_color;
    CALayer *_arrowContainer;
    CDUnknownBlockType _getOrientation;
    CAShapeLayer *_arrowLayerLeft;
    CAShapeLayer *_arrowLayerRight;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_rotationLayer;
    struct CGSize _containerSize;
    struct CGPoint _hostCenter;
}

@property (nonatomic) double radius;
@property (nonatomic) double arrowAngle;
@property (nonatomic) double arrowlength;
@property (nonatomic) struct CGSize containerSize;
@property (nonatomic) struct CGPoint hostCenter;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) CALayer *arrowContainer;
@property (copy, nonatomic) CDUnknownBlockType getOrientation;
@property (retain, nonatomic) CAShapeLayer *arrowLayerLeft;
@property (retain, nonatomic) CAShapeLayer *arrowLayerRight;
@property (retain, nonatomic) CAShapeLayer *circleLayer;
@property (retain, nonatomic) CAShapeLayer *rotationLayer;
@property (nonatomic) long long orientation;

+ (id)animatorWith:(struct CGRect)arg1 color:(id)arg2 radiusForOrientation:(CDUnknownBlockType)arg3;
+ (id)animatorByEmbedding:(id)arg1 color:(id)arg2 radiusForOrientation:(CDUnknownBlockType)arg3;

- (id)init;
- (void)layoutSublayers;
- (void)resetLayout;
- (id)initWith:(struct CGRect)arg1 radiusForOrientation:(CDUnknownBlockType)arg2 arrowAngle:(double)arg3 arrowLength:(double)arg4 color:(id)arg5;
- (id)_extendedInit:(struct CGPoint)arg1;
- (void)_resetHideCircleLayerStrokeTo:(double)arg1;
- (void)_layoutArrowSubLayers;
- (void)enableDebug:(_Bool)arg1;
- (void)_updateCircleLayerLayout:(long long)arg1;
- (void)_layoutArrowContainer:(long long)arg1;
- (void)_animateArrowClockwise:(double)arg1 duration:(double)arg2 animationDelay:(double)arg3;
- (void)_animateArrowCounterClockwise:(double)arg1 duration:(double)arg2 animationDelay:(double)arg3;
- (void)_animateArrowUpsideDown:(double)arg1 duration:(double)arg2 animationDelay:(double)arg3;
- (void)_zeroOutArrowStroke;
- (void)_animateArrowPaths:(double)arg1 delay:(double)arg2 duration:(double)arg3;
- (void)_rotateRotationLayerBy:(double)arg1 startTime:(double)arg2 fromDegree:(unsigned long long)arg3 toDegree:(unsigned long long)arg4;
- (void)_landscapeAnimationImpl:(double)arg1 duration:(double)arg2 animationDelay:(double)arg3;
- (void)stopAnimationRemoveStroke;
- (void)_recreateArrow;
- (void)animateDirectionPath:(double)arg1 orientation:(long long)arg2 duration:(double)arg3 animationDelay:(double)arg4;

@end
