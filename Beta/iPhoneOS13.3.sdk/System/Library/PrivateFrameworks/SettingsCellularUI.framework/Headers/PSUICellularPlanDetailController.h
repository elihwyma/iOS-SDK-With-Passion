/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class PSUISubscriptionContextMenusGroup;

__attribute__((visibility("hidden")))
@interface PSUICellularPlanDetailController : PSListController

{
    PSUISubscriptionContextMenusGroup *_subscriptionContextMenus;
}

@property (retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus;

- (id)init;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willEnterForeground;
- (id)specifiers;
- (id)selectSpecifier:(id)arg1;

@end
