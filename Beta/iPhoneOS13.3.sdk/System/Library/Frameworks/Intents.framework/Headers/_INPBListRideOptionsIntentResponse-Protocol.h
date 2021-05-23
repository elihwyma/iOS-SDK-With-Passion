/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, _INPBTimestamp;

@protocol _INPBListRideOptionsIntentResponse <Swift>

@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) _Bool hasExpirationDate;
@property (copy, nonatomic) NSArray *paymentMethods;
@property (nonatomic, readonly) unsigned long long paymentMethodsCount;
@property (copy, nonatomic) NSArray *rideOptions;
@property (nonatomic, readonly) unsigned long long rideOptionsCount;
@property (nonatomic) _Bool supportsApplePayForPayment;
@property (nonatomic) _Bool hasSupportsApplePayForPayment;

+ (unsigned short)paymentMethodsType;
+ (unsigned short)rideOptionsType;

- (unsigned short)clearPaymentMethods;
- (unsigned short)addPaymentMethods: /* Error: Ran out of types for this method. */;
- (unsigned short)paymentMethodsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearRideOptions;
- (unsigned short)addRideOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)rideOptionsAtIndex: /* Error: Ran out of types for this method. */;

@end
