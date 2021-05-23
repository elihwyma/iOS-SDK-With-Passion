/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDataString, _INPBDateTimeRange, _INPBInteger, _INPBIntentMetadata, _INPBLocation, _INPBPaymentMethod;

@protocol _INPBRequestRideIntent <Swift>

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

@end
