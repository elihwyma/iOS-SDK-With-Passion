/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSListController.h>

@class CoreTelephonyClient, NSString, PSSpecifier, PSUICarrierItemGroup, PSUICellularDataOptionsController, PSUICellularDataPlanDetailGroup, PSUICellularDataPlanListGroup, PSUICellularDataPlanSetupGroup, PSUICellularDataSpecifier, PSUICellularPlanListGroup, PSUICellularUsageSchedulingGroup, PSUISubscriptionContextMenusGroup, RadiosPreferences;

@interface PSUICellularController : PSListController

{
    PSSpecifier *_viewAccount;
    PSSpecifier *_viewAccountGroup;
    PSSpecifier *_facetimeSetupButton;
    PSSpecifier *_facetimeSetupGroup;
    _Bool _disabled;
    _Bool _ignoreNextEntitlementStatusChange;
    PSSpecifier *_personalHotspotSpecifier;
    PSSpecifier *_fauxCardSpecifier;
    _Bool _shouldCalculateDataUsage;
    PSUICellularDataSpecifier *_cellularDataSpecifier;
    PSUICellularDataOptionsController *_cellularDataOptionsController;
    PSUICellularDataPlanSetupGroup *_cellularDataPlanSetupGroup;
    PSUICellularDataPlanListGroup *_cellularDataPlanListGroup;
    PSUICellularDataPlanDetailGroup *_cellularDataPlanDetailGroup;
    PSUICellularPlanListGroup *_cellularPlanListGroup;
    PSUICarrierItemGroup *_cellularNewNetworkGroup;
    PSUISubscriptionContextMenusGroup *_subscriptionContextMenus;
    PSUICellularUsageSchedulingGroup *_appUsageGroup;
    CoreTelephonyClient *_coreTelephonyClient;
    RadiosPreferences *_radioPreferences;
}

@property (retain, nonatomic) PSUICellularDataSpecifier *cellularDataSpecifier;
@property (retain, nonatomic) PSUICellularDataOptionsController *cellularDataOptionsController;
@property (retain, nonatomic) PSUICellularDataPlanSetupGroup *cellularDataPlanSetupGroup;
@property (retain, nonatomic) PSUICellularDataPlanListGroup *cellularDataPlanListGroup;
@property (retain, nonatomic) PSUICellularDataPlanDetailGroup *cellularDataPlanDetailGroup;
@property (retain, nonatomic) PSUICellularPlanListGroup *cellularPlanListGroup;
@property (retain, nonatomic) PSUICarrierItemGroup *cellularNewNetworkGroup;
@property (retain, nonatomic) PSUISubscriptionContextMenusGroup *subscriptionContextMenus;
@property (retain, nonatomic) PSUICellularUsageSchedulingGroup *appUsageGroup;
@property (retain, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)airplaneModeChanged;
- (void)handleURL:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)specifiers;
- (void)prefetchResourcesFor:(id)arg1;
- (void)newCarrierNotification;
- (void)entitlementStatusChanged;
- (void)cellularPlanChanged:(id)arg1;
- (void)wirelessDataUsageChangedNotification;
- (void)carrierItemsChanged;
- (void)cellularDataSettingChanged;
- (id)_deadTelephonySpecifiers;
- (void)retryCarrierListFetch:(id)arg1;
- (_Bool)shouldShowFaceTimeSetup;
- (_Bool)shouldShowViewAccount;
- (id)appUsageGroupTitle;
- (_Bool)isCellularDisabled;
- (id)activeDataPlanLabel;
- (_Bool)showDataPlanOnly;
- (id)removePlanConfirmationTitle:(id)arg1;
- (id)removePlanConfirmationMessage:(id)arg1;
- (void)updatePaneWithCellularDataState:(_Bool)arg1;
- (void)learnMoreLinkTapped;
- (void)turnOnLocationServicesPressed:(id)arg1;
- (id)cellularDataOptionsDetailText:(id)arg1;
- (id)getTetheringStatus:(id)arg1;
- (void)viewAccountPressed:(id)arg1;
- (void)setupCellularFaceTime:(id)arg1;

@end
