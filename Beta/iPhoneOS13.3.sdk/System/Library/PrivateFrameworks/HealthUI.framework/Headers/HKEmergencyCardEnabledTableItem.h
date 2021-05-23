/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class UISwitch, UITableViewCell;

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem

{
    UITableViewCell *_cell;
    UISwitch *_switch;
}

- (id)_cell;
- (struct UIEdgeInsets)separatorInset;
- (id)initInEditMode:(_Bool)arg1;
- (id)titleForHeader;
- (id)titleForFooter;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (void)_switchSwitched:(id)arg1;

@end
