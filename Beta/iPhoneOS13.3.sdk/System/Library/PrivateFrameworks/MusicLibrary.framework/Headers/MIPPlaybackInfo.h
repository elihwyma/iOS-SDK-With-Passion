/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface MIPPlaybackInfo : PBCodable

{
    long long _durationInSamples;
    long long _gaplessEncodingDrainCode;
    long long _gaplessFrameResyncCode;
    long long _gaplessHeuristicCode;
    long long _gaplessHeuristicDelayCode;
    long long _startTime;
    long long _stopTime;
    long long _volumeNormalizationEnergy;
    int _beatsPerMinute;
    int _bitRate;
    int _codecSubType;
    int _codecType;
    int _dataKind;
    NSString *_dataUrl;
    NSString *_eqPreset;
    NSString *_playbackFormat;
    int _progressionDirection;
    int _relativeVolume;
    int _sampleRate;
    struct {
        unsigned int durationInSamples:1;
        unsigned int gaplessEncodingDrainCode:1;
        unsigned int gaplessFrameResyncCode:1;
        unsigned int gaplessHeuristicCode:1;
        unsigned int gaplessHeuristicDelayCode:1;
        unsigned int startTime:1;
        unsigned int stopTime:1;
        unsigned int volumeNormalizationEnergy:1;
        unsigned int beatsPerMinute:1;
        unsigned int bitRate:1;
        unsigned int codecSubType:1;
        unsigned int codecType:1;
        unsigned int dataKind:1;
        unsigned int progressionDirection:1;
        unsigned int relativeVolume:1;
        unsigned int sampleRate:1;
    } _has;
}

@property (nonatomic) _Bool hasBitRate;
@property (nonatomic) int bitRate;
@property (nonatomic) _Bool hasCodecType;
@property (nonatomic) int codecType;
@property (nonatomic) _Bool hasCodecSubType;
@property (nonatomic) int codecSubType;
@property (nonatomic) _Bool hasDataKind;
@property (nonatomic) int dataKind;
@property (nonatomic, readonly) _Bool hasDataUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (nonatomic, readonly) _Bool hasEqPreset;
@property (retain, nonatomic) NSString *eqPreset;
@property (nonatomic, readonly) _Bool hasPlaybackFormat;
@property (retain, nonatomic) NSString *playbackFormat;
@property (nonatomic) _Bool hasGaplessHeuristicCode;
@property (nonatomic) long long gaplessHeuristicCode;
@property (nonatomic) _Bool hasGaplessHeuristicDelayCode;
@property (nonatomic) long long gaplessHeuristicDelayCode;
@property (nonatomic) _Bool hasGaplessEncodingDrainCode;
@property (nonatomic) long long gaplessEncodingDrainCode;
@property (nonatomic) _Bool hasGaplessFrameResyncCode;
@property (nonatomic) long long gaplessFrameResyncCode;
@property (nonatomic) _Bool hasRelativeVolume;
@property (nonatomic) int relativeVolume;
@property (nonatomic) _Bool hasSampleRate;
@property (nonatomic) int sampleRate;
@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) _Bool hasStopTime;
@property (nonatomic) long long stopTime;
@property (nonatomic) _Bool hasVolumeNormalizationEnergy;
@property (nonatomic) long long volumeNormalizationEnergy;
@property (nonatomic) _Bool hasBeatsPerMinute;
@property (nonatomic) int beatsPerMinute;
@property (nonatomic) _Bool hasProgressionDirection;
@property (nonatomic) int progressionDirection;
@property (nonatomic) _Bool hasDurationInSamples;
@property (nonatomic) long long durationInSamples;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
