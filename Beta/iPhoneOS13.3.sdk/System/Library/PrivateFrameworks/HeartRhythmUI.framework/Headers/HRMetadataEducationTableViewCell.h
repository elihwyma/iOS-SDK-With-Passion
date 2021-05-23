/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HRMetadataEducationTableViewCell : UITableViewCell

{
    NSString *_titleText;
    NSString *_bodyText;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    NSLayoutConstraint *_topToTitleBaselineConstraint;
    NSLayoutConstraint *_titleBaselineToBodyBaselineConstraint;
    NSLayoutConstraint *_bodyBottomAnchorToBottomConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) NSLayoutConstraint *topToTitleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleBaselineToBodyBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *bodyBottomAnchorToBottomConstraint;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;

+ (id)defaultReuseIdentifier;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_updateForCurrentSizeCategory;
- (void)_setUpConstraints;
- (id)_titleLabelFont;
- (void)_setUpUI;
- (id)_bodyLabelFont;
- (double)_topToTitleBaseline;
- (double)_titleBaselineToBodyBaseline;
- (double)_bodyBottomAnchorToBottom;
- (id)_titleLabelFontTextStyle;
- (id)_bodyLabelFontTextStyle;

@end
