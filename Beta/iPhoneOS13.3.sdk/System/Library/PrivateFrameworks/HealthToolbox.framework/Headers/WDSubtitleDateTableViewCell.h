/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface WDSubtitleDateTableViewCell : UITableViewCell

{
    UILabel *_mainTextLabel;
    UILabel *_subtitleTextLabel;
    UILabel *_dateTextLabel;
    NSLayoutConstraint *_baselineConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *baselineConstraint;
@property (retain, nonatomic) UILabel *mainTextLabel;
@property (retain, nonatomic) UILabel *subtitleTextLabel;
@property (retain, nonatomic) UILabel *dateTextLabel;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setupConstraints;
- (void)setupSubviews;
- (void)_updateForCurrentSizeCategory;

@end
