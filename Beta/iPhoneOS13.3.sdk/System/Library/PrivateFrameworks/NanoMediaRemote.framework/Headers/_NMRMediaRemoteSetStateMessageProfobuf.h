/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _NMRMediaRemoteSetStateMessageProfobuf : PBCodable

{
    double _timestamp;
    NSData *_applicationInfo;
    NSData *_digest;
    NSData *_nowPlayingInfo;
    int _originIdentifier;
    NSData *_payload;
    NSData *_playbackQueue;
    int _state;
    NSData *_supportedCommands;
    CDStruct_0736a270 _has;
}

@property (nonatomic) _Bool hasState;
@property (nonatomic) int state;
@property (nonatomic, readonly) _Bool hasPayload;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic, readonly) _Bool hasDigest;
@property (retain, nonatomic) NSData *digest;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, readonly) _Bool hasNowPlayingInfo;
@property (retain, nonatomic) NSData *nowPlayingInfo;
@property (nonatomic, readonly) _Bool hasApplicationInfo;
@property (retain, nonatomic) NSData *applicationInfo;
@property (nonatomic, readonly) _Bool hasSupportedCommands;
@property (retain, nonatomic) NSData *supportedCommands;
@property (nonatomic, readonly) _Bool hasPlaybackQueue;
@property (retain, nonatomic) NSData *playbackQueue;
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
