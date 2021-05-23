/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/Swift-Protocol.h>

@class NSData;

@interface NRPBCompressedData : PBCodable <Swift>

{
    NSData *_possiblyCompressedData;
    _Bool _compressed;
    struct {
        unsigned int compressed:1;
    } _has;
}

@property (nonatomic) _Bool hasCompressed;
@property (nonatomic) _Bool compressed;
@property (nonatomic, readonly) _Bool hasPossiblyCompressedData;
@property (retain, nonatomic) NSData *possiblyCompressedData;

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
