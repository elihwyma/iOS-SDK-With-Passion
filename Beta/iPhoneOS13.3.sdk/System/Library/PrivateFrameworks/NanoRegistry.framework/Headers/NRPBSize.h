/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@interface NRPBSize : PBCodable <Swift>

{
    float _height;
    float _width;
}

@property (nonatomic) float width;
@property (nonatomic) float height;

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
