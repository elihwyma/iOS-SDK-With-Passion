/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/Swift-Protocol.h>

@class NSArray, NSString, _INPBDateTimeRangeValue, _INPBLocationValue, _INPBRideCompletionStatus, _INPBRideDriver, _INPBRideOption, _INPBRideVehicle, _INPBTimestamp, _INPBUserActivity;

@interface _INPBRideStatus : PBCodable <Swift>

{
    struct {
        unsigned int phase:1;
    } _has;
    _Bool __encodeLegacyGloryData;
    int _phase;
    NSArray *_additionalActionItems;
    _INPBRideCompletionStatus *_completionStatus;
    _INPBRideDriver *_driver;
    _INPBLocationValue *_dropOffLocation;
    _INPBTimestamp *_estimatedDropOffDate;
    _INPBTimestamp *_estimatedPickupDate;
    _INPBTimestamp *_estimatedPickupEndDate;
    _INPBLocationValue *_pickupLocation;
    NSString *_rideIdentifier;
    _INPBRideOption *_rideOption;
    _INPBDateTimeRangeValue *_scheduledPickupTime;
    _INPBUserActivity *_userActivityForCancelingInApplication;
    _INPBRideVehicle *_vehicle;
    NSArray *_waypoints;
}

@property (nonatomic, setter=_setEncodeLegacyGloryData:) _Bool _encodeLegacyGloryData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (_Bool)supportsSecureCoding;
+ (Class)waypointsType;
+ (Class)additionalActionItemsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)clearWaypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (void)addWaypoints:(id)arg1;
- (void)clearAdditionalActionItems;
- (void)addAdditionalActionItems:(id)arg1;
- (id)additionalActionItemsAtIndex:(unsigned long long)arg1;
- (id)phaseAsString:(int)arg1;
- (int)StringAsPhase:(id)arg1;

@end
