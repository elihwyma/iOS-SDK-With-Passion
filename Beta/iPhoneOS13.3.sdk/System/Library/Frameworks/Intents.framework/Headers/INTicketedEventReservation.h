/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INReservation.h>

#import <Intents/Swift-Protocol.h>

@class INSeat, INTicketedEvent;

@interface INTicketedEventReservation : INReservation <Swift>

{
    INTicketedEvent *_event;
    INSeat *_reservedSeat;
}

@property (copy, nonatomic, readonly) INTicketedEvent *event;
@property (copy, nonatomic, readonly) INSeat *reservedSeat;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 event:(id)arg8;

@end
