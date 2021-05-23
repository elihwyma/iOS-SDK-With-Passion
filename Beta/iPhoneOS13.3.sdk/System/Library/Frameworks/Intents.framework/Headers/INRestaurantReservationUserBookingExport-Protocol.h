/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurantGuest, INRestaurantOffer, NSDate, NSString;

@protocol INRestaurantReservationUserBookingExport <Swift>

@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) NSString *advisementText;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDate *dateStatusModified;

- (unsigned short)init;

@end
