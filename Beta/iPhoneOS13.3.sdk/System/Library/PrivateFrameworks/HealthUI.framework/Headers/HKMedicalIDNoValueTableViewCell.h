/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKMedicalIDNoValueTableViewCell : UITableViewCell

{
    UILabel *_addValueLabel;
}

@property (retain, nonatomic) UILabel *addValueLabel;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)createAddValueLabel;

@end
