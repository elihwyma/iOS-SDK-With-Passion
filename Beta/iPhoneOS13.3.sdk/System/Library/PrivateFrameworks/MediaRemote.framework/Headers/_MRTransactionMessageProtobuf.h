/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class _MRNowPlayingPlayerPathProtobuf, _MRTransactionPacketsProtobuf;

@interface _MRTransactionMessageProtobuf : PBCodable

{
    unsigned long long _name;
    _MRTransactionPacketsProtobuf *_packets;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    struct {
        unsigned int name:1;
    } _has;
}

@property (nonatomic) _Bool hasName;
@property (nonatomic) unsigned long long name;
@property (nonatomic, readonly) _Bool hasPackets;
@property (retain, nonatomic) _MRTransactionPacketsProtobuf *packets;
@property (nonatomic, readonly) _Bool hasPlayerPath;
@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;

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
