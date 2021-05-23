/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurantReservationUserBooking;

@protocol INBookRestaurantReservationIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) INRestaurantReservationUserBooking *userBooking;

- (unsigned short)init;

@end
