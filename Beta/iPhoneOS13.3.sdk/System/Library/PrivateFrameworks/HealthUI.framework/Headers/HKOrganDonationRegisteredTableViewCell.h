/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKOrganDonationRegisteredTableViewCell : UITableViewCell

{
    UILabel *_introLabel;
    UILabel *_registrarLabel;
}

@property (retain, nonatomic) UILabel *introLabel;
@property (retain, nonatomic) UILabel *registrarLabel;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;

@end
