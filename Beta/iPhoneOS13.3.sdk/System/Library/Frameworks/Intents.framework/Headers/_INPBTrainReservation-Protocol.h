/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBReservation, _INPBSeat, _INPBTrainTrip;

@protocol _INPBTrainReservation <Swift>

@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBSeat *reservedSeat;
@property (nonatomic, readonly) _Bool hasReservedSeat;
@property (retain, nonatomic) _INPBTrainTrip *trainTrip;
@property (nonatomic, readonly) _Bool hasTrainTrip;

@end
