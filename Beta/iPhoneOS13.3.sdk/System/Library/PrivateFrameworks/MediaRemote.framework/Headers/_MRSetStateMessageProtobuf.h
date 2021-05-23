/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MRNowPlayingInfoProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueCapabilitiesProtobuf, _MRPlaybackQueueProtobuf, _MRPlaybackQueueRequestProtobuf, _MRSupportedCommandsProtobuf;

@interface _MRSetStateMessageProtobuf : PBCodable

{
    double _playbackStateTimestamp;
    NSString *_displayID;
    NSString *_displayName;
    _MRNowPlayingInfoProtobuf *_nowPlayingInfo;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    _MRPlaybackQueueCapabilitiesProtobuf *_playbackQueueCapabilities;
    int _playbackState;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    _MRPlaybackQueueRequestProtobuf *_request;
    _MRSupportedCommandsProtobuf *_supportedCommands;
    struct {
        unsigned int playbackStateTimestamp:1;
        unsigned int playbackState:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasNowPlayingInfo;
@property (retain, nonatomic) _MRNowPlayingInfoProtobuf *nowPlayingInfo;
@property (nonatomic, readonly) _Bool hasSupportedCommands;
@property (retain, nonatomic) _MRSupportedCommandsProtobuf *supportedCommands;
@property (nonatomic, readonly) _Bool hasPlaybackQueue;
@property (retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic, readonly) _Bool hasDisplayID;
@property (retain, nonatomic) NSString *displayID;
@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) _Bool hasPlaybackState;
@property (nonatomic) int playbackState;
@property (nonatomic, readonly) _Bool hasPlaybackQueueCapabilities;
@property (retain, nonatomic) _MRPlaybackQueueCapabilitiesProtobuf *playbackQueueCapabilities;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (nonatomic, readonly) _Bool hasRequest;
@property (retain, nonatomic) _MRPlaybackQueueRequestProtobuf *request;
@property (nonatomic) _Bool hasPlaybackStateTimestamp;
@property (nonatomic) double playbackStateTimestamp;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)playbackStateAsString:(int)arg1;
- (int)StringAsPlaybackState:(id)arg1;

@end
