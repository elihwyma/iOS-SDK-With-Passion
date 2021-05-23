/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendWorkout : PBCodable <Swift>

{
    long long _amm;
    double _duration;
    double _goal;
    long long _goalType;
    long long _isIndoorWorkout;
    long long _isWatchWorkout;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    long long _type;
    NSString *_bundleID;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    NSData *_friendUUID;
    HDCodableSample *_sample;
    struct {
        unsigned int amm:1;
        unsigned int duration:1;
        unsigned int goal:1;
        unsigned int goalType:1;
        unsigned int isIndoorWorkout:1;
        unsigned int isWatchWorkout:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int type:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic, readonly) _Bool hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) _Bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) _Bool hasTotalDistanceInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) _Bool hasGoalType;
@property (nonatomic) long long goalType;
@property (nonatomic) _Bool hasGoal;
@property (nonatomic) double goal;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) _Bool hasIsWatchWorkout;
@property (nonatomic) long long isWatchWorkout;
@property (nonatomic) _Bool hasIsIndoorWorkout;
@property (nonatomic) long long isIndoorWorkout;
@property (nonatomic, readonly) _Bool hasDeviceManufacturer;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (nonatomic, readonly) _Bool hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) _Bool hasAmm;
@property (nonatomic) long long amm;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;

@end
