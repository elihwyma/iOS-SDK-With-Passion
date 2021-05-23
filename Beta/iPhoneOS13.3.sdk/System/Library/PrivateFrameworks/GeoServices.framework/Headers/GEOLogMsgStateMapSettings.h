/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgStateMapSettings : PBCodable

{
    int _navVoiceVolume;
    int _preferredTransportMode;
    _Bool _avoidHighways;
    _Bool _avoidTolls;
    _Bool _findMyCarEnabled;
    _Bool _headingEnabled;
    _Bool _labelEnabled;
    _Bool _pauseSpokenAudioEnabled;
    _Bool _speedLimitEnabled;
    _Bool _trafficEnabled;
    struct {
        unsigned int has_navVoiceVolume:1;
        unsigned int has_preferredTransportMode:1;
        unsigned int has_avoidHighways:1;
        unsigned int has_avoidTolls:1;
        unsigned int has_findMyCarEnabled:1;
        unsigned int has_headingEnabled:1;
        unsigned int has_labelEnabled:1;
        unsigned int has_pauseSpokenAudioEnabled:1;
        unsigned int has_speedLimitEnabled:1;
        unsigned int has_trafficEnabled:1;
    } _flags;
}

@property (nonatomic) _Bool hasPreferredTransportMode;
@property (nonatomic) int preferredTransportMode;
@property (nonatomic) _Bool hasAvoidTolls;
@property (nonatomic) _Bool avoidTolls;
@property (nonatomic) _Bool hasAvoidHighways;
@property (nonatomic) _Bool avoidHighways;
@property (nonatomic) _Bool hasHeadingEnabled;
@property (nonatomic) _Bool headingEnabled;
@property (nonatomic) _Bool hasSpeedLimitEnabled;
@property (nonatomic) _Bool speedLimitEnabled;
@property (nonatomic) _Bool hasNavVoiceVolume;
@property (nonatomic) int navVoiceVolume;
@property (nonatomic) _Bool hasPauseSpokenAudioEnabled;
@property (nonatomic) _Bool pauseSpokenAudioEnabled;
@property (nonatomic) _Bool hasFindMyCarEnabled;
@property (nonatomic) _Bool findMyCarEnabled;
@property (nonatomic) _Bool hasTrafficEnabled;
@property (nonatomic) _Bool trafficEnabled;
@property (nonatomic) _Bool hasLabelEnabled;
@property (nonatomic) _Bool labelEnabled;

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
- (id)preferredTransportModeAsString:(int)arg1;
- (int)StringAsPreferredTransportMode:(id)arg1;
- (id)navVoiceVolumeAsString:(int)arg1;
- (int)StringAsNavVoiceVolume:(id)arg1;

@end
