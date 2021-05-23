/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDragGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface UISpringLoadedGestureRecognizer : UIDragGestureRecognizer

- (struct CGPoint)locationInView:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_shouldReceiveDragEvent:(id)arg1;
- (void)_draggingEnteredWithEvent:(id)arg1;
- (void)_draggingUpdatedWithEvent:(id)arg1;
- (void)_draggingExitedWithEvent:(id)arg1;
- (void)_draggingEndedWithEvent:(id)arg1;
- (void)spring;

@end
