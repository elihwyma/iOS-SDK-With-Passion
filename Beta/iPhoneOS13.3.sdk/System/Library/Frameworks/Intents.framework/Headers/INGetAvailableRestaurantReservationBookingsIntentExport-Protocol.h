/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurant, NSDate, NSDateComponents, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingsIntentExport <Swift>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSDateComponents *preferredBookingDateComponents;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults;
@property (copy, nonatomic) NSDate *latestBookingDateForResults;

- (unsigned short)init;

@end
