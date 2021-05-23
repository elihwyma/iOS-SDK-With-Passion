/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantCallbackController.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSThread, NSTimer;

@protocol AutoGuessUIDelegate;

@interface AutoGuessController : AssistantCallbackController

{
    int _lastAutoGuessUISelector;
    int _currentAutoGuessUISelector;
    NSString *_lastParamString;
    NSString *_currentParamString;
    _Bool _onShortTimer;
    struct ACPBrowserSession *_acpBrowserSession;
    struct AutoGuessContext *_guessContext;
    NSDictionary *_lastInstrumentation;
    NSTimer *_browseReadyTimer;
    int _wifiScanStatus;
    int _bonjourBrowseStatus;
    _Bool _autoJoinState;
    _Bool _updatedTargetInfo;
    NSString *_targetMACAddress;
    NSDictionary *_targetScanRecord;
    NSDictionary *_targetBrowseRecord;
    NSMutableDictionary *_browsedBases;
    NSArray *_wifiScanInfos;
    id _delegate;
    NSDictionary *unconfiguredDeviceThatIsBeingSetup;
    NSDictionary *_guessCompletionDict;
    NSThread *_autoGuessThread;
}

@property (retain) NSTimer *_browseReadyTimer;
@property (retain) NSString *targetMACAddress;
@property (retain) NSDictionary *targetScanRecord;
@property (retain) NSDictionary *targetBrowseRecord;
@property (retain) NSMutableDictionary *_browsedBases;
@property (retain) NSArray *_wifiScanInfos;
@property id <AutoGuessUIDelegate> delegate;
@property int lastAutoGuessUISelector;
@property int currentAutoGuessUISelector;
@property (retain) NSString *lastParamString;
@property (retain) NSString *currentParamString;
@property (retain) NSDictionary *unconfiguredDeviceThatIsBeingSetup;
@property (retain) NSDictionary *lastInstrumentation;
@property (retain, nonatomic) NSDictionary *guessCompletionDict;

+ (id)shortProductNameFromBaseStationDictionary:(id)arg1;
+ (id)restoreRecommendationDictionaryFromCompletionDict:(id)arg1;
+ (id)recommendationToActionChoice:(id)arg1;
+ (_Bool)isRestoreAnOptionForTheRecommendations:(id)arg1;
+ (id)shortProductNameForUnconfiguredDeviceFromAutoGuessResults:(id)arg1;
+ (id)sourceBaseStationFromRecommendation:(id)arg1;
+ (id)sourceNetworkFromRecommendation:(id)arg1;
+ (id)unconfiguredBaseStationFromGuessCompleteDict:(id)arg1;
+ (id)unconfiguredBaseStationFromRecommendation:(id)arg1;
+ (_Bool)shouldShowPasswordUIForRecommendation:(id)arg1;
+ (id)restoreOfferFromCompletionDict:(id)arg1;
+ (id)recommendationStringFromCompletionDict:(id)arg1;
+ (id)unconfiguredBaseStationCanBeConfiguredFromCompletionDict:(id)arg1;
+ (id)primaryRecommendationDictionaryFromCompletionDict:(id)arg1;
+ (id)fullAutoGuessDictionaryFromCompletionDict:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)setWiFiScanStatus:(int)arg1;
- (void)setBonjourBrowseStatus:(int)arg1;
- (void)wirelessScanDone:(id)arg1;
- (void)uiAssetsUpdated:(id)arg1;
- (id)targetInfo;
- (int)startAutoGuessForUnconfiguredMACAddress:(id)arg1 withWifiScanInfos:(id)arg2;
- (int)wifiScanStatus;
- (void)cancelWiFiScanner;
- (int)bonjourBrowseStatus;
- (void)cancelBonjourBrowser;
- (int)startWiFiScanner;
- (int)runAutoGuessWithWifiScanInfos:(id)arg1;
- (int)cancelAutoGuess;
- (int)startBonjourBrowser;
- (void)startAutoGuessIfReady;
- (void)updateTargetInfo:(_Bool)arg1;
- (void)runAutoGuessThread:(id)arg1;
- (void)stopBonjourBrowser;
- (void)bonjourTXTUpdated:(id)arg1;
- (void)bonjourTXTRemoved:(id)arg1;
- (void)browseReadyTimerCallback:(id)arg1;
- (void)stopWiFiScanner;
- (_Bool)okToSwitchToShortBonjourTimeout:(id)arg1;
- (void)autoGuessEngineComplete;
- (id)createCompletionDictFromAutoGuessResults:(id)arg1;

@end
