/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Preferences/PSSpecifier.h>

@class NSArray, PSListController, PSSimStatusCache, PSUICellularPlanManagerCache, PSUICoreTelephonyCallCache, PSUICoreTelephonyDataCache, PSUIDeviceWiFiState;

__attribute__((visibility("hidden")))
@interface PSUICellularDataSpecifier : PSSpecifier

{
    PSListController *_hostController;
    PSSimStatusCache *_simStatusCache;
    PSUICellularPlanManagerCache *_planManagerCache;
    PSUICoreTelephonyDataCache *_dataCache;
    PSUICoreTelephonyCallCache *_callCache;
    PSUIDeviceWiFiState *_wifiState;
    NSArray *_cachedPlanItems;
}

@property (weak, nonatomic) PSListController *hostController;
@property (retain, nonatomic) PSSimStatusCache *simStatusCache;
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache;
@property (retain, nonatomic) PSUICoreTelephonyDataCache *dataCache;
@property (retain, nonatomic) PSUICoreTelephonyCallCache *callCache;
@property (retain, nonatomic) PSUIDeviceWiFiState *wifiState;
@property (retain, nonatomic) NSArray *cachedPlanItems;

- (void)setAirplaneMode:(_Bool)arg1;
- (void)updateCachedState;
- (id)planItemForListItem:(id)arg1;
- (_Bool)isSubcontrollerNeeded;
- (id)subscriptionContextForListItem:(id)arg1;
- (id)initWithHostController:(id)arg1;
- (id)initWithHostController:(id)arg1 simStatusCache:(id)arg2 planManagerCache:(id)arg3 callCache:(id)arg4 dataCache:(id)arg5 wifiState:(id)arg6;
- (void)setCellularDataEnabled:(id)arg1 specifier:(id)arg2;
- (id)isCellularDataEnabled:(id)arg1;
- (id)_isCellularDataEnabled:(id)arg1;
- (void)_setCellularDataEnabled:(id)arg1 specifier:(id)arg2;
- (id)callEndConfirmationSpecifier;
- (void)acceptedDataSwitch:(id)arg1;
- (void)setCellularDataSwitch:(_Bool)arg1;
- (void)_acceptedDataSwitch:(id)arg1;
- (void)_setCellularDataSwitch:(id)arg1;
- (void)canceledDataSwitch:(id)arg1;

@end
