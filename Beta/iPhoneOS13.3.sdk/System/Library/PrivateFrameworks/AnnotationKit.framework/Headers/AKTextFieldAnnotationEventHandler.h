/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationEventHandler.h>

@interface AKTextFieldAnnotationEventHandler : AKAnnotationEventHandler

+ (_Bool)allowsDragging;

- (_Bool)handleDownEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)enterDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;
- (_Bool)continueDraggableAreaEventTrackingLoopWithEvent:(id)arg1 orRecognizer:(id)arg2;

@end
