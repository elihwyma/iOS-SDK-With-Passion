/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDAWDHealthKitGymKitWorkoutEvent : PBCodable <Swift>

{
    long long _timeToBeginExperience;
    unsigned long long _timestamp;
    long long _workoutEndErrorCode;
    int _fitnessMachineType;
    NSString *_manufacturer;
    struct {
        unsigned int timeToBeginExperience:1;
        unsigned int timestamp:1;
        unsigned int workoutEndErrorCode:1;
        unsigned int fitnessMachineType:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasFitnessMachineType;
@property (nonatomic) int fitnessMachineType;
@property (nonatomic, readonly) _Bool hasManufacturer;
@property (retain, nonatomic) NSString *manufacturer;
@property (nonatomic) _Bool hasTimeToBeginExperience;
@property (nonatomic) long long timeToBeginExperience;
@property (nonatomic) _Bool hasWorkoutEndErrorCode;
@property (nonatomic) long long workoutEndErrorCode;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)fitnessMachineTypeAsString:(int)arg1;
- (int)StringAsFitnessMachineType:(id)arg1;

@end
