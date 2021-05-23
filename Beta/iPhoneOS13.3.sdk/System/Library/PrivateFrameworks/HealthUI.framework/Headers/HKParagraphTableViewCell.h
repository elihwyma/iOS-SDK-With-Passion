/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HKParagraphTableViewCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_paragraphLabel;
    UIButton *_button;
    NSLayoutConstraint *_titleLabelBaselineConstraint;
    NSLayoutConstraint *_paragraphLabelBaselineConstraint;
    NSLayoutConstraint *_buttonBaselineConstraint;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSString *_titleText;
    NSString *_paragraphText;
    NSString *_buttonText;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *paragraphText;
@property (copy, nonatomic) NSString *buttonText;

+ (id)reuseIdentifier;

- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_buttonFont;
- (void)_updateForCurrentSizeCategory;
- (id)_titleLabelFont;
- (void)_setupUI;
- (long long)_buttonHorizontalAlignment;
- (id)_paragraphLabelFont;
- (double)_titleLabelTopToBaseline;
- (double)_titleLabelBaselineToParagraphBaseline;
- (double)_subtitleLabelBaselineToButton;
- (double)_buttonBaselineToBottom;

@end
