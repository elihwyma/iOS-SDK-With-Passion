/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBContainerKeyView.h>

@class UIKBBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBBlurredKeyView : UIKBContainerKeyView

{
    UIKBBackdropView *_backdropView;
}

- (void)layoutSubviews;
- (void)setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end
