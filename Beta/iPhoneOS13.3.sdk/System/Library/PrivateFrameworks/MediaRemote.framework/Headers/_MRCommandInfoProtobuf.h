/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface _MRCommandInfoProtobuf : PBCodable

{
    CDStruct_82f37d05 _preferredIntervals;
    CDStruct_95bda58d _supportedInsertionPositions;
    CDStruct_95bda58d _supportedPlaybackQueueTypes;
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _supportedRates;
    int _canScrub;
    int _command;
    NSMutableArray *_currentPlaybackSessionTypes;
    NSString *_localizedShortTitle;
    NSString *_localizedTitle;
    float _maximumRating;
    float _minimumRating;
    int _numAvailableSkips;
    NSString *_playbackSessionIdentifier;
    float _preferredPlaybackRate;
    int _presentationStyle;
    int _repeatMode;
    int _shuffleMode;
    int _skipFrequency;
    int _skipInterval;
    NSMutableArray *_supportedCustomQueueIdentifiers;
    NSMutableArray *_supportedPlaybackSessionTypes;
    int _upNextItemCount;
    _Bool _active;
    _Bool _enabled;
    _Bool _supportsSharedQueue;
    struct {
        unsigned int canScrub:1;
        unsigned int command:1;
        unsigned int maximumRating:1;
        unsigned int minimumRating:1;
        unsigned int numAvailableSkips:1;
        unsigned int preferredPlaybackRate:1;
        unsigned int presentationStyle:1;
        unsigned int repeatMode:1;
        unsigned int shuffleMode:1;
        unsigned int skipFrequency:1;
        unsigned int skipInterval:1;
        unsigned int upNextItemCount:1;
        unsigned int active:1;
        unsigned int enabled:1;
        unsigned int supportsSharedQueue:1;
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
@property (nonatomic, readonly) unsigned long long supportedRatesCount;
@property (nonatomic, readonly) float *supportedRates;
@property (nonatomic) _Bool hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) _Bool hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic) _Bool hasPresentationStyle;
@property (nonatomic) int presentationStyle;
@property (nonatomic) _Bool hasSkipInterval;
@property (nonatomic) int skipInterval;
@property (nonatomic) _Bool hasNumAvailableSkips;
@property (nonatomic) int numAvailableSkips;
@property (nonatomic) _Bool hasSkipFrequency;
@property (nonatomic) int skipFrequency;
@property (nonatomic) _Bool hasCanScrub;
@property (nonatomic) int canScrub;
@property (nonatomic, readonly) unsigned long long supportedPlaybackQueueTypesCount;
@property (nonatomic, readonly) int *supportedPlaybackQueueTypes;
@property (retain, nonatomic) NSMutableArray *supportedCustomQueueIdentifiers;
@property (nonatomic, readonly) unsigned long long supportedInsertionPositionsCount;
@property (nonatomic, readonly) int *supportedInsertionPositions;
@property (nonatomic) _Bool hasSupportsSharedQueue;
@property (nonatomic) _Bool supportsSharedQueue;
@property (nonatomic) _Bool hasUpNextItemCount;
@property (nonatomic) int upNextItemCount;
@property (nonatomic) _Bool hasPreferredPlaybackRate;
@property (nonatomic) float preferredPlaybackRate;
@property (retain, nonatomic) NSMutableArray *supportedPlaybackSessionTypes;
@property (retain, nonatomic) NSMutableArray *currentPlaybackSessionTypes;
@property (nonatomic, readonly) _Bool hasPlaybackSessionIdentifier;
@property (retain, nonatomic) NSString *playbackSessionIdentifier;

+ (Class)supportedCustomQueueIdentifierType;
+ (Class)supportedPlaybackSessionTypesType;
+ (Class)currentPlaybackSessionTypesType;

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
- (void)addSupportedCustomQueueIdentifier:(id)arg1;
- (void)addSupportedPlaybackSessionTypes:(id)arg1;
- (void)addCurrentPlaybackSessionTypes:(id)arg1;
- (void)clearPreferredIntervals;
- (double)preferredIntervalAtIndex:(unsigned long long)arg1;
- (void)addPreferredInterval:(double)arg1;
- (void)clearSupportedRates;
- (float)supportedRateAtIndex:(unsigned long long)arg1;
- (void)addSupportedRate:(float)arg1;
- (void)clearSupportedPlaybackQueueTypes;
- (int)supportedPlaybackQueueTypesAtIndex:(unsigned long long)arg1;
- (void)addSupportedPlaybackQueueTypes:(int)arg1;
- (unsigned long long)supportedCustomQueueIdentifiersCount;
- (void)clearSupportedCustomQueueIdentifiers;
- (id)supportedCustomQueueIdentifierAtIndex:(unsigned long long)arg1;
- (void)clearSupportedInsertionPositions;
- (int)supportedInsertionPositionsAtIndex:(unsigned long long)arg1;
- (void)addSupportedInsertionPositions:(int)arg1;
- (unsigned long long)supportedPlaybackSessionTypesCount;
- (void)clearSupportedPlaybackSessionTypes;
- (id)supportedPlaybackSessionTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentPlaybackSessionTypesCount;
- (void)clearCurrentPlaybackSessionTypes;
- (id)currentPlaybackSessionTypesAtIndex:(unsigned long long)arg1;
- (void)setPreferredIntervals:(double *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedRates:(float *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedPlaybackQueueTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedInsertionPositions:(int *)arg1 count:(unsigned long long)arg2;

@end
