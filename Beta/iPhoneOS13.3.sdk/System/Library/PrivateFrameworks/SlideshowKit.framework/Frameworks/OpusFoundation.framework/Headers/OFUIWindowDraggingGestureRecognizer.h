/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIGestureRecognizer.h>

@interface OFUIWindowDraggingGestureRecognizer : UIGestureRecognizer

{
    _Bool _allowDragging;
    struct CGPoint _initialPoint;
}

@property (nonatomic, readonly) struct CGPoint translation;
@property (nonatomic, readonly) struct CGPoint initialPoint;

- (void)reset;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)beginDragging;
- (void)cancelDragging;
- (void)_beginDraggingIfNecessary;
- (void)_stopDraggingIfNecessary:(_Bool)arg1;

@end
