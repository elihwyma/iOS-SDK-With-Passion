/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

#import <Intents/Swift-Protocol.h>

@class INRestaurant, NSDate, NSNumber, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <Swift>

{
    INRestaurant *_restaurant;
    NSString *_reservationIdentifier;
    NSNumber *_maximumNumberOfResults;
    NSDate *_earliestBookingDateForResults;
}

@property (copy, nonatomic) INRestaurant *restaurant;
@property (copy, nonatomic) NSString *reservationIdentifier;
@property (copy, nonatomic) NSNumber *maximumNumberOfResults;
@property (copy, nonatomic) NSDate *earliestBookingDateForResults;
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
- (id)initWithRestaurant:(id)arg1 reservationIdentifier:(id)arg2 maximumNumberOfResults:(id)arg3 earliestBookingDateForResults:(id)arg4;

@end
