/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSData, NSString;

@interface HDCodableFitnessFriendActivitySnapshot : PBCodable <Swift>

{
    double _activeHours;
    double _activeHoursGoal;
    long long _amm;
    double _briskMinutes;
    double _briskMinutesGoal;
    double _date;
    double _energyBurned;
    double _energyBurnedGoal;
    double _mmg;
    double _mmv;
    double _pushCount;
    long long _snapshotIndex;
    double _stepCount;
    long long _timeZoneOffsetFromUTCForNoon;
    double _uploadedDate;
    double _walkingAndRunningDistance;
    long long _wheelchairUse;
    NSData *_friendUUID;
    HDCodableSample *_sample;
    NSData *_sourceUUID;
    struct {
        unsigned int activeHours:1;
        unsigned int activeHoursGoal:1;
        unsigned int amm:1;
        unsigned int briskMinutes:1;
        unsigned int briskMinutesGoal:1;
        unsigned int date:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int mmg:1;
        unsigned int mmv:1;
        unsigned int pushCount:1;
        unsigned int snapshotIndex:1;
        unsigned int stepCount:1;
        unsigned int timeZoneOffsetFromUTCForNoon:1;
        unsigned int uploadedDate:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int wheelchairUse:1;
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
@property (nonatomic, readonly) _Bool hasSourceUUID;
@property (retain, nonatomic) NSData *sourceUUID;
@property (nonatomic) _Bool hasSnapshotIndex;
@property (nonatomic) long long snapshotIndex;
@property (nonatomic) _Bool hasDate;
@property (nonatomic) double date;
@property (nonatomic) _Bool hasTimeZoneOffsetFromUTCForNoon;
@property (nonatomic) long long timeZoneOffsetFromUTCForNoon;
@property (nonatomic) _Bool hasEnergyBurned;
@property (nonatomic) double energyBurned;
@property (nonatomic) _Bool hasEnergyBurnedGoal;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) _Bool hasBriskMinutes;
@property (nonatomic) double briskMinutes;
@property (nonatomic) _Bool hasBriskMinutesGoal;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) _Bool hasActiveHours;
@property (nonatomic) double activeHours;
@property (nonatomic) _Bool hasActiveHoursGoal;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) _Bool hasWalkingAndRunningDistance;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) _Bool hasStepCount;
@property (nonatomic) double stepCount;
@property (nonatomic) _Bool hasPushCount;
@property (nonatomic) double pushCount;
@property (nonatomic) _Bool hasWheelchairUse;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) _Bool hasUploadedDate;
@property (nonatomic) double uploadedDate;
@property (nonatomic) _Bool hasMmv;
@property (nonatomic) double mmv;
@property (nonatomic) _Bool hasMmg;
@property (nonatomic) double mmg;
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
