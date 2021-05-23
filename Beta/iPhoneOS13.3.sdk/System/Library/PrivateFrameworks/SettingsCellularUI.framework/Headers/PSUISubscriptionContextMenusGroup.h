/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CTCellularPlanManager, NSString, PSListController, PSSimStatusCache, PSSpecifier, PSUICallingSubgroup, PSUICarrierSpaceGroup, PSUICellularPlanManagerCache, PSUICoreTelephonyCarrierBundleCache, PSUICoreTelephonyDataCache, PSUILowDataModeSubgroup, PSUIMyNumberSubgroup, PSUINetworkSelectionSubgroup, PSUINetworkSettingsSubgroup, PSUISIMSubgroup;

__attribute__((visibility("hidden")))
@interface PSUISubscriptionContextMenusGroup : NSObject

{
    _Bool _popViewControllerOnPlanDeletion;
    PSSpecifier *_parentSpecifier;
    PSSpecifier *_groupSpecifier;
    PSListController *_listController;
    PSUICallingSubgroup *_callingSubgroup;
    PSUICarrierSpaceGroup *_carrierSpaceSubgroup;
    PSUINetworkSelectionSubgroup *_networkSelectionSubgroup;
    PSUIMyNumberSubgroup *_myNumberSubgroup;
    PSUINetworkSettingsSubgroup *_networkSettingsSubgroup;
    PSUISIMSubgroup *_simSubgroup;
    PSUILowDataModeSubgroup *_lowDataModeSubgroup;
    PSSimStatusCache *_simStatusCache;
    PSUICoreTelephonyCarrierBundleCache *_carrierBundleCache;
    PSUICoreTelephonyDataCache *_dataCache;
    PSUICellularPlanManagerCache *_planManagerCache;
    CTCellularPlanManager *_cellularPlanManager;
}

@property (weak, nonatomic) PSListController *listController;
@property (nonatomic) _Bool popViewControllerOnPlanDeletion;
@property (retain, nonatomic) PSUICallingSubgroup *callingSubgroup;
@property (retain, nonatomic) PSUICarrierSpaceGroup *carrierSpaceSubgroup;
@property (retain, nonatomic) PSUINetworkSelectionSubgroup *networkSelectionSubgroup;
@property (retain, nonatomic) PSUIMyNumberSubgroup *myNumberSubgroup;
@property (retain, nonatomic) PSUINetworkSettingsSubgroup *networkSettingsSubgroup;
@property (retain, nonatomic) PSUISIMSubgroup *simSubgroup;
@property (retain, nonatomic) PSUILowDataModeSubgroup *lowDataModeSubgroup;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) PSUICoreTelephonyCarrierBundleCache *carrierBundleCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager;
@property (retain, nonatomic) PSSpecifier *parentSpecifier;
@property (weak, nonatomic) PSSpecifier *groupSpecifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFactory:(id)arg1;
- (id)specifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (void)viewWillAppear;

@end
