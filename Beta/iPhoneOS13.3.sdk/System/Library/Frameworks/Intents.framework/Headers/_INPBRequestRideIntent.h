/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBInteger, _INPBIntentMetadata, _INPBLocation, _INPBPaymentMethod;

@interface _INPBRequestRideIntent : PBCodable <Swift>

{
    struct {
        unsigned int usesApplePayForPayment:1;
    } _has;
    _Bool _usesApplePayForPayment;
    _Bool __encodeLegacyGloryData;
    _INPBLocation *_dropOffLocation;
    _INPBIntentMetadata *_intentMetadata;
    _INPBInteger *_partySize;
    _INPBPaymentMethod *_paymentMethod;
    _INPBDataString *_paymentMethodName;
    _INPBLocation *_pickupLocation;
    _INPBDateTimeRange *_pickupTime;
    _INPBDataString *_rideOptionName;
    _INPBDateTimeRange *_scheduledPickupTime;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) _INPBLocation *dropOffLocation;
@property (nonatomic, readonly) _Bool hasDropOffLocation;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, readonly) _Bool hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *partySize;
@property (nonatomic, readonly) _Bool hasPartySize;
@property (retain, nonatomic) _INPBPaymentMethod *paymentMethod;
@property (nonatomic, readonly) _Bool hasPaymentMethod;
@property (retain, nonatomic) _INPBDataString *paymentMethodName;
@property (nonatomic, readonly) _Bool hasPaymentMethodName;
@property (retain, nonatomic) _INPBLocation *pickupLocation;
@property (nonatomic, readonly) _Bool hasPickupLocation;
@property (retain, nonatomic) _INPBDateTimeRange *pickupTime;
@property (nonatomic, readonly) _Bool hasPickupTime;
@property (retain, nonatomic) _INPBDataString *rideOptionName;
@property (nonatomic, readonly) _Bool hasRideOptionName;
@property (retain, nonatomic) _INPBDateTimeRange *scheduledPickupTime;
@property (nonatomic, readonly) _Bool hasScheduledPickupTime;
@property (nonatomic) _Bool usesApplePayForPayment;
@property (nonatomic) _Bool hasUsesApplePayForPayment;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
