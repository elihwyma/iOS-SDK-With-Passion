/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOFareOptions : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _paymentType;
    int _preferredSurchargeType;
    struct {
        unsigned int has_paymentType:1;
        unsigned int has_preferredSurchargeType:1;
    } _flags;
}

@property (nonatomic) _Bool hasPreferredSurchargeType;
@property (nonatomic) int preferredSurchargeType;
@property (nonatomic) _Bool hasPaymentType;
@property (nonatomic) int paymentType;
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
- (id)paymentTypeAsString:(int)arg1;
- (int)StringAsPaymentType:(id)arg1;

@end
