/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRNowPlayingClientProtobuf, _MRNowPlayingPlayerProtobuf, _MROriginProtobuf;

@interface _MRNowPlayingPlayerPathProtobuf : PBCodable

{
    _MRNowPlayingClientProtobuf *_client;
    _MROriginProtobuf *_origin;
    _MRNowPlayingPlayerProtobuf *_player;
}

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (id)client;
- (void)setClient:(id)arg1;
- (_Bool)isResolved;
- (void)writeTo:(id)arg1;
- (id)origin;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)setOrigin:(id)arg1;
- (_Bool)isLocal;
- (_Bool)hasOrigin;
- (id)customDescription;
- (id)player;
- (void)setPlayer:(id)arg1;
- (_Bool)hasClient;
- (id)customDictionaryRepresentation;
- (_Bool)hasPlayer;

@end
