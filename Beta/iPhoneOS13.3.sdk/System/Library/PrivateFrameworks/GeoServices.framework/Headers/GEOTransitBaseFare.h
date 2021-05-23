/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTransitPrice, NSArray, NSDecimalNumber, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOTransitBaseFare : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTransitPrice *_price;
    NSMutableArray *_supportedPaymentMethods;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _numberOfLegs;
    int _paymentType;
    _Bool _cashOnly;
    struct {
        unsigned int has_numberOfLegs:1;
        unsigned int has_paymentType:1;
        unsigned int has_cashOnly:1;
        unsigned int read_unknownFields:1;
        unsigned int read_price:1;
        unsigned int read_supportedPaymentMethods:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_price:1;
        unsigned int wrote_supportedPaymentMethods:1;
        unsigned int wrote_numberOfLegs:1;
        unsigned int wrote_paymentType:1;
        unsigned int wrote_cashOnly:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDecimalNumber *value;
@property (copy, nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSArray *supportedICCardProviders;
@property (nonatomic, readonly) _Bool cashOnly;
@property (nonatomic, readonly) _Bool hasPrice;
@property (retain, nonatomic) GEOTransitPrice *price;
@property (nonatomic) _Bool hasPaymentType;
@property (nonatomic) int paymentType;
@property (nonatomic) _Bool hasNumberOfLegs;
@property (nonatomic) unsigned int numberOfLegs;
@property (retain, nonatomic) NSMutableArray *supportedPaymentMethods;
@property (nonatomic) _Bool hasCashOnly;
@property (nonatomic) _Bool cashOnly;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)supportedPaymentMethodType;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readPrice;
- (void)_readSupportedPaymentMethods;
- (void)_addNoFlagsSupportedPaymentMethod:(id)arg1;
- (unsigned long long)supportedPaymentMethodsCount;
- (void)clearSupportedPaymentMethods;
- (id)supportedPaymentMethodAtIndex:(unsigned long long)arg1;
- (void)addSupportedPaymentMethod:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
- (int)StringAsPaymentType:(id)arg1;

@end
