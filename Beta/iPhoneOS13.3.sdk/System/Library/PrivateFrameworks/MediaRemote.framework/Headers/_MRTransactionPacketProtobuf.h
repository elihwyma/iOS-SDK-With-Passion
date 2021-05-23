/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString, _MRTransactionKeyProtobuf;

@interface _MRTransactionPacketProtobuf : PBCodable

{
    unsigned long long _totalLength;
    unsigned long long _totalWritePosition;
    NSString *_identifier;
    _MRTransactionKeyProtobuf *_key;
    NSData *_packetData;
    struct {
        unsigned int totalLength:1;
        unsigned int totalWritePosition:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) _MRTransactionKeyProtobuf *key;
@property (nonatomic, readonly) _Bool hasPacketData;
@property (retain, nonatomic) NSData *packetData;
@property (nonatomic, readonly) _Bool hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) _Bool hasTotalLength;
@property (nonatomic) unsigned long long totalLength;
@property (nonatomic) _Bool hasTotalWritePosition;
@property (nonatomic) unsigned long long totalWritePosition;

+ (void)initialize;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)customDictionaryRepresentation;

@end
