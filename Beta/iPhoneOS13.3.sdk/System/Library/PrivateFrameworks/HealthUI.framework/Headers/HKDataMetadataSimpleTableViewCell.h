/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell

{
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
}

@property (retain, nonatomic) UILabel *titleTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)_updateForCurrentSizeCategory;

@end
