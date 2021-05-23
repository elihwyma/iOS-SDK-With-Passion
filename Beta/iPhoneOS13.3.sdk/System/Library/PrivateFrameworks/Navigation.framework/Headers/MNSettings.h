/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MNSettings : NSObject

{
    unsigned long long _voiceVolume;
    unsigned long long _distanceUnits;
    _Bool _pauseSpokenAudio;
    _Bool _muteSpeechOverride;
    _Bool _speechEnabled;
    unsigned long long _maxAlternateRoutesCount;
    _Bool _drivingVoiceGuidance;
    _Bool _walkingVoiceGuidance;
    _Bool _beepBeforeInstruction;
    NSString *_voiceLanguage;
    double _etaRequestInterval;
    double _initialRequestDelay;
    double _backgroundTimeWindow;
    long long _fakeTrafficIncidentAlert;
    double _initialTraceSpeedMultiplier;
    _Bool _shouldLoadReroutesFromTrace;
    _Bool _shouldLoadETAUpdatesFromTrace;
    _Bool _isTracePlaybackCameraTestMode;
    _Bool _shouldRecordTrace;
    double _simulationSpeed;
    double _simulationGPSError;
    _Bool _shouldUseGuidanceEventManager;
}

@property (nonatomic, readonly) unsigned long long voiceVolume;
@property (nonatomic, readonly) unsigned long long distanceUnits;
@property (nonatomic, readonly) _Bool pauseSpokenAudio;
@property (nonatomic, readonly) _Bool muteSpeechOverride;
@property (nonatomic, readonly) _Bool speechEnabled;
@property (nonatomic, readonly) unsigned long long maxAlternateRoutesCount;
@property (nonatomic, readonly) _Bool drivingVoiceGuidance;
@property (nonatomic, readonly) _Bool walkingVoiceGuidance;
@property (nonatomic, readonly) _Bool beepBeforeInstruction;
@property (nonatomic, readonly) NSString *voiceLanguage;
@property (nonatomic, readonly) double etaRequestInterval;
@property (nonatomic, readonly) double initialRequestDelay;
@property (nonatomic, readonly) double backgroundTimeWindow;
@property (nonatomic, readonly) long long fakeTrafficIncidentAlert;
@property (nonatomic, readonly) double initialTraceSpeedMultiplier;
@property (nonatomic, readonly) _Bool shouldLoadReroutesFromTrace;
@property (nonatomic, readonly) _Bool shouldLoadETAUpdatesFromTrace;
@property (nonatomic, readonly) _Bool isTracePlaybackCameraTestMode;
@property (nonatomic, readonly) _Bool shouldRecordTrace;
@property (nonatomic, readonly) double simulationSpeed;
@property (nonatomic, readonly) double simulationGPSError;
@property (nonatomic, readonly) _Bool shouldUseGuidanceEventManager;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setVoiceLanguage:(id)arg1;

@end
