/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell

{
    UILabel *_callToActionLabel;
    UIButton *_actionButton;
}

@property (retain, nonatomic) UILabel *callToActionLabel;
@property (retain, nonatomic) UIButton *actionButton;

+ (id)defaultReuseIdentifier;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;

@end
