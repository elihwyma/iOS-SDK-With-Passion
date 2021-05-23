/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurant, NSDate, NSNumber, NSString;

@protocol INGetUserCurrentRestaurantReservationBookingsIntentExport <Swift>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSString *reservationIdentifier;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults;

- (unsigned short)init;

@end
