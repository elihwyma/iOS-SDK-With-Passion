/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface _MRTransactionPacketsProtobuf : PBCodable

{
    NSMutableArray *_packets;
}

@property (retain, nonatomic) NSMutableArray *packets;

+ (Class)packetsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addPackets:(id)arg1;
- (unsigned long long)packetsCount;
- (void)clearPackets;
- (id)packetsAtIndex:(unsigned long long)arg1;

@end
