/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

#import <SpringBoard/Swift-Protocol.h>

@class CSCoverSheetViewController, NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBSetupManager, SBSetupRegulatoryInfoViewController, SBSetupWiFiScanner;

@interface SBDashBoardSetupViewController : CSCoverSheetViewControllerBase <Swift>

{
    SBSetupWiFiScanner *_wifiScanner;
    SBActivationInfoViewController *_activationInfoViewController;
    SBSetupRegulatoryInfoViewController *_regulatoryInfoViewController;
    SBSetupManager *_setupManager;
    CSCoverSheetViewController *_coverSheetViewController;
    NSString *_configureKey;
    NSString *_wifiPrimaryLanguage;
    NSString *_telephonyPrimaryLanguage;
    NSTimer *_cycleStartTimer;
    NSDictionary *_localizedStrings;
    NSDictionary *_storeRestrictedStrings;
    NSArray *_stringsOrdering;
    NSMutableArray *_currentStringsOrdering;
    unsigned long long _currentStringsIndex;
    _Bool _shouldResetOrderingOnNextCycle;
    _Bool _isCyclingComponents;
    unsigned long long _componentsToCycle;
    _Bool _isStoreRestricted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (long long)presentationType;
- (void)_startWifiScan;
- (id)setupView;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_fetchLanguageFromTelephony;
- (void)_startCyclingComponents:(unsigned long long)arg1 withDelay:(double)arg2;
- (void)_stopCyclingComponents:(unsigned long long)arg1;
- (void)_infoButtonTapped:(id)arg1;
- (void)_cancelWifiScan;
- (void)_resetDisplayedLocalizedStringsImmediately:(_Bool)arg1;
- (void)_animateComponentsForNewCycle;
- (void)_updateDisplayedStrings;
- (void)_incrementLocalizedStringsForNewCycle;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (id)_currentStoreRestrictedStringsDictionary;
- (void)_regulatoryInfoButtonTapped:(id)arg1;
- (void)_updateWifiPrimaryLanguageFromDiscoveredCountryCodes:(id)arg1;
- (id)initWithCoverSheetViewController:(id)arg1;

@end
