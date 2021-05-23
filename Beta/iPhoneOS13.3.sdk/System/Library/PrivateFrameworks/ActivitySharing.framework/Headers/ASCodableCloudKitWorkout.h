/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableCloudKitSample, NSString;

@interface ASCodableCloudKitWorkout : PBCodable

{
    long long _amm;
    double _duration;
    double _goalInCanonicalUnit;
    long long _goalType;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    long long _type;
    NSString *_bundleID;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    ASCodableCloudKitSample *_sample;
    _Bool _isIndoorWorkout;
    _Bool _isWatchWorkout;
    struct {
        unsigned int amm:1;
        unsigned int duration:1;
        unsigned int goalInCanonicalUnit:1;
        unsigned int goalType:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int type:1;
        unsigned int isIndoorWorkout:1;
        unsigned int isWatchWorkout:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) ASCodableCloudKitSample *sample;
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
@property (nonatomic) _Bool hasGoalInCanonicalUnit;
@property (nonatomic) double goalInCanonicalUnit;
@property (nonatomic, readonly) _Bool hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) _Bool hasIsWatchWorkout;
@property (nonatomic) _Bool isWatchWorkout;
@property (nonatomic) _Bool hasIsIndoorWorkout;
@property (nonatomic) _Bool isIndoorWorkout;
@property (nonatomic, readonly) _Bool hasDeviceManufacturer;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (nonatomic, readonly) _Bool hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) _Bool hasAmm;
@property (nonatomic) long long amm;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)isAmm;

@end
