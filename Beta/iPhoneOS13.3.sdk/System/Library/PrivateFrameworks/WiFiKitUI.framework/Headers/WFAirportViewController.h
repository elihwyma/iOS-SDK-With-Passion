/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSObject, NSOrderedSet, NSSet, NSString, UITableView, WFChooseNetworkHeaderViewController;

@protocol OS_dispatch_queue, WFAirportViewControllerDelegate, WFNetworkListRecord;

@interface WFAirportViewController : UIViewController

{
    _Bool _showOtherNetwork;
    _Bool _disabled;
    _Bool _userAutoJoinEnabled;
    _Bool _askToJoinShown;
    _Bool _disablePowerModification;
    _Bool _isManagedAppleID;
    _Bool _showDiagnostics;
    _Bool _showKnownNetworks;
    _Bool _tableViewIsUpdating;
    _Bool _networkResultsChangedWhileUIUpdates;
    float _currentNetworkScaledRSSI;
    id <WFNetworkListRecord> _currentNetwork;
    long long _currentNetworkState;
    id <WFAirportViewControllerDelegate> _listDelegate;
    long long _deviceCapability;
    NSString *_currentNetworkSubtitle;
    NSString *_powerOffLocationWarning;
    NSString *_userAutoJoinDisabledWarning;
    UITableView *_tableView;
    NSOrderedSet *_sections;
    NSSet *_allNetworks;
    NSArray *_infraNetworks;
    NSArray *_popularNetworks;
    NSArray *_knownNetworks;
    NSArray *_adhocNetworks;
    NSArray *_unconfiguredNetworks;
    WFChooseNetworkHeaderViewController *_chooseNetworkHeader;
    WFChooseNetworkHeaderViewController *_knownNetworkHeader;
    WFChooseNetworkHeaderViewController *_publicNetworkHeader;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <WFNetworkListRecord> _joiningHotspot;
    id <WFNetworkListRecord> _joiningNetwork;
    NSSet *_pendingNetworks;
    NSString *_currentKnownHeaderText;
    NSString *_currentInfraHeaderText;
}

@property (copy, nonatomic) NSString *powerOffLocationWarning;
@property (copy, nonatomic) NSString *userAutoJoinDisabledWarning;
@property (nonatomic) _Bool showDiagnostics;
@property (nonatomic) _Bool showKnownNetworks;
@property (weak, nonatomic) UITableView *tableView;
@property (retain) NSOrderedSet *sections;
@property (retain, nonatomic) NSSet *allNetworks;
@property (retain, nonatomic) NSArray *infraNetworks;
@property (retain, nonatomic) NSArray *popularNetworks;
@property (retain, nonatomic) NSArray *knownNetworks;
@property (retain, nonatomic) NSArray *adhocNetworks;
@property (retain, nonatomic) NSArray *unconfiguredNetworks;
@property (retain, nonatomic) WFChooseNetworkHeaderViewController *chooseNetworkHeader;
@property (retain, nonatomic) WFChooseNetworkHeaderViewController *knownNetworkHeader;
@property (retain, nonatomic) WFChooseNetworkHeaderViewController *publicNetworkHeader;
@property (weak, nonatomic) id <WFAirportViewControllerDelegate> listDelegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (weak, nonatomic) id <WFNetworkListRecord> joiningHotspot;
@property (weak, nonatomic) id <WFNetworkListRecord> joiningNetwork;
@property (nonatomic) _Bool askToJoinShown;
@property (nonatomic) _Bool disablePowerModification;
@property (nonatomic) _Bool isManagedAppleID;
@property _Bool tableViewIsUpdating;
@property (nonatomic) _Bool networkResultsChangedWhileUIUpdates;
@property (retain, nonatomic) NSSet *pendingNetworks;
@property (retain, nonatomic) NSString *currentKnownHeaderText;
@property (retain, nonatomic) NSString *currentInfraHeaderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool showOtherNetwork;
@property float currentNetworkScaledRSSI;
@property (retain) id <WFNetworkListRecord> currentNetwork;
@property long long currentNetworkState;
@property unsigned long long currentNetworkSignalBars;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (nonatomic) _Bool disabled;
@property (nonatomic) _Bool userAutoJoinEnabled;

- (id)init;
- (void)refresh;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)setNetworks:(id)arg1;
- (_Bool)powered;
- (void)setScanning:(_Bool)arg1;
- (void)powerModificationStateDidChange:(_Bool)arg1;
- (void)managedAppleIDStateChange:(_Bool)arg1;
- (void)powerStateDidChange:(_Bool)arg1;
- (void)setCurrentNetwork:(id)arg1 previousNetwork:(id)arg2 reason:(unsigned long long)arg3;
- (_Bool)supportsWiFiPasswordSharing;
- (_Bool)shouldPromptWhenPersonalHotspotIsEnabled;
- (_Bool)shouldPromptWhenCarPlaySessionIsActive;
- (_Bool)supportsHealthRecommendations;
- (void)setAutoInstantHotspotJoinOption:(long long)arg1;
- (void)setAskToJoinMode:(long long)arg1;
- (void)updateViewsForNetworks:(id)arg1;
- (long long)_askToJoinMode;
- (_Bool)_askToJoinShouldBeVisible;
- (id)_defaultSectionsForPowerState:(_Bool)arg1;
- (void)_updateNetworkRestrictionHeader;
- (void)_reloadSectionForHotspotChange;
- (id)_currentNetworkCell;
- (_Bool)_refreshATJShownStateIfChanged;
- (id)_nameOfSection:(unsigned long long)arg1;
- (void)_updateCellsWithNewData:(id)arg1 oldData:(id)arg2 inSection:(unsigned long long)arg3 insertSection:(_Bool)arg4 datasourceSection:(unsigned long long)arg5;
- (void)_dumpSections;
- (id)_sectionNameAtIndex:(unsigned long long)arg1;
- (_Bool)_shouldContinueUpdateNetworkList;
- (void)_reloadPowerSection;
- (id)_askToJoinStateStringForATJMode:(long long)arg1;
- (id)_getAutoHotspotOptionText:(long long)arg1;
- (unsigned long long)_sectionTypeAtSection:(long long)arg1;
- (_Bool)_isChinaDevice;
- (void)_powerSwitchChanged:(id)arg1;
- (id)_tableCellForNetwork:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (void)_enableWAPISwitchChanged:(id)arg1;
- (id)_askToJoinFooterString;
- (void)_promptToJoinAdhoc:(id)arg1;
- (void)updateAutoInstantHotspotSetting:(long long)arg1;
- (long long)_askToJoinModeFromString:(id)arg1;
- (void)_updateAskToJoinMode:(long long)arg1;
- (id)_askToJoinFooterStringForMode:(long long)arg1;
- (id)_currentNetworkCellIndexPath;

@end
