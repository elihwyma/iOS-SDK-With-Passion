/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBImageValue, _INPBPriceRangeValue, _INPBTimestamp, _INPBUserActivity;

@protocol _INPBRideOption <Swift>

@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (nonatomic, readonly) unsigned long long availablePartySizeOptionsCount;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (nonatomic, readonly) _Bool hasAvailablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (nonatomic, readonly) _Bool hasDisclaimerMessage;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, readonly) _Bool hasEstimatedPickupDate;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (nonatomic, readonly) unsigned long long fareLineItemsCount;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) _INPBPriceRangeValue *priceRange;
@property (nonatomic, readonly) _Bool hasPriceRange;
@property (copy, nonatomic) NSString *specialPricing;
@property (nonatomic, readonly) _Bool hasSpecialPricing;
@property (retain, nonatomic) _INPBImageValue *specialPricingBadgeImage;
@property (nonatomic, readonly) _Bool hasSpecialPricingBadgeImage;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic, readonly) _Bool hasSubtitle;
@property (retain, nonatomic) _INPBUserActivity *userActivityForBookingInApplication;
@property (nonatomic, readonly) _Bool hasUserActivityForBookingInApplication;
@property (nonatomic) _Bool usesMeteredFare;
@property (nonatomic) _Bool hasUsesMeteredFare;

+ (unsigned short)availablePartySizeOptionsType;
+ (unsigned short)fareLineItemsType;

- (unsigned short)clearAvailablePartySizeOptions;
- (unsigned short)addAvailablePartySizeOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)availablePartySizeOptionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearFareLineItems;
- (unsigned short)addFareLineItems: /* Error: Ran out of types for this method. */;
- (unsigned short)fareLineItemsAtIndex: /* Error: Ran out of types for this method. */;

@end
