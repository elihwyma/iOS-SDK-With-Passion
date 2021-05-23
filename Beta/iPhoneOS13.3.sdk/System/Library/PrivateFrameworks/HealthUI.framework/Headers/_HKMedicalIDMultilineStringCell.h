/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface _HKMedicalIDMultilineStringCell : UITableViewCell

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;

+ (id)defaultReuseIdentifier;

- (void)dealloc;
- (id)description;
- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)setupSubviews;
- (void)_updateTextColor;
- (void)setUpConstraints;

@end
