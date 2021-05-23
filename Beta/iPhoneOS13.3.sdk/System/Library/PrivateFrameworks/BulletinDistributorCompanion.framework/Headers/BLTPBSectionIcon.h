/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface BLTPBSectionIcon : PBCodable

{
    NSMutableArray *_variants;
}

@property (retain, nonatomic) NSMutableArray *variants;

+ (Class)variantType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)variantsCount;
- (void)clearVariants;
- (void)addVariant:(id)arg1;
- (id)variantAtIndex:(unsigned long long)arg1;

@end
