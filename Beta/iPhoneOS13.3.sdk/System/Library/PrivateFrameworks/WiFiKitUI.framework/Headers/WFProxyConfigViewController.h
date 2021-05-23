/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class UISwitch, WFNetworkSettingsConfig, WFTextFieldCell;

@interface WFProxyConfigViewController : UITableViewController

{
    CDUnknownBlockType _saveHandler;
    WFNetworkSettingsConfig *_originalConfig;
    WFNetworkSettingsConfig *_modifiedConfig;
    UISwitch *_authSwitch;
    WFTextFieldCell *_serverCell;
    WFTextFieldCell *_portCell;
    WFTextFieldCell *_userCell;
    WFTextFieldCell *_passwordCell;
    WFTextFieldCell *_urlCell;
}

@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig;
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig;
@property (retain, nonatomic) UISwitch *authSwitch;
@property (retain, nonatomic) WFTextFieldCell *serverCell;
@property (retain, nonatomic) WFTextFieldCell *portCell;
@property (retain, nonatomic) WFTextFieldCell *userCell;
@property (retain, nonatomic) WFTextFieldCell *passwordCell;
@property (retain, nonatomic) WFTextFieldCell *urlCell;
@property (copy, nonatomic) CDUnknownBlockType saveHandler;

- (void)save:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (void)_updateSaveEnabled;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (void)_changeProxyAuthentication:(id)arg1;

@end
