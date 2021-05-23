/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint, UIKBUndoStyling, UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBUndoStateHUD : UIView

{
    long long _controlType;
    NSLayoutConstraint *_undoStateHUDWidthConstraint;
    NSLayoutConstraint *_undoStateHUDHeightConstraint;
    UIVisualEffectView *_shadowView;
    UIView *_containerView;
    UILabel *_labelView;
    UIKBUndoStyling *_style;
}

@property (retain, nonatomic) UIVisualEffectView *shadowView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *labelView;
@property (retain, nonatomic) UIKBUndoStyling *style;
@property (nonatomic) long long controlType;
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *undoStateHUDHeightConstraint;

- (id)initWithKeyboardAppearance:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUndoStateHUDControlType:(long long)arg1 available:(_Bool)arg2;

@end
