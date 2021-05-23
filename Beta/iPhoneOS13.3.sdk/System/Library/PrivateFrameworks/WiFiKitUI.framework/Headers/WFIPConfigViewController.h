/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UITableViewController.h>

@class WFNetworkSettingsConfig, WFTextFieldCell;

@interface WFIPConfigViewController : UITableViewController

{
    CDUnknownBlockType _saveHandler;
    WFNetworkSettingsConfig *_originalConfig;
    WFNetworkSettingsConfig *_modifiedConfig;
    long long _type;
    WFTextFieldCell *_ipAddressCell;
    WFTextFieldCell *_subnetMaskCell;
    WFTextFieldCell *_routerCell;
    WFTextFieldCell *_prefixCell;
    WFTextFieldCell *_clientIDCell;
}

@property (retain, nonatomic) WFNetworkSettingsConfig *originalConfig;
@property (retain, nonatomic) WFNetworkSettingsConfig *modifiedConfig;
@property (nonatomic) long long type;
@property (retain, nonatomic) WFTextFieldCell *ipAddressCell;
@property (retain, nonatomic) WFTextFieldCell *subnetMaskCell;
@property (retain, nonatomic) WFTextFieldCell *routerCell;
@property (retain, nonatomic) WFTextFieldCell *prefixCell;
@property (retain, nonatomic) WFTextFieldCell *clientIDCell;
@property (copy, nonatomic) CDUnknownBlockType saveHandler;

- (void)save:(id)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)_updateSaveEnabled;
- (void)_setFirstResponderAfterCell:(id)arg1;
- (id)initWithConfig:(id)arg1 ipType:(long long)arg2;

@end
