/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INReservation.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INRestaurantReservation : INReservation <Swift>

{
    INDateComponentsRange *_reservationDuration;
    NSNumber *_partySize;
    CLPlacemark *_restaurantLocation;
}

@property (copy, nonatomic, readonly) INDateComponentsRange *reservationDuration;
@property (copy, nonatomic, readonly) NSNumber *partySize;
@property (copy, nonatomic, readonly) CLPlacemark *restaurantLocation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservationDuration:(id)arg7 partySize:(id)arg8 restaurantLocation:(id)arg9;

@end
