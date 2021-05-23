/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDataString, _INPBTimestamp;

@protocol _INPBReservation <Swift>

@property (copy, nonatomic) NSArray *actions;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBTimestamp *bookingTime;
@property (nonatomic, readonly) _Bool hasBookingTime;
@property (retain, nonatomic) _INPBDataString *itemReference;
@property (nonatomic, readonly) _Bool hasItemReference;
@property (copy, nonatomic) NSString *reservationHolderName;
@property (nonatomic, readonly) _Bool hasReservationHolderName;
@property (copy, nonatomic) NSString *reservationNumber;
@property (nonatomic, readonly) _Bool hasReservationNumber;
@property (nonatomic) int reservationStatus;
@property (nonatomic) _Bool hasReservationStatus;

+ (unsigned short)actionsType;

- (unsigned short)actionsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)clearActions;
- (unsigned short)addActions: /* Error: Ran out of types for this method. */;
- (unsigned short)reservationStatusAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsReservationStatus: /* Error: Ran out of types for this method. */;

@end
