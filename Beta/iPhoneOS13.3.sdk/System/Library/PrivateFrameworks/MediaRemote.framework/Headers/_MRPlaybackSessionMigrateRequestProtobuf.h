/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackSessionRequestProtobuf;

@interface _MRPlaybackSessionMigrateRequestProtobuf : PBCodable

{
    double _playbackPosition;
    double _playbackRate;
    _MRContentItemProtobuf *_contentItem;
    int _endpointOptions;
    NSMutableArray *_events;
    _MRPlaybackSessionRequestProtobuf *_playbackSessionRequest;
    int _playbackState;
    int _playerOptions;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    NSString *_requestID;
    struct {
        unsigned int playbackPosition:1;
        unsigned int playbackRate:1;
        unsigned int endpointOptions:1;
        unsigned int playbackState:1;
        unsigned int playerOptions:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRequestID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) _Bool hasPlayerOptions;
@property (nonatomic) int playerOptions;
@property (nonatomic) _Bool hasEndpointOptions;
@property (nonatomic) int endpointOptions;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) _Bool hasPlaybackPosition;
@property (nonatomic) double playbackPosition;
@property (nonatomic, readonly) _Bool hasContentItem;
@property (retain, nonatomic) _MRContentItemProtobuf *contentItem;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic) _Bool hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic) _Bool hasPlaybackRate;
@property (nonatomic) double playbackRate;
@property (nonatomic, readonly) _Bool hasPlaybackSessionRequest;
@property (retain, nonatomic) _MRPlaybackSessionRequestProtobuf *playbackSessionRequest;

+ (Class)eventsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEvents:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (id)playbackStateAsString:(int)arg1;
- (int)StringAsPlaybackState:(id)arg1;
- (id)playerOptionsAsString:(int)arg1;
- (int)StringAsPlayerOptions:(id)arg1;
- (id)endpointOptionsAsString:(int)arg1;
- (int)StringAsEndpointOptions:(id)arg1;

@end
