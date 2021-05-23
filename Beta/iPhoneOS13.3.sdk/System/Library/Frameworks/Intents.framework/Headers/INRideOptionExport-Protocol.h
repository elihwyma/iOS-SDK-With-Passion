/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INImage, INPriceRange, NSArray, NSDate, NSNumber, NSString, NSUserActivity;

@protocol INRideOptionExport <Swift>

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

- (unsigned short)init;

@end
