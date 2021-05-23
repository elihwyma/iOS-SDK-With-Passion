/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBTimestamp;

@interface _INPBListRideOptionsIntentResponse : PBCodable <Swift>

{
    struct {
        unsigned int supportsApplePayForPayment:1;
    } _has;
    _Bool _supportsApplePayForPayment;
    _Bool __encodeLegacyGloryData;
    _INPBTimestamp *_expirationDate;
    NSArray *_paymentMethods;
    NSArray *_rideOptions;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) _Bool hasExpirationDate;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (nonatomic, readonly) unsigned long long paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions;
@property (nonatomic, readonly) unsigned long long rideOptionsCount;
@property (nonatomic) _Bool supportsApplePayForPayment;
@property (nonatomic) _Bool hasSupportsApplePayForPayment;

+ (_Bool)supportsSecureCoding;
+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearPaymentMethods;
- (void)addPaymentMethods:(id)arg1;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (void)clearRideOptions;
- (void)addRideOptions:(id)arg1;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;

@end
