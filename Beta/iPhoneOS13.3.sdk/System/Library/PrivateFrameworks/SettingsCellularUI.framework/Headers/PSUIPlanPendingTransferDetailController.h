/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class PSUIPlanPendingTransferMenusGroup;

__attribute__((visibility("hidden")))
@interface PSUIPlanPendingTransferDetailController : PSListController

{
    PSUIPlanPendingTransferMenusGroup *_planPendingTransferMenus;
}

@property (retain, nonatomic) PSUIPlanPendingTransferMenusGroup *planPendingTransferMenus;

- (id)init;
- (id)specifiers;
- (void)cellularPlanChanged;

@end
