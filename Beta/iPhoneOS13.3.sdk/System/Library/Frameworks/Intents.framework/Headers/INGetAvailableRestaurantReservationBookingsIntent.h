/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

#import <Intents/Swift-Protocol.h>

@class INRestaurant, NSDate, NSDateComponents, NSNumber, NSString;

@interface INGetAvailableRestaurantReservationBookingsIntent : INIntent <Swift>

{
    INRestaurant *_restaurant;
    unsigned long long _partySize;
    NSDateComponents *_preferredBookingDateComponents;
    NSNumber *_maximumNumberOfResults;
    NSDate *_earliestBookingDateForResults;
    NSDate *_latestBookingDateForResults;
    NSDate *_preferredBookingDate;
}

@property (retain, nonatomic) NSDate *preferredBookingDate;
@property (copy, nonatomic) INRestaurant *restaurant;
@property (nonatomic) unsigned long long partySize;
@property (copy, nonatomic) NSDateComponents *preferredBookingDateComponents;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults;
@property (copy, nonatomic) NSDate *latestBookingDateForResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)intentDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithRestaurant:(id)arg1 partySize:(unsigned long long)arg2 preferredBookingDateComponents:(id)arg3 maximumNumberOfResults:(id)arg4 earliestBookingDateForResults:(id)arg5 latestBookingDateForResults:(id)arg6;

@end
