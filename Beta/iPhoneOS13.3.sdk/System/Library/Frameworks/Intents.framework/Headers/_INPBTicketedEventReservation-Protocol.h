/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBReservation, _INPBSeat, _INPBTicketedEvent;

@protocol _INPBTicketedEventReservation <Swift>

@property (retain, nonatomic) _INPBTicketedEvent *event;
@property (nonatomic, readonly) _Bool hasEvent;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBSeat *reservedSeat;
@property (nonatomic, readonly) _Bool hasReservedSeat;

@end
