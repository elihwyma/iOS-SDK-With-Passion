/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface SRAppUsageCell : UITableViewCell

{
    UILabel *_label;
    UIButton *_button;
}

@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIButton *button;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
