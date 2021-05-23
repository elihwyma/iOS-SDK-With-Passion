/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INReservation.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, INRentalCar;

@interface INRentalCarReservation : INReservation <Swift>

{
    INRentalCar *_rentalCar;
    INDateComponentsRange *_rentalDuration;
    CLPlacemark *_pickupLocation;
    CLPlacemark *_dropOffLocation;
}

@property (copy, nonatomic, readonly) INRentalCar *rentalCar;
@property (copy, nonatomic, readonly) INDateComponentsRange *rentalDuration;
@property (copy, nonatomic, readonly) CLPlacemark *pickupLocation;
@property (copy, nonatomic, readonly) CLPlacemark *dropOffLocation;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 rentalCar:(id)arg7 rentalDuration:(id)arg8 pickupLocation:(id)arg9 dropOffLocation:(id)arg10;

@end
