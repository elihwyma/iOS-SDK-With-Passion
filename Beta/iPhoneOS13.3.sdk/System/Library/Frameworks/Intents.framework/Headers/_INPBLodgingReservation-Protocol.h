/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class _INPBDateTimeRange, _INPBInteger, _INPBLocation, _INPBReservation;

@protocol _INPBLodgingReservation <Swift>

@property (retain, nonatomic) _INPBLocation *lodgingBusinessLocation;
@property (nonatomic, readonly) _Bool hasLodgingBusinessLocation;
@property (retain, nonatomic) _INPBInteger *numberOfAdults;
@property (nonatomic, readonly) _Bool hasNumberOfAdults;
@property (retain, nonatomic) _INPBInteger *numberOfChildren;
@property (nonatomic, readonly) _Bool hasNumberOfChildren;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (nonatomic, readonly) _Bool hasReservation;
@property (retain, nonatomic) _INPBDateTimeRange *reservationDuration;
@property (nonatomic, readonly) _Bool hasReservationDuration;

@end
