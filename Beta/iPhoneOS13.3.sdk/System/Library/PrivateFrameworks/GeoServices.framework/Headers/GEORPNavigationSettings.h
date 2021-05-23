/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString;

@interface GEORPNavigationSettings : PBCodable

{
    unsigned long long _distanceUnits;
    unsigned long long _maxAlternateRouteCount;
    NSString *_voiceLanguage;
    unsigned long long _voiceVolume;
    int _userPreferredTransportType;
    _Bool _beepBeforeInstruction;
    _Bool _muteSpeechOverride;
    _Bool _pauseSpokenAudio;
    _Bool _shouldUseGuidanceEventManager;
    _Bool _speechEnabled;
    struct {
        unsigned int has_distanceUnits:1;
        unsigned int has_maxAlternateRouteCount:1;
        unsigned int has_voiceVolume:1;
        unsigned int has_userPreferredTransportType:1;
        unsigned int has_beepBeforeInstruction:1;
        unsigned int has_muteSpeechOverride:1;
        unsigned int has_pauseSpokenAudio:1;
        unsigned int has_shouldUseGuidanceEventManager:1;
        unsigned int has_speechEnabled:1;
    } _flags;
}

@property (nonatomic) _Bool hasVoiceVolume;
@property (nonatomic) unsigned long long voiceVolume;
@property (nonatomic) _Bool hasDistanceUnits;
@property (nonatomic) unsigned long long distanceUnits;
@property (nonatomic) _Bool hasPauseSpokenAudio;
@property (nonatomic) _Bool pauseSpokenAudio;
@property (nonatomic) _Bool hasMuteSpeechOverride;
@property (nonatomic) _Bool muteSpeechOverride;
@property (nonatomic) _Bool hasSpeechEnabled;
@property (nonatomic) _Bool speechEnabled;
@property (nonatomic) _Bool hasMaxAlternateRouteCount;
@property (nonatomic) unsigned long long maxAlternateRouteCount;
@property (nonatomic) _Bool hasBeepBeforeInstruction;
@property (nonatomic) _Bool beepBeforeInstruction;
@property (nonatomic, readonly) _Bool hasVoiceLanguage;
@property (retain, nonatomic) NSString *voiceLanguage;
@property (nonatomic) _Bool hasShouldUseGuidanceEventManager;
@property (nonatomic) _Bool shouldUseGuidanceEventManager;
@property (nonatomic) _Bool hasUserPreferredTransportType;
@property (nonatomic) int userPreferredTransportType;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)userPreferredTransportTypeAsString:(int)arg1;
- (int)StringAsUserPreferredTransportType:(id)arg1;

@end
