/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, VKPGenericShieldStyleInfo;

__attribute__((visibility("hidden")))
@interface VKPShield : PBCodable

{
    VKPGenericShieldStyleInfo *_genericShieldStyleInfo;
    NSString *_identifier;
    NSMutableArray *_variants;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *variants;
@property (nonatomic, readonly) _Bool hasGenericShieldStyleInfo;
@property (retain, nonatomic) VKPGenericShieldStyleInfo *genericShieldStyleInfo;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addVariants:(id)arg1;
- (unsigned long long)variantsCount;
- (void)clearVariants;
- (id)variantsAtIndex:(unsigned long long)arg1;

@end
