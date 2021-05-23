/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <UIView.h>

@protocol OFUIDismissalViewDelegate;

@interface OFUIDismissalView : UIView

{
    id <OFUIDismissalViewDelegate> _dismissalViewDelegate;
    _Bool _inPassthroughHitTest;
}

@property (nonatomic) id <OFUIDismissalViewDelegate> dismissalViewDelegate;

- (void)dealloc;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
