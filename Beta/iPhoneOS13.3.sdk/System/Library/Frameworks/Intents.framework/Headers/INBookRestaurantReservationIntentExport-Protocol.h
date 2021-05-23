/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurant, INRestaurantGuest, INRestaurantOffer, NSDateComponents, NSString;

@protocol INBookRestaurantReservationIntentExport <Swift>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSDateComponents *bookingDateComponents;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (copy, nonatomic) INRestaurantGuest *guest;
@property (copy, nonatomic) INRestaurantOffer *selectedOffer;
@property (copy, nonatomic) NSString *guestProvidedSpecialRequestText;

- (unsigned short)init;

@end
