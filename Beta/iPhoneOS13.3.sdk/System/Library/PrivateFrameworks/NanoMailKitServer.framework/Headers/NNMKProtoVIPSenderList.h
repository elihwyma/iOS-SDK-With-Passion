/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NNMKProtoVIPSenderList : PBCodable

{
    NSMutableArray *_vips;
}

@property (retain, nonatomic) NSMutableArray *vips;

+ (id)protoVIPList:(id)arg1;
+ (Class)vipsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVips:(id)arg1;
- (id)vipList;
- (unsigned long long)vipsCount;
- (void)clearVips;
- (id)vipsAtIndex:(unsigned long long)arg1;

@end
