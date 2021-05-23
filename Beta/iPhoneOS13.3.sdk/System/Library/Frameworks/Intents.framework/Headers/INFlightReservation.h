/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INReservation.h>

#import <Intents/Swift-Protocol.h>

@class INFlight, INSeat;

@interface INFlightReservation : INReservation <Swift>

{
    INSeat *_reservedSeat;
    INFlight *_flight;
}

@property (copy, nonatomic, readonly) INSeat *reservedSeat;
@property (copy, nonatomic, readonly) INFlight *flight;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 reservedSeat:(id)arg7 flight:(id)arg8;

@end
