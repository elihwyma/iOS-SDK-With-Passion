/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRangeValue, _INPBLocationValue, _INPBRideCompletionStatus, _INPBRideDriver, _INPBRideOption, _INPBRideVehicle, _INPBTimestamp, _INPBUserActivity;

@protocol _INPBRideStatus <Swift>

@property (copy, nonatomic) NSArray *additionalActionItems;
@property (nonatomic, readonly) unsigned long long additionalActionItemsCount;
@property (retain, nonatomic) _INPBRideCompletionStatus *completionStatus;
@property (nonatomic, readonly) _Bool hasCompletionStatus;
@property (retain, nonatomic) _INPBRideDriver *driver;
@property (nonatomic, readonly) _Bool hasDriver;
@property (retain, nonatomic) _INPBLocationValue *dropOffLocation;
@property (nonatomic, readonly) _Bool hasDropOffLocation;
@property (retain, nonatomic) _INPBTimestamp *estimatedDropOffDate;
@property (nonatomic, readonly) _Bool hasEstimatedDropOffDate;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property (nonatomic, readonly) _Bool hasEstimatedPickupDate;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupEndDate;
@property (nonatomic, readonly) _Bool hasEstimatedPickupEndDate;
@property (nonatomic) int phase;
@property (nonatomic) _Bool hasPhase;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation;
@property (nonatomic, readonly) _Bool hasPickupLocation;
@property (copy, nonatomic) NSString *rideIdentifier;
@property (nonatomic, readonly) _Bool hasRideIdentifier;
@property (retain, nonatomic) _INPBRideOption *rideOption;
@property (nonatomic, readonly) _Bool hasRideOption;
@property (retain, nonatomic) _INPBDateTimeRangeValue *scheduledPickupTime;
@property (nonatomic, readonly) _Bool hasScheduledPickupTime;
@property (retain, nonatomic) _INPBUserActivity *userActivityForCancelingInApplication;
@property (nonatomic, readonly) _Bool hasUserActivityForCancelingInApplication;
@property (retain, nonatomic) _INPBRideVehicle *vehicle;
@property (nonatomic, readonly) _Bool hasVehicle;
@property (copy, nonatomic) NSArray *waypoints;
@property (nonatomic, readonly) unsigned long long waypointsCount;

+ (unsigned short)waypointsType;
+ (unsigned short)additionalActionItemsType;

- (unsigned short)clearWaypoints;
- (unsigned short)waypointsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)addWaypoints: /* Error: Ran out of types for this method. */;
- (unsigned short)clearAdditionalActionItems;
- (unsigned short)addAdditionalActionItems: /* Error: Ran out of types for this method. */;
- (unsigned short)additionalActionItemsAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)phaseAsString: /* Error: Ran out of types for this method. */;
- (unsigned short)StringAsPhase: /* Error: Ran out of types for this method. */;

@end
