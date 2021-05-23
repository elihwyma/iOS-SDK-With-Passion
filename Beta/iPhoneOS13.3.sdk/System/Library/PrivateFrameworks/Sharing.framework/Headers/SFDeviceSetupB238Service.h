/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class APCPlayer, CUAudioPlayer, HMDeviceSetupOperationHandler, NSDate, NSString, RPCompanionLinkClient, SFClient, SFDeviceOperationHandlerCDPSetup, SFDeviceOperationHandlerWiFiSetup, SFService, SFSession, SFSiriClient, SFSiriDeviceSetupGreetingDetails;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceSetupB238Service : NSObject

{
    _Bool _activateCalled;
    _Bool _advertiseFast;
    struct NSData *_apcCapData;
    APCPlayer *_apcPlayer;
    RPCompanionLinkClient *_companionLinkClient;
    NSObject<OS_dispatch_source> *_finishApplyTimer;
    NSObject<OS_dispatch_source> *_finishTimeoutTimer;
    _Bool _finished;
    _Bool _finished2;
    _Bool _finishedEventSent;
    _Bool _finishSessionEnded;
    _Bool _invalidateCalled;
    _Bool _iTunesCloudCompleted;
    int _iTunesCloudCompleteToken;
    double _iTunesCloudWaitSeconds;
    _Bool _mediaSystemReady;
    double _mediaSystemWaitSeconds;
    unsigned long long _peerFeatureFlags;
    SFClient *_sfClient;
    SFService *_sfService;
    SFSession *_sfSession;
    SFSiriClient *_siriClient;
    _Bool _siriDidDeviceSetup;
    SFSiriDeviceSetupGreetingDetails *_siriGreetingDetails;
    _Bool _siriHeardWhatCanYouDo;
    struct __WiFiManagerClient *_wifiManager;
    _Bool _wifiSetupEnabled;
    SFDeviceOperationHandlerCDPSetup *_cdpSetupHandler;
    HMDeviceSetupOperationHandler *_homeKitSetupHandler;
    SFDeviceOperationHandlerWiFiSetup *_wifiSetupHandler;
    CUAudioPlayer *_audioPlayer;
    _Bool _prefCDPEnabled;
    NSString *_languageCode;
    NSString *_localeIdentifier;
    NSString *_temperatureUnit;
    int _siriDataSharingState;
    _Bool _siriDisabled;
    NSString *_siriListenLanguage;
    long long _siriVoiceGender;
    NSString *_siriVoiceLanguage;
    NSDate *_timeObj;
    int _timeAuto;
    long long _timeCycle;
    NSString *_timeZone;
    int _timeZoneAuto;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _progressHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)invalidate;
- (void)_invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_sfServiceStart;
- (void)_handleSessionEnded:(id)arg1;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleFinishRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePreAuthRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleSiriDialogIdentifier:(id)arg1;
- (void)_handleRawRequest:(id)arg1 flags:(unsigned int)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_playReadyToSetupSound;
- (void)_handleAuthActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handlePlaySoundRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleAuthActionAudioPasscodeInit:(id)arg1 response:(id)arg2;
- (void)_handleAuthActionAudioPasscodeStartWithResponse:(id)arg1;
- (void)_handleAuthActionSiriInit;
- (void)_handleAuthActionSiriStart:(id)arg1 response:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleFinishApply:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_setSystemName:(id)arg1 hostname:(id)arg2;
- (void)_setSiriInfo;
- (void)_handleFinishDone:(unsigned int)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (_Bool)_handleFinishDone2Ready;
- (void)_handleFinishDone2:(unsigned int)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_siriGreetingStart:(CDUnknownBlockType)arg1;
- (int)_handleBasicConfigRequest:(id)arg1;
- (void)_handleBasicConfigResponse:(id)arg1;
- (void)_siriGreetingDialogBStart;
- (void)_siriGreetingIntroStart;
- (void)_siriGreetingIntroPhrase:(id)arg1 error:(id)arg2;
- (void)_siriGreetingDialogA;
- (void)_siriGreetingDialogBPhrase:(id)arg1 localizedText:(id)arg2 error:(id)arg3;
- (void)_siriGreetingDialogCStart;
- (void)_siriGreetingDialogCPhrase:(id)arg1 error:(id)arg2;
- (void)_speakLocalizedKey:(id)arg1 event:(unsigned int)arg2;

@end
