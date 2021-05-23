/*
 Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

#import <UIKitCore/UITableViewCell.h>

@class UILabel, UISwitch;

@interface TSCellularPlanUsesDataSwitchCell : UITableViewCell

{
    UILabel *_titleLabel;
    UISwitch *_switchControl;
}

@property (retain) UILabel *titleLabel;
@property (nonatomic, readonly) UISwitch *switchControl;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
