/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDSleepAlarmAWDSleepAlarmNightEvent : PBCodable <Swift>

{
    long long _bedtimeHour;
    long long _bedtimeMinute;
    long long _bedtimeToCorrectedBedtimeMinutes;
    long long _bedtimeToFirstSleepInterruptionMinutes;
    long long _bedtimeToStartOfLongestSleepIntervalMinutes;
    long long _correctedBedtimeToThirdPartySleepOnsetMinutes;
    long long _percentOfDesiredSleep;
    unsigned long long _timestamp;
    long long _wakeupTimeToThirdPartyWakeupTimeMinutes;
    NSString *_thirdPartyBundleIdentifier;
    NSString *_thirdPartyDeviceManufacturer;
    NSString *_thirdPartyDeviceModel;
    _Bool _wakeupIsOnWeekday;
    struct {
        unsigned int bedtimeHour:1;
        unsigned int bedtimeMinute:1;
        unsigned int bedtimeToCorrectedBedtimeMinutes:1;
        unsigned int bedtimeToFirstSleepInterruptionMinutes:1;
        unsigned int bedtimeToStartOfLongestSleepIntervalMinutes:1;
        unsigned int correctedBedtimeToThirdPartySleepOnsetMinutes:1;
        unsigned int percentOfDesiredSleep:1;
        unsigned int timestamp:1;
        unsigned int wakeupTimeToThirdPartyWakeupTimeMinutes:1;
        unsigned int wakeupIsOnWeekday:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasBedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) long long bedtimeToCorrectedBedtimeMinutes;
@property (nonatomic) _Bool hasBedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) long long bedtimeToFirstSleepInterruptionMinutes;
@property (nonatomic) _Bool hasBedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) long long bedtimeToStartOfLongestSleepIntervalMinutes;
@property (nonatomic) _Bool hasCorrectedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) long long correctedBedtimeToThirdPartySleepOnsetMinutes;
@property (nonatomic) _Bool hasWakeupTimeToThirdPartyWakeupTimeMinutes;
@property (nonatomic) long long wakeupTimeToThirdPartyWakeupTimeMinutes;
@property (nonatomic, readonly) _Bool hasThirdPartyBundleIdentifier;
@property (retain, nonatomic) NSString *thirdPartyBundleIdentifier;
@property (nonatomic) _Bool hasPercentOfDesiredSleep;
@property (nonatomic) long long percentOfDesiredSleep;
@property (nonatomic) _Bool hasBedtimeHour;
@property (nonatomic) long long bedtimeHour;
@property (nonatomic) _Bool hasBedtimeMinute;
@property (nonatomic) long long bedtimeMinute;
@property (nonatomic) _Bool hasWakeupIsOnWeekday;
@property (nonatomic) _Bool wakeupIsOnWeekday;
@property (nonatomic, readonly) _Bool hasThirdPartyDeviceModel;
@property (retain, nonatomic) NSString *thirdPartyDeviceModel;
@property (nonatomic, readonly) _Bool hasThirdPartyDeviceManufacturer;
@property (retain, nonatomic) NSString *thirdPartyDeviceManufacturer;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
