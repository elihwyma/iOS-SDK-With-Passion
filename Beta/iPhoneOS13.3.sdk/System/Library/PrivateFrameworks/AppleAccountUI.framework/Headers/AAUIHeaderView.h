/*
 Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

#import <AppleAccountUI/AAUIBuddyView.h>

@class UILabel, UIStackView;

@interface AAUIHeaderView : AAUIBuddyView

{
    UIStackView *_stackView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) UILabel *messageLabel;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)_updateLabelFonts;
- (void)_updateStackViewSpacing;

@end
