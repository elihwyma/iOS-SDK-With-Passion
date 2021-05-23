/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitWorkout : PBCodable <Swift>

{
    long long _durationMs;
    long long _endDate;
    long long _startDate;
    unsigned long long _timestamp;
    long long _totalDistance;
    long long _totalEnergyBurned;
    long long _totalSteps;
    int _activityType;
    struct {
        unsigned int durationMs:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int totalDistance:1;
        unsigned int totalEnergyBurned:1;
        unsigned int totalSteps:1;
        unsigned int activityType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasActivityType;
@property (nonatomic) int activityType;
@property (nonatomic) _Bool hasDurationMs;
@property (nonatomic) long long durationMs;
@property (nonatomic) _Bool hasTotalEnergyBurned;
@property (nonatomic) long long totalEnergyBurned;
@property (nonatomic) _Bool hasTotalDistance;
@property (nonatomic) long long totalDistance;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) _Bool hasTotalSteps;
@property (nonatomic) long long totalSteps;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)activityTypeAsString:(int)arg1;
- (int)StringAsActivityType:(id)arg1;

@end
