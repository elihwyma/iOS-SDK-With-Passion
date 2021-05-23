/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NMRCommandInfoProtobuf : PBCodable

{
    struct {
        double *list;
        unsigned long long count;
        unsigned long long size;
    } _preferredIntervals;
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedPlaybackRates;
    int _command;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    float _preferredPlaybackRate;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    _Bool _active;
    _Bool _enabled;
    struct {
        unsigned int command:1;
        unsigned int maximumRating:1;
        unsigned int minimumRating:1;
        unsigned int preferredPlaybackRate:1;
        unsigned int presentationStyle:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int active:1;
        unsigned int enabled:1;
    } _has;
}

@property (nonatomic) _Bool hasCommand;
@property (nonatomic) int command;
@property (nonatomic) _Bool hasEnabled;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool hasActive;
@property (nonatomic) _Bool active;
@property (nonatomic, readonly) unsigned long long preferredIntervalsCount;
@property (nonatomic, readonly) double *preferredIntervals;
@property (nonatomic, readonly) _Bool hasLocalizedTitle;
@property (retain, nonatomic) NSString *localizedTitle;
@property (nonatomic, readonly) _Bool hasLocalizedShortTitle;
@property (retain, nonatomic) NSString *localizedShortTitle;
@property (nonatomic) _Bool hasMinimumRating;
@property (nonatomic) float minimumRating;
@property (nonatomic) _Bool hasMaximumRating;
@property (nonatomic) float maximumRating;
@property (nonatomic, readonly) unsigned long long supportedPlaybackRatesCount;
@property (nonatomic, readonly) float *supportedPlaybackRates;
@property (nonatomic) _Bool hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) _Bool hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) _Bool hasPresentationStyle;
@property (nonatomic) int presentationStyle;
@property (nonatomic) _Bool hasPreferredPlaybackRate;
@property (nonatomic) float preferredPlaybackRate;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)commandAsString:(int)arg1;
- (int)StringAsCommand:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
- (int)StringAsRepeatMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
- (int)StringAsShuffleMode:(id)arg1;
- (void)clearPreferredIntervals;
- (double)preferredIntervalAtIndex:(unsigned long long)arg1;
- (void)addPreferredInterval:(double)arg1;
- (void)setPreferredIntervals:(double *)arg1 count:(unsigned long long)arg2;
- (void)clearSupportedPlaybackRates;
- (float)supportedPlaybackRateAtIndex:(unsigned long long)arg1;
- (void)addSupportedPlaybackRate:(float)arg1;
- (void)setSupportedPlaybackRates:(float *)arg1 count:(unsigned long long)arg2;

@end
