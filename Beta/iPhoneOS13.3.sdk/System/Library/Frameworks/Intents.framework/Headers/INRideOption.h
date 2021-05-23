/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@interface INRideOption : NSObject <Swift>

{
    NSString *_identifier;
    NSArray *_availablePartySizeOptions;
    NSArray *_fareLineItems;
    NSString *_name;
    NSDate *_estimatedPickupDate;
    INPriceRange *_priceRange;
    NSNumber *_usesMeteredFare;
    NSString *_disclaimerMessage;
    NSString *_availablePartySizeOptionsSelectionPrompt;
    NSString *_specialPricing;
    INImage *_specialPricingBadgeImage;
    NSUserActivity *_userActivityForBookingInApplication;
}

@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSDate *estimatedPickupDate;
@property (copy, nonatomic) INPriceRange *priceRange;
@property (copy, nonatomic) NSNumber *usesMeteredFare;
@property (copy, nonatomic) NSString *disclaimerMessage;
@property (copy, nonatomic) NSArray *availablePartySizeOptions;
@property (copy, nonatomic) NSString *availablePartySizeOptionsSelectionPrompt;
@property (copy, nonatomic) NSString *specialPricing;
@property (copy, nonatomic) INImage *specialPricingBadgeImage;
@property (copy, nonatomic) NSArray *fareLineItems;
@property (retain, nonatomic) NSUserActivity *userActivityForBookingInApplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 estimatedPickupDate:(id)arg2;

@end
