/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _NMRCommandOptionsProtobuf : PBCodable

{
    double _playbackPosition;
    long long _radioStationID;
    unsigned long long _trackID;
    NSString *_contentItemID;
    NSString *_contextID;
    NSString *_destinationAppDisplayID;
    NSString *_mediaType;
    int _playbackQueueInsertionPosition;
    float _playbackRate;
    NSString *_radioStationHash;
    float _rating;
    int _repeatMode;
    unsigned int _sendOptions;
    int _shuffleMode;
    float _skipInterval;
    NSString *_sourceID;
    NSString *_stationURL;
    NSData *_systemAppPlaybackQueueData;
    _Bool _externalPlayerCommand;
    _Bool _negative;
    _Bool _requestDefermentToPlaybackQueuePosition;
    _Bool _shouldBeginRadioPlayback;
    _Bool _shouldOverrideManuallyCuratedQueue;
    struct {
        unsigned int playbackPosition:1;
        unsigned int radioStationID:1;
        unsigned int trackID:1;
        unsigned int playbackQueueInsertionPosition:1;
        unsigned int playbackRate:1;
        unsigned int rating:1;
        unsigned int repeatMode:1;
        unsigned int sendOptions:1;
        unsigned int shuffleMode:1;
        unsigned int skipInterval:1;
        unsigned int externalPlayerCommand:1;
        unsigned int negative:1;
        unsigned int requestDefermentToPlaybackQueuePosition:1;
        unsigned int shouldBeginRadioPlayback:1;
        unsigned int shouldOverrideManuallyCuratedQueue:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSourceID;
@property (retain, nonatomic) NSString *sourceID;
@property (nonatomic, readonly) _Bool hasMediaType;
@property (retain, nonatomic) NSString *mediaType;
@property (nonatomic) _Bool hasExternalPlayerCommand;
@property (nonatomic) _Bool externalPlayerCommand;
@property (nonatomic) _Bool hasSkipInterval;
@property (nonatomic) float skipInterval;
@property (nonatomic) _Bool hasPlaybackRate;
@property (nonatomic) float playbackRate;
@property (nonatomic) _Bool hasRating;
@property (nonatomic) float rating;
@property (nonatomic) _Bool hasNegative;
@property (nonatomic) _Bool negative;
@property (nonatomic) _Bool hasPlaybackPosition;
@property (nonatomic) double playbackPosition;
@property (nonatomic) _Bool hasRepeatMode;
@property (nonatomic) int repeatMode;
@property (nonatomic) _Bool hasShuffleMode;
@property (nonatomic) int shuffleMode;
@property (nonatomic, readonly) _Bool hasContextID;
@property (retain, nonatomic) NSString *contextID;
@property (nonatomic) _Bool hasTrackID;
@property (nonatomic) unsigned long long trackID;
@property (nonatomic) _Bool hasRadioStationID;
@property (nonatomic) long long radioStationID;
@property (nonatomic, readonly) _Bool hasRadioStationHash;
@property (retain, nonatomic) NSString *radioStationHash;
@property (nonatomic, readonly) _Bool hasSystemAppPlaybackQueueData;
@property (retain, nonatomic) NSData *systemAppPlaybackQueueData;
@property (nonatomic, readonly) _Bool hasDestinationAppDisplayID;
@property (retain, nonatomic) NSString *destinationAppDisplayID;
@property (nonatomic) _Bool hasSendOptions;
@property (nonatomic) unsigned int sendOptions;
@property (nonatomic) _Bool hasRequestDefermentToPlaybackQueuePosition;
@property (nonatomic) _Bool requestDefermentToPlaybackQueuePosition;
@property (nonatomic) _Bool hasShouldOverrideManuallyCuratedQueue;
@property (nonatomic) _Bool shouldOverrideManuallyCuratedQueue;
@property (nonatomic, readonly) _Bool hasStationURL;
@property (retain, nonatomic) NSString *stationURL;
@property (nonatomic) _Bool hasShouldBeginRadioPlayback;
@property (nonatomic) _Bool shouldBeginRadioPlayback;
@property (nonatomic) _Bool hasPlaybackQueueInsertionPosition;
@property (nonatomic) int playbackQueueInsertionPosition;
@property (nonatomic, readonly) _Bool hasContentItemID;
@property (retain, nonatomic) NSString *contentItemID;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)repeatModeAsString:(int)arg1;
- (int)StringAsRepeatMode:(id)arg1;
- (id)shuffleModeAsString:(int)arg1;
- (int)StringAsShuffleMode:(id)arg1;

@end
