/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UITextInputTraits, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface UIRecentInputTableCell : UITableViewCell

{
    UILabel *_floatingLabel;
    long long _blurEffectStyle;
    UITextInputTraits *_textInputTraits;
}

@property (retain, nonatomic) UILabel *floatingLabel;
@property (nonatomic) long long blurEffectStyle;
@property (retain, nonatomic) UITextInputTraits *textInputTraits;
@property (nonatomic, readonly) _UIFloatingContentView *tvFloatingView;

+ (id)focusedTextColorForBlurEffectStyle:(long long)arg1;
+ (id)unfocusedTextColorForBlurEffectStyle:(long long)arg1;
+ (id)backgroundColorForBlurEffectStyle:(long long)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_updateAppearance;
- (_Bool)_tvIsDarkMode;
- (void)setInputText:(id)arg1 withBlurStyle:(long long)arg2;

@end
