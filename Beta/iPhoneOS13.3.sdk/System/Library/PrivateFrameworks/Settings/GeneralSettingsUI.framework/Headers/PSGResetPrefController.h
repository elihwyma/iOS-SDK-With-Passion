/*
 Image: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
 */

#import <Preferences/PSListController.h>

@class BYBuddyDaemonCloudSyncClient, MBManager, NSDateComponentsFormatter, NSNumberFormatter, NSString, PSGBackupDisabledAppsInfo, PSSpecifier, UIAlertController, UILabel, UIProgressView;

@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface PSGResetPrefController : PSListController

{
    _Bool _requireRestrictionsCode;
    _Bool _requirePasscode;
    _Bool _returningFromPINSheetWithSuccess;
    _Bool _shouldEraseWithFMiP;
    _Bool _shouldTryEraseAgainWithFMiP;
    _Bool _shouldEraseCellularPlans;
    int _codesNeeded;
    int _codesEntered;
    PSSpecifier *_currentSpecifier;
    PSSpecifier *_locationSpecifier;
    long long _locationSpecifierIndex;
    NSString *_passcode;
    _Bool _shouldSkipCloudStatusCheck;
    _Bool _didFailSync;
    _Bool _didFailBackup;
    MBManager *_backupManager;
    BYBuddyDaemonCloudSyncClient *_cloudSyncClient;
    id <BSInvalidatable> _homeButtonEventConsumerToken;
    UIAlertController *_cloudProgressAlertController;
    UILabel *_cloudProgressAlertLabel;
    UIProgressView *_cloudProgressView;
    NSDateComponentsFormatter *_durationFormatter;
    NSNumberFormatter *_percentFormatter;
    double _cloudBackupProgress;
    double _cloudSyncProgress;
    struct __CFRunLoopSource *_powerSourcesChangedRunLoopSource;
    _Bool _isOnPower;
    PSGBackupDisabledAppsInfo *_backupDisabledAppsInfo;
    _Bool _isFetchingDomainInfo;
    _Bool _needToShowPopupAlertForBackup;
    _Bool _shouldSkipBasebandStatusCheck;
}

@property (nonatomic) _Bool shouldSkipBasebandStatusCheck;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)consumeAnyPressEventForButtonKind:(long long)arg1;
- (id)specifiers;
- (void)popupViewDidDisappear;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)syncProgress:(double)arg1;
- (void)syncCompletedWithErrors:(id)arg1;
- (void)didAppear;
- (void)profileNotification:(id)arg1;
- (void)manager:(id)arg1 didUpdateProgress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3;
- (void)managerDidFinishBackup:(id)arg1;
- (void)manager:(id)arg1 didFailBackupWithError:(id)arg2;
- (void)managerDidLoseConnectionToService:(id)arg1;
- (_Bool)_networkConnectivityAvailable;
- (void)locatorStateDidChange:(id)arg1;
- (void)updateLocationResetSpecifier;
- (void)prepareAlertForBackupDisabledDomainAndShow:(_Bool)arg1;
- (void)configureSpin:(_Bool)arg1 ofCellForSpecifier:(id)arg2 setEnabled:(_Bool)arg3;
- (void)showPopUpAlertForBackupDisabledApps;
- (void)showAlertForBackupDisabledItemsWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)proceedWithErase;
- (id)manageStorageAction;
- (unsigned long long)statusForCloudDataClasses:(unsigned long long)arg1 backupState:(int)arg2;
- (void)presentAlertForCloudStatus:(unsigned long long)arg1;
- (void)eraseSettingsAndContent:(id)arg1;
- (void)eraseSettings:(id)arg1;
- (void)resetAllCellularNetworks:(id)arg1;
- (void)_disablePhoneLocatorAndErase;
- (void)_showStockholmLocallyStoredValueOfflineWarningIfNeeded:(CDUnknownBlockType)arg1;
- (void)_eraseSettingsAndContent;
- (void)_resetWithMode:(long long)arg1 andOptions:(id)arg2;
- (void)reprovisionAccount;
- (void)resetAKey;
- (void)confirmEraseCellularSettings;
- (void)eraseCellularSettings;
- (void)presentSyncAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)presentBackupAlertWithTitle:(id)arg1 message:(id)arg2 finishButtonTitle:(id)arg3 shouldSync:(_Bool)arg4;
- (_Bool)hasWifi;
- (void)startSync:(_Bool)arg1 continueBackup:(_Bool)arg2;
- (void)presentSyncNeedsWiFiAlert;
- (void)updateCloudProgressAlertLabel:(id)arg1;
- (void)cloudProcessesDidFail;
- (void)updateSyncProgress:(float)arg1;
- (void)cloudProcessesDidSucceed;
- (void)updateBackupProgress:(float)arg1 estimatedTimeRemaining:(unsigned long long)arg2;
- (void)_managerDidFailBackup;
- (void)resetKeyboardDictionary:(id)arg1;
- (void)resetIconPositions:(id)arg1;
- (void)resetPrivacyWarnings:(id)arg1;
- (void)confirmationSpecifierConfirmed:(id)arg1;
- (void)resetNetworkSettings:(id)arg1;
- (void)subscriberOptions:(id)arg1;
- (void)changeAlertMessageIfNeeded:(_Bool)arg1;

@end
