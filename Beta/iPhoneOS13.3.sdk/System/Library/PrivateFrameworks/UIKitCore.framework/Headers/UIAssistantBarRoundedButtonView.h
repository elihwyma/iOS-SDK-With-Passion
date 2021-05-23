/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIAssistantBarRoundedButtonViewButton;

__attribute__((visibility("hidden")))
@interface UIAssistantBarRoundedButtonView : UIView

{
    UIView *_shadowView;
    _Bool _dropShadow;
    UIAssistantBarRoundedButtonViewButton *_button;
}

@property (nonatomic) _Bool dropShadow;
@property (nonatomic, readonly) UIAssistantBarRoundedButtonViewButton *button;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
