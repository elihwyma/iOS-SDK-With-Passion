/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePinchGestureRecognizer : SBTouchTemplateGestureRecognizer

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)hasSignificantMotionToBegin;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (double)_computeNonlinearSpeedGain:(double)arg1;
- (double)_computeHandSizeCompensationGain:(double)arg1;

@end
