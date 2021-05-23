/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _NMRMediaRemoteGetStateMessageProfobuf : PBCodable

{
    double _timestamp;
    NSData *_applicationInfoDigest;
    NSData *_knownDigest;
    NSData *_nowPlayingInfoDigest;
    int _originIdentifier;
    NSData *_playbackQueueDigest;
    int _state;
    NSData *_supportedCommandsDigest;
    CDStruct_0736a270 _has;
}

@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic, readonly) _Bool hasKnownDigest;
@property (retain, nonatomic) NSData *knownDigest;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasNowPlayingInfoDigest;
@property (retain, nonatomic) NSData *nowPlayingInfoDigest;
@property (nonatomic, readonly) _Bool hasApplicationInfoDigest;
@property (retain, nonatomic) NSData *applicationInfoDigest;
@property (nonatomic, readonly) _Bool hasSupportedCommandsDigest;
@property (retain, nonatomic) NSData *supportedCommandsDigest;
@property (nonatomic, readonly) _Bool hasPlaybackQueueDigest;
@property (retain, nonatomic) NSData *playbackQueueDigest;
@property (nonatomic) _Bool hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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
