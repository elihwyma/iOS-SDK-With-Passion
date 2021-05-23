/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@class NSString, SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer

{
    SBFluidSwitcherViewController *_switcherViewController;
    double _absoluteScale;
    double _lastPerimeter;
    SBTouchHistory *_touchHistory;
    struct CGPoint _initialCentroid;
    struct CGPoint _absoluteTranslation;
    struct CGPoint _additionalTranslationDueToChangingAnchorPoints;
}

@property (nonatomic) struct CGPoint absoluteTranslation;
@property (nonatomic) double absoluteScale;
@property (nonatomic) struct CGPoint additionalTranslationDueToChangingAnchorPoints;
@property (nonatomic) double lastPerimeter;
@property (nonatomic) struct CGPoint initialCentroid;
@property (retain, nonatomic) SBTouchHistory *touchHistory;
@property (weak, nonatomic) SBFluidSwitcherViewController *switcherViewController;
@property (nonatomic, readonly) struct CGPoint centroid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;
- (double)_hysteresis;
- (double)peakSpeed;
- (id)logCategory;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (double)animationDistance;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (struct CGPoint)translationWithoutConsideringScaleInView:(id)arg1;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (_Bool)_shouldAddNewTouchesAfterGestureRecognition;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_setMatchedPolygon:(id)arg1;
- (void)_installTemplates;
- (struct CGPoint)_centroidInSwitcherViewForPolygon:(id)arg1;
- (_Bool)_isMatchedTemplateScrunchTemplate;
- (id)_switcherView;

@end
