/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <UIKitCore/UIControl.h>

@class UIImageView, UILabel, UIView;

@interface BCChatButton : UIControl

{
    _Bool _isInverted;
    long long _style;
    UILabel *_label;
    UILabel *_smallLabel;
    UIImageView *_iconImageView;
    UIView *_centeredView;
}

@property (nonatomic) long long style;
@property (nonatomic) _Bool isInverted;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UILabel *smallLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *centeredView;

- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_setStyle:(long long)arg1;
- (void)setup;
- (void)createSubviews;
- (void)updateAppearanceForState:(long long)arg1;
- (void)setAccessibilityValues;
- (struct CGSize)calculateButtonLayout;
- (id)color:(struct BCColor)arg1;
- (void)updateButtonLayout;
- (void)setTextForLabel:(id)arg1 label:(id)arg2;
- (void)setOpacityForView:(id)arg1 opacity:(double)arg2;

@end
