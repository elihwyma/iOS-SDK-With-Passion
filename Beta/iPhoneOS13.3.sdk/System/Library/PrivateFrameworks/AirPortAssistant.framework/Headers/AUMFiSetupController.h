/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AUSetupController.h>

@class EasyConfigDevice, NSDictionary, NSMutableSet, NSObject, NSString, NSTimer;

@protocol OS_dispatch_semaphore;

@interface AUMFiSetupController : AUSetupController

{
    NSMutableSet *_mfiSetupDelegates;
    EasyConfigDevice *_easyConfigDevice;
    NSDictionary *_accessoryResponseDict;
    NSDictionary *_autoGuessRecommendationDict;
    NSDictionary *_setupOptionsDict;
    NSDictionary *_destinationNetworkScanRecord;
    NSDictionary *_targetMFiDeviceScanRecord;
    NSString *_destinationNetworkSSID;
    NSString *_destinationNetworkPassword;
    NSTimer *_linkUpOnDestinationNetworkTimer;
    NSString *_postConfigTargetDeviceFriendlyName;
    NSObject<OS_dispatch_semaphore> *_askUserForPasswordSemaphore;
    NSObject<OS_dispatch_semaphore> *_easyConfigConfigurationCompleteSemaphore;
    NSObject<OS_dispatch_semaphore> *_linkUpOnTargetSWAPSemaphore;
    int _waitingForLinkState;
    _Bool _setupEnded;
    _Bool _successfullyEstablishedLinkOnTargetDeviceSWAP;
    _Bool _successfullyEstablishedLinkOnDestinationAP;
    _Bool _promptedUserForDestinationWiFiPSK;
    _Bool _postediAPAccessoryConfiguredNotification;
    _Bool _destinationNetworkPasswordAccepted;
    long long _lastHeardEasyConfigProgressNotification;
    struct {
        double startTime;
        unsigned char userChangedFriendlyName;
        unsigned char playPasswordSet;
        unsigned char adminPasswordSet;
        unsigned char destinationNetworkRecommendationUsed;
        double secondsToGetLinkUpOnSWAP;
        int wifiJoinSWAPError;
        unsigned char hitJoiningTargetSWAPTimeout;
        int rssiOfSWAP;
        unsigned int snrOfSWAP;
        unsigned int channelOfSWAP;
    } _easyConfigPreConfigMetrics;
    struct {
        double secondsToGetLinkUpOnDestination;
        int wifiJoinDestinationAPError;
        unsigned char destinationNetworkPSKInKeychain;
        unsigned char hitJoiningDestinationAPTimeout;
        int rssiOfDestinationAP;
        unsigned int snrOfDestinationAP;
        unsigned int channelOfDestinationAP;
    } _easyConfigPostConfigMetrics;
    double _timeSWAPJoinStarted;
    double _timeDestinationAPJoinStarted;
}

@property (nonatomic, readonly) NSMutableSet *setupDelegates;
@property (retain) NSTimer *linkUpOnDestinationNetworkTimer;
@property (copy) NSString *destinationNetworkPassword;

+ (id)setupController;

- (id)init;
- (void)dealloc;
- (void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
- (void)callbackAskUserForUncertifiedResult:(int)arg1;
- (void)callbackAskUserForSetupCodeResult:(int)arg1 password:(id)arg2;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (int)updateSettingsAsync;
- (int)cancelSetup;
- (id)targetBaseInfoDict;
- (void)invalidateLinkUpOnDestinationNetworkTimer;
- (void)stopListeningToAllNotifications;
- (void)linkChangeNotification:(id)arg1;
- (int)joinTargetSWAP;
- (int)sendProgressToUI:(int)arg1 withParamDict:(id)arg2;
- (void)startEasyConfigWhenReady;
- (int)endSetup:(int)arg1;
- (void)linkUpOnSWAP:(id)arg1;
- (void)linkUpOnDestinationAP:(id)arg1;
- (void)joinSWAPDone:(id)arg1;
- (void)askUserForNetworkPassword:(id)arg1;
- (void)handleEasyConfigProgress:(id)arg1;
- (void)handleEasyConfigStopped:(id)arg1;
- (void)handleEasyConfigProgressAppliedConfigurationToDevice:(id)arg1;
- (void)handleEasyConfigProgressSearchingForPostConfigDevice:(id)arg1;
- (void)joinDestinationAPDone:(id)arg1;
- (void)joinDestinationNetworkTimeoutFired:(id)arg1;
- (void)askUserForSetupCodeWithRetryStatus:(_Bool)arg1;
- (void)acquireDestinationNetworkPassword;
- (void)askUserForUncertified;
- (void)_startEasyConfigWhenReady;
- (void)createEasyConfigDeviceConfiguration;
- (void)startListeningForEasyConfigDeviceStatusNotifications;
- (int)sendSetupCompleteToUIWithResult:(int)arg1;
- (int)sendiAPOverWiFiDeviceConfiguredXPCMessage;
- (void)logCompletionStatus:(int)arg1;
- (void)stopListeningToEasyConfigDeviceStatusNotifications;

@end
