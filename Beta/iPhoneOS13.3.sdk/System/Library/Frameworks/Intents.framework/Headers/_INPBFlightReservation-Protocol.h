/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBFlight, _INPBReservation, _INPBSeat;

@protocol _INPBFlightReservation <Swift>

@property (retain, nonatomic) _INPBFlight *flight;
@property (nonatomic, readonly) _Bool hasFlight;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBSeat *reservedSeat;
@property (nonatomic, readonly) _Bool hasReservedSeat;

@end
