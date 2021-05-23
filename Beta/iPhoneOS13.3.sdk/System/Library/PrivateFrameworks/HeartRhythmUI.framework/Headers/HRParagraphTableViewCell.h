/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HRParagraphTableViewCell : UITableViewCell

{
    NSString *_titleText;
    NSString *_paragraphText;
    NSString *_buttonText;
    UILabel *_titleLabel;
    UILabel *_paragraphLabel;
    UIButton *_button;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_paragraphLabelBaselineConstraint;
    NSLayoutConstraint *_buttonBaselineConstraint;
    NSLayoutConstraint *_contentViewParagraphBottomConstraint;
    NSLayoutConstraint *_contentViewButtonBottomConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *paragraphLabel;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *paragraphLabelBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *buttonBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewParagraphBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *contentViewButtonBottomConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *paragraphText;
@property (copy, nonatomic) NSString *buttonText;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_buttonFont;
- (void)_updateForCurrentSizeCategory;
- (void)_setUpConstraints;
- (id)_titleLabelFont;
- (long long)_buttonHorizontalAlignment;
- (void)_setUpUI;
- (void)_updateBottomConstraint;
- (id)_paragraphLabelFont;
- (double)_titleLabelTopToBaseline;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_subtitleLabelBaselineToButton;
- (id)_titleLabelFontTextStyle;
- (double)_lastViewToBottom;
- (id)_paragraphLabelFontTextStyle;
- (id)_buttonFontTextStyle;

@end
