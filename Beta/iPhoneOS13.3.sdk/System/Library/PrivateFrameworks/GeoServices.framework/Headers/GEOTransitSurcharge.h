/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOTransitSurcharge : PBCodable

{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_surchargeUnits;
    unsigned int _numberOfLegs;
    int _paymentType;
    struct {
        unsigned int has_numberOfLegs:1;
        unsigned int has_paymentType:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *surchargeUnits;
@property (nonatomic) _Bool hasPaymentType;
@property (nonatomic) int paymentType;
@property (nonatomic) _Bool hasNumberOfLegs;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)surchargeUnitType;

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
- (void)addSurchargeUnit:(id)arg1;
- (unsigned long long)surchargeUnitsCount;
- (void)clearSurchargeUnits;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;

@end
