/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKRectangularAnnotationEventHandler : AKAnnotationEventHandler

{
    struct CGPoint _lastMungedPositionInModel;
}

@property struct CGPoint lastMungedPositionInModel;

- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (void)setupDraggingConstraints;
- (void)_updateModelFlippednessWithCurrentPoint:(struct CGPoint)arg1;
- (struct CGRect)_rectForModifiedRotatedRect:(struct CGRect)arg1 withOriginal:(struct CGRect)arg2 andRotation:(double)arg3;

@end
