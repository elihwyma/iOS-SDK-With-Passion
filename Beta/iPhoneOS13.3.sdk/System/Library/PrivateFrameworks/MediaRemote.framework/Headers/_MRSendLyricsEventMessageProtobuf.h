/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRLyricsEventProtobuf;

@interface _MRSendLyricsEventMessageProtobuf : PBCodable

{
    _MRLyricsEventProtobuf *_event;
}

@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) _MRLyricsEventProtobuf *event;

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
