/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class INRestaurant, NSArray, NSDate, NSString;

@protocol INRestaurantReservationBookingExport <Swift>

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSString *bookingDescription;
@property (copy, nonatomic) NSDate *bookingDate;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSString *bookingIdentifier;
@property (nonatomic, getter=isBookingAvailable) _Bool bookingAvailable;
@property (copy, nonatomic) NSArray *offers;
@property (nonatomic) _Bool requiresManualRequest;
@property (nonatomic) _Bool requiresEmailAddress;
@property (nonatomic) _Bool requiresName;
@property (nonatomic) _Bool requiresPhoneNumber;

- (unsigned short)init;

@end
