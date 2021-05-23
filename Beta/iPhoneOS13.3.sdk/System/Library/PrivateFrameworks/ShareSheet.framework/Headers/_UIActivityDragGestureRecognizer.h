/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <UIKitCore/UILongPressGestureRecognizer.h>

@class NSString, UIAutoscroll, UIScrollView;

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer

{
    UIScrollView *_targetScrollView;
    UIAutoscroll *_autoscroll;
    struct UIEdgeInsets _draggingInsets;
}

@property (retain, nonatomic) UIScrollView *targetScrollView;
@property (retain, nonatomic) UIAutoscroll *autoscroll;
@property (nonatomic) struct UIEdgeInsets draggingInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)cancelAutoscroll;
- (void)autoscrollWillNotStart;
- (void)updateAutoscroll:(id)arg1;
- (void)beginAutoscrollAndUpdateDirectionIfNeeded;
- (int)autoscrollDirectionsForPoint:(struct CGPoint)arg1 inView:(id)arg2;

@end
