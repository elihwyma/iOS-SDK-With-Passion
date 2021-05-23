/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDragEvent, _UIDropSessionImpl, _UIInternalDraggingSessionDestination;

@protocol UIDragGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIDragGestureRecognizer : UIGestureRecognizer

{
    UIDragEvent *_dragEvent;
}

@property (weak, nonatomic, readonly, getter=_dragEvent) UIDragEvent *dragEvent;
@property (weak, nonatomic) id <UIDragGestureRecognizerDelegate> delegate;
@property (nonatomic, readonly) _UIInternalDraggingSessionDestination *sessionDestination;
@property (nonatomic, readonly) _UIDropSessionImpl *dropSession;

- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (_Bool)canPreventGestureRecognizer:(id)arg1;
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;
- (_Bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (_Bool)_shouldReceiveDragEvent:(id)arg1;
- (_Bool)_shouldReceivePress:(id)arg1;

@end
