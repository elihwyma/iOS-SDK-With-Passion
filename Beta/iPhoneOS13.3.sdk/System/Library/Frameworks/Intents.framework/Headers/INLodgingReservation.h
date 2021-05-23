/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INReservation.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSNumber;

@interface INLodgingReservation : INReservation <Swift>

{
    CLPlacemark *_lodgingBusinessLocation;
    INDateComponentsRange *_reservationDuration;
    NSNumber *_numberOfAdults;
    NSNumber *_numberOfChildren;
}

@property (copy, nonatomic, readonly) CLPlacemark *lodgingBusinessLocation;
@property (copy, nonatomic, readonly) INDateComponentsRange *reservationDuration;
@property (copy, nonatomic, readonly) NSNumber *numberOfAdults;
@property (copy, nonatomic, readonly) NSNumber *numberOfChildren;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)initWithItemReference:(id)arg1 reservationNumber:(id)arg2 bookingTime:(id)arg3 reservationStatus:(long long)arg4 reservationHolderName:(id)arg5 actions:(id)arg6 lodgingBusinessLocation:(id)arg7 reservationDuration:(id)arg8 numberOfAdults:(id)arg9 numberOfChildren:(id)arg10;

@end
