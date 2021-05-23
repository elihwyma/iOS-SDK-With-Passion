/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/MNSettings.h>

@class NSString;

@interface MNMutableSettings : MNSettings

@property (nonatomic) unsigned long long voiceVolume;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) _Bool pauseSpokenAudio;
@property (nonatomic) _Bool muteSpeechOverride;
@property (nonatomic) _Bool speechEnabled;
@property (nonatomic) unsigned long long maxAlternateRoutesCount;
@property (nonatomic) _Bool drivingVoiceGuidance;
@property (nonatomic) _Bool walkingVoiceGuidance;
@property (nonatomic) _Bool beepBeforeInstruction;
@property (copy, nonatomic) NSString *voiceLanguage;
@property (nonatomic) double etaRequestInterval;
@property (nonatomic) double initialRequestDelay;
@property (nonatomic) double backgroundTimeWindow;
@property (nonatomic) long long fakeTrafficIncidentAlert;
@property (nonatomic) double initialTraceSpeedMultiplier;
@property (nonatomic) _Bool shouldLoadReroutesFromTrace;
@property (nonatomic) _Bool shouldLoadETAUpdatesFromTrace;
@property (nonatomic) _Bool isTracePlaybackCameraTestMode;
@property (nonatomic) _Bool shouldRecordTrace;
@property (nonatomic) double simulationSpeed;
@property (nonatomic) double simulationGPSError;
@property (nonatomic) _Bool shouldUseGuidanceEventManager;

+ (id)settingsWithSettings:(id)arg1;

@end
