/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIStatusBarItemView.h>

@class CALayer, UIButton;

__attribute__((visibility("hidden")))
@interface UIStatusBarButtonActionItemView : UIStatusBarItemView

{
    UIButton *_button;
    UIButton *_externalButton;
    _Bool _selected;
    CALayer *_ringLayer;
}

@property (nonatomic) _Bool selected;
@property (retain, nonatomic) CALayer *ringLayer;
@property (nonatomic, readonly) _Bool extendsHitTestingFrame;

- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (long long)buttonType;
- (_Bool)showsTouchWhenHighlighted;
- (_Bool)allowsUserInteraction;
- (double)updateContentsAndWidth;
- (id)highlightImage;
- (_Bool)usesAdvancedActions;
- (void)_pressButton:(id)arg1;
- (void)_doubleTapButton:(id)arg1;
- (void)_pressAndHoldButton:(id)arg1;
- (id)_createButton;
- (void)setLayerHighlightImage:(id)arg1;
- (void)_triggerButtonWithAction:(long long)arg1;
- (struct CGRect)_contentsImageFrame;

@end
