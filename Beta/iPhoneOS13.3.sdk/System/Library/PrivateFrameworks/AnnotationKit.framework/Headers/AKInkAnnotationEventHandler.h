/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKRectangularAnnotationEventHandler.h>

@interface AKInkAnnotationEventHandler : AKRectangularAnnotationEventHandler

+ (_Bool)allowsDraggingOfAnnotation:(id)arg1;

- (struct CGSize)naturalSizeForAnnotation;
- (_Bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)alwaysLockAspectRatio;

@end
