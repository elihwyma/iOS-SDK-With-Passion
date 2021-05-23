/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPMerchantLookupCorrections : PBCodable

{
    _Bool _isCategoryIncorrect;
    _Bool _isMerchantIncorrect;
    _Bool _isOtherIssue;
    struct {
        unsigned int has_isCategoryIncorrect:1;
        unsigned int has_isMerchantIncorrect:1;
        unsigned int has_isOtherIssue:1;
    } _flags;
}

@property (nonatomic) _Bool hasIsCategoryIncorrect;
@property (nonatomic) _Bool isCategoryIncorrect;
@property (nonatomic) _Bool hasIsMerchantIncorrect;
@property (nonatomic) _Bool isMerchantIncorrect;
@property (nonatomic) _Bool hasIsOtherIssue;
@property (nonatomic) _Bool isOtherIssue;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;

@end
