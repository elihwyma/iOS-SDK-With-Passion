/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@protocol _INPBRestaurantReservation <Swift>

@property (retain, nonatomic) _INPBInteger *partySize;
@property (nonatomic, readonly) _Bool hasPartySize;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (nonatomic, readonly) _Bool hasReservationDuration;
@property (retain, nonatomic) _INPBLocation *restaurantLocation;
@property (nonatomic, readonly) _Bool hasRestaurantLocation;

@end
