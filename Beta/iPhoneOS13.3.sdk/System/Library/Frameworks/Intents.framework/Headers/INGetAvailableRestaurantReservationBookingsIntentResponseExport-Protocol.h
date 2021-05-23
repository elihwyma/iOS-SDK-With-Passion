/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INTermsAndConditions, NSArray, NSString;

@protocol INGetAvailableRestaurantReservationBookingsIntentResponseExport <Swift>

@property (nonatomic, readonly) long long code;
@property (copy, nonatomic) NSString *localizedRestaurantDescriptionText;
@property (copy, nonatomic) NSString *localizedBookingAdvisementText;
@property (copy, nonatomic) INTermsAndConditions *termsAndConditions;
@property (nonatomic, readonly) NSArray *availableBookings;

- (unsigned short)init;

@end
