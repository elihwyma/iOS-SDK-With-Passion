/*
 Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface _NMRPlaybackQueueResponseProtobuf : PBCodable

{
    NSData *_error;
    NSData *_playbackQueue;
}

@property (nonatomic, readonly) _Bool hasPlaybackQueue;
@property (retain, nonatomic) NSData *playbackQueue;
@property (nonatomic, readonly) _Bool hasError;
@property (retain, nonatomic) NSData *error;

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
