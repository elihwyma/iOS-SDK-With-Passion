/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUISubscriptionContextMenusProductionFactory : NSObject

{
    _Bool _popViewControllerOnPlanRemoval;
    PSListController *_hostController;
    PSSpecifier *_parentSpecifier;
    PSSpecifier *_groupSpecifier;
}

@property (weak, nonatomic) PSListController *hostController;
@property (weak, nonatomic) PSSpecifier *parentSpecifier;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (nonatomic) _Bool popViewControllerOnPlanRemoval;

- (_Bool)shouldPopViewControllerOnPlanRemoval;
- (id)createCallingSubgroup;
- (id)createCarrierSpaceSubgroup;
- (id)createNetworkSelectionSubgroup;
- (id)createMyNumberSubgroup;
- (id)createNetworkSettingsSubgroup;
- (id)createSimSubgroup;
- (id)createSimStatusCache;
- (id)createCarrierBundleCache;
- (id)createDataCache;
- (id)createCellularPlanManagerCache;
- (id)createCellularPlanManager;
- (id)createLowDataModeSubgroup;
- (id)initWithHostController:(id)arg1 parentSpecifier:(id)arg2 groupSpecifier:(id)arg3 popViewControllerOnPlanRemoval:(_Bool)arg4;

@end
