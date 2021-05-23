/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIBackdropContentView : UIView

{
    _Bool _isForcingLayout;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (void)backdropView:(id)arg1 recursivelyUpdateMaskViewsForView:(id)arg2;
- (void)recursivelyRemoveBackdropMaskViewsForView:(id)arg1;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;

@end
