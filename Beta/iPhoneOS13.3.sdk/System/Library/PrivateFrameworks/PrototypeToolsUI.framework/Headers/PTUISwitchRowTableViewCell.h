/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <PrototypeToolsUI/PTUIRowTableViewCell.h>

@class UISwitch;

@interface PTUISwitchRowTableViewCell : PTUIRowTableViewCell

{
    UISwitch *_switch;
}

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_valueChanged:(id)arg1;
- (void)updateDisplayedValue;

@end
