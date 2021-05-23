/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKPolygonAnnotationEventHandler.h>

@interface AKStarAnnotationEventHandler : AKPolygonAnnotationEventHandler

- (void)getInitialDraggedPoint:(struct CGPoint *)arg1 otherPoint:(struct CGPoint *)arg2 center:(struct CGPoint *)arg3 forEvent:(id)arg4 orRecognizer:(id)arg5;
- (void)updateModelWithCurrentPoint:(struct CGPoint)arg1;
- (_Bool)lockAspectRatioByDefault;

@end
