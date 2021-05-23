/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCellEditControl.h>

@class _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UITableViewCellFocusableEditControl : UITableViewCellEditControl

{
    _UIFloatingContentView *_focusedFloatingContentView;
}

- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)_ensureFocusedFloatingContentView;
- (id)_currentImage;
- (_Bool)wantsMaskingWhileAnimatingDisabled;
- (_Bool)wantsImageShadow;
- (void)_updateFloatingViewForCurrentTraits;
- (_Bool)_shouldHandlePressEvent:(id)arg1;

@end
