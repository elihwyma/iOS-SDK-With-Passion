/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, NSDate;

@interface BKUIPearlPositioningGuideView : UIView

{
    CADisplayLink *_displayLink;
    _Bool _startMaskFromCenter;
    double _startLineWidth;
    double _startEdgeDistance;
    double _startCornerRadius;
    double _startPostCornerLength;
    double _startLineAlpha;
    struct CGPoint _startPortalCenter;
    double _targetLineWidth;
    double _targetEdgeDistance;
    double _targetCornerRadius;
    double _targetPostCornerLength;
    double _targetLineAlpha;
    struct CGPoint _targetPortalCenter;
    double _lastAnimationTickProgres;
    CAShapeLayer *_roundedRectMaskLayer;
    double _lineWidth;
    double _edgeDistance;
    double _cornerRadius;
    double _postCornerLength;
    double _lineAlpha;
    double _ringRadius;
    NSDate *_animationStart;
    double _animationDuration;
    long long _animationCurve;
    CDUnknownBlockType _animationCompletion;
    struct CGPoint _portalCenter;
}

@property (nonatomic) CAShapeLayer *roundedRectMaskLayer;
@property (nonatomic) double lineWidth;
@property (nonatomic) double edgeDistance;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double postCornerLength;
@property (nonatomic) double lineAlpha;
@property (nonatomic) double ringRadius;
@property (nonatomic) struct CGPoint portalCenter;
@property (retain, nonatomic) NSDate *animationStart;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long animationCurve;
@property (copy, nonatomic) CDUnknownBlockType animationCompletion;
@property (nonatomic, readonly) double minimumMaskLayerDistanceFromCenter;
@property (nonatomic, readonly) double maximumMaskLayerDistanceFromCenter;

- (void)setHidden:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_stopDisplay;
- (void)_startDisplay;
- (void)_displayTick;
- (_Bool)useRegularPadLayout;
- (void)_startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)breathe;
- (void)animateToOpenValuesOverDuration:(double)arg1 curve:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateToBreatheOutValuesOverDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_roundedRectMaskForMaskDistance:(double)arg1 portalCenter:(struct CGPoint)arg2 cornerRadius:(double)arg3;
- (double)_updatedFloatWithTarget:(double)arg1 current:(double)arg2 start:(double)arg3 progress:(double)arg4;
- (void)resetValuesToStart;
- (void)animateToPopOutValuesOverDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToFinishedValuesOverDuration:(double)arg1 center:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareMaskLayerForStartToOpenTransition;
- (void)prepareMaskLayerForReducedMotionOpenTransition;

@end
