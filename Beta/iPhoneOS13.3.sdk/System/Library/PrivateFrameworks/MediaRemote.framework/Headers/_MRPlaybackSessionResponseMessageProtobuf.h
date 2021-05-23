/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRPlaybackSessionProtobuf;

@interface _MRPlaybackSessionResponseMessageProtobuf : PBCodable

{
    _MRPlaybackSessionProtobuf *_playbackSession;
}

@property (nonatomic, readonly) _Bool hasPlaybackSession;
@property (retain, nonatomic) _MRPlaybackSessionProtobuf *playbackSession;

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
