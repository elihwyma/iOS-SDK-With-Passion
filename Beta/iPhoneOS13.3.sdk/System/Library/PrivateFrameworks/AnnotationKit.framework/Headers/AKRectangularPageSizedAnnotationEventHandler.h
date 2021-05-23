/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKRectangularPageSizedAnnotationEventHandler : AKRectangularAnnotationEventHandler

- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (struct CGRect)_validateAnnotationRectForResize:(struct CGRect)arg1;
- (struct CGRect)_validateAnnotationRectForDrag:(struct CGRect)arg1;

@end
