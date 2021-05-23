/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

@interface SBTouchTemplatePanGestureRecognizer : SBTouchTemplateGestureRecognizer

{
    _Bool _recognizesHorizontalPanning;
    _Bool _recognizesVerticalPanning;
}

@property (nonatomic) _Bool recognizesHorizontalPanning;
@property (nonatomic) _Bool recognizesVerticalPanning;

+ (id)defaultTemplates;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (_Bool)hasSignificantMotionToBegin;
- (_Bool)_directionallyAcceptMotion;
- (struct CGPoint)_convertPortraitPoint:(struct CGPoint)arg1 toOrientation:(long long)arg2;
- (double)_arcCenter;
- (double)_arcSize;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;

@end
