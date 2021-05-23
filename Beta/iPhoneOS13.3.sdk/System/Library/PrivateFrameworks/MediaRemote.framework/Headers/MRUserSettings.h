/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSArray, NSUserDefaults;

@interface MRUserSettings : NSObject

{
    NSUserDefaults *_userDefaults;
    _Bool _externalDevicePairingAllowed;
}

@property (nonatomic, readonly) _Bool usePeerToPeerExternalDeviceConnections;
@property (nonatomic, readonly) _Bool useNoDelayOptionForExternalDeviceSockets;
@property (nonatomic, readonly) _Bool useDebugAVRouteWithoutVolumeControl;
@property (nonatomic, readonly) _Bool shouldInitializeTelevisionBonjourService;
@property (nonatomic, readonly) _Bool shouldInitializeGenericBonjourService;
@property (nonatomic, readonly) _Bool shouldInitializeRapportService;
@property (nonatomic, readonly) _Bool shouldLogPairingSetupCode;
@property (nonatomic, readonly) _Bool shouldLogArtwork;
@property (nonatomic, readonly) _Bool hasExternalDeviceSocketQOSLevelSet;
@property (nonatomic, readonly) long long externalDeviceSocketQOSLevel;
@property (nonatomic, getter=isExternalDevicePairingAllowed) _Bool externalDevicePairingAllowed;
@property (nonatomic, readonly) double externalDeviceTimeoutDuration;
@property (nonatomic, readonly) double externalDeviceNowPlayingInfoCoalesceDuration;
@property (nonatomic, readonly) double externalDeviceNowPlayingInfoArtworkCoalesceDuration;
@property (nonatomic, readonly) double externalDeviceDisconnectWaitDuration;
@property (nonatomic, readonly) double externalDeviceDisconnectSleepDuration;
@property (nonatomic, readonly) double externalDeviceSleepAssertionOnClientConnectDuration;
@property (nonatomic, readonly) double bluetoothDeviceResumeDuration;
@property (nonatomic, readonly) double broadcastCommandWaitDuration;
@property (nonatomic, readonly) double airPlayOutputContextInitTimeoutDuration;
@property (nonatomic, readonly) _Bool useExternalDeviceSystemPairing;
@property (nonatomic, readonly) long long maxTransactionMemorySize;
@property (nonatomic, readonly) double transactionWaitDurationOnOutOfMemory;
@property (nonatomic, readonly) double transactionWaitDurationOnXpcSend;
@property (nonatomic, readonly) double transactionWaitDurationOnNetworkSend;
@property (nonatomic, readonly) _Bool useSystemAudioContextForAirPlayTransport;
@property (nonatomic, readonly) _Bool useGenericTransportForHostedEndpoints;
@property (retain, nonatomic) NSArray *connectedClientPIDs;
@property (nonatomic, readonly) double queuedCommandsTimeoutInterval;
@property (nonatomic, readonly) _Bool computeNowPlayingApplication;
@property (nonatomic, readonly) double nowPlayingApplicationTimeout;
@property (nonatomic, readonly) _Bool takelockScreenAssertion;
@property (nonatomic, readonly) _Bool useProactiveEndpoint;
@property (nonatomic, readonly) _Bool connectToEndpointWhenBeginsPlayback;
@property (nonatomic, readonly) _Bool connectToAllEndpointsWhenAnyEndpointBeginsPlayback;
@property (nonatomic, readonly) _Bool connectToUserSelectedEndpoint;
@property (nonatomic, readonly) double discoverEndpointTimeoutInterval;
@property (nonatomic, readonly) _Bool needNowPlayingForegroundState;
@property (nonatomic, readonly) double deviceRecentlyUsedInterval;
@property (nonatomic, readonly) double mediaRecentlyPlayedInterval;
@property (nonatomic, readonly) double endpointRecentlyUserSelectedInterval;
@property (nonatomic, readonly) double launchApplicationTimeoutInterval;
@property (nonatomic, readonly) _Bool supportProximityMigration;
@property (nonatomic, readonly) _Bool supportMigration;
@property (nonatomic, readonly) _Bool supportLastPlayingDevice;
@property (nonatomic, readonly) _Bool sendLastPlayingDeviceToHome;
@property (nonatomic, readonly) _Bool connectToAllEndpointsWhenInProximityToAnyDevice;
@property (nonatomic, readonly) double lastPlayingDeviceThresholdInterval;
@property (nonatomic, readonly) double sendPlaybackSessionUpdateToCompanionCoalesceInterval;
@property (nonatomic, readonly) double activeSystemEndpointStartupDelayToAllowAllPreviousClientsTimeToInitializeInterval;

+ (id)currentSettings;

- (id)init;
- (void)_removeValueForKey:(id)arg1;
- (_Bool)_boolValueForKey:(id)arg1 usingDefaultValue:(_Bool)arg2;
- (double)_doubleValueForKey:(id)arg1 usingDefaultValue:(double)arg2;
- (long long)_integerValueForKey:(id)arg1 usingDefaultValue:(long long)arg2;
- (id)defaultSupportedCommandsData;
- (id)defaultSupportedCommandsDataForClient:(id)arg1;
- (void)updateDefaultSupportedCommandsData:(id)arg1 forClient:(id)arg2;
- (unsigned int)localPlaybackState;
- (void)setLocalPlaybackState:(unsigned int)arg1;
- (id)localLastPlayingDate;
- (void)setLocalLastPlayingDate:(id)arg1;

@end
