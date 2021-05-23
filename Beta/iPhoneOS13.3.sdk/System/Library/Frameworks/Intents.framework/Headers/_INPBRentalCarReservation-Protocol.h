/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDateTimeRange, _INPBLocationValue, _INPBRentalCar, _INPBReservation;

@protocol _INPBRentalCarReservation <Swift>

@property (retain, nonatomic) _INPBLocationValue *dropOffLocation;
@property (nonatomic, readonly) _Bool hasDropOffLocation;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation;
@property (nonatomic, readonly) _Bool hasPickupLocation;
@property (retain, nonatomic) _INPBRentalCar *rentalCar;
@property (nonatomic, readonly) _Bool hasRentalCar;
@property (retain, nonatomic) _INPBDateTimeRange *rentalDuration;
@property (nonatomic, readonly) _Bool hasRentalDuration;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;

@end
