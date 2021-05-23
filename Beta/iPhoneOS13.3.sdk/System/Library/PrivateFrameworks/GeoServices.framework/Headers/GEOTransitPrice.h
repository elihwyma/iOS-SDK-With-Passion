/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSString, PBUnknownFields;

@interface GEOTransitPrice : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSString *_currencyCode;
    int _amountInCents;
    unsigned int _subunit;
    struct {
        unsigned int has_amountInCents:1;
        unsigned int has_subunit:1;
    } _flags;
}

@property (nonatomic) _Bool hasAmountInCents;
@property (nonatomic) int amountInCents;
@property (nonatomic, readonly) _Bool hasCurrencyCode;
@property (retain, nonatomic) NSString *currencyCode;
@property (nonatomic) _Bool hasSubunit;
@property (nonatomic) unsigned int subunit;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;

@end
