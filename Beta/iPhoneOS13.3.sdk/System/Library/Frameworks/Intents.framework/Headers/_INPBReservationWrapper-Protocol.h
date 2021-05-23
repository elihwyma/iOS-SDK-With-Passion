/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBFlightReservation, _INPBLodgingReservation, _INPBRentalCarReservation, _INPBRestaurantReservation, _INPBTicketedEventReservation, _INPBTrainReservation;

@protocol _INPBReservationWrapper <Swift>

@property (retain, nonatomic) _INPBFlightReservation *flightReservation;
@property (nonatomic, readonly) _Bool hasFlightReservation;
@property (retain, nonatomic) _INPBLodgingReservation *lodgingReservation;
@property (nonatomic, readonly) _Bool hasLodgingReservation;
@property (retain, nonatomic) _INPBRentalCarReservation *rentalCarReservation;
@property (nonatomic, readonly) _Bool hasRentalCarReservation;
@property (retain, nonatomic) _INPBRestaurantReservation *restaurantReservation;
@property (nonatomic, readonly) _Bool hasRestaurantReservation;
@property (retain, nonatomic) _INPBTicketedEventReservation *ticketedEventReservation;
@property (nonatomic, readonly) _Bool hasTicketedEventReservation;
@property (retain, nonatomic) _INPBTrainReservation *trainReservation;
@property (nonatomic, readonly) _Bool hasTrainReservation;

@end
