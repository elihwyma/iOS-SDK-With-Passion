/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INImage, NSDate, NSNumber;

@protocol INGetAvailableRestaurantReservationBookingDefaultsIntentResponseExport <Swift>

@property (nonatomic, readonly) unsigned long long defaultPartySize;
@property (copy, nonatomic, readonly) NSDate *defaultBookingDate;
@property (copy, nonatomic) NSNumber *maximumPartySize;
@property (copy, nonatomic) NSNumber *minimumPartySize;
@property (copy, nonatomic) INImage *providerImage;

- (unsigned short)init;

@end
