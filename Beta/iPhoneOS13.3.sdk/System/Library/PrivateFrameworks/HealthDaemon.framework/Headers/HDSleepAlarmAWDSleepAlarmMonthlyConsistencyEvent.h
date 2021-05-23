/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDSleepAlarmAWDSleepAlarmStatistics, NSString;

@interface HDSleepAlarmAWDSleepAlarmMonthlyConsistencyEvent : PBCodable <Swift>

{
    long long _bedtimeAlarmNightCount;
    long long _bedtimeChangesCount;
    long long _thirdPartySleepTrackerNightCount;
    unsigned long long _timestamp;
    HDSleepAlarmAWDSleepAlarmStatistics *_bedtimeChangesMinutesStatistics;
    HDSleepAlarmAWDSleepAlarmStatistics *_bedtimeCorrectionMinutesStatistics;
    NSString *_thirdPartyBundleIdentifier;
    NSString *_thirdPartyDeviceManufacturer;
    NSString *_thirdPartyDeviceModel;
    struct {
        unsigned int bedtimeAlarmNightCount:1;
        unsigned int bedtimeChangesCount:1;
        unsigned int thirdPartySleepTrackerNightCount:1;
        unsigned int timestamp:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasBedtimeAlarmNightCount;
@property (nonatomic) long long bedtimeAlarmNightCount;
@property (nonatomic) _Bool hasBedtimeChangesCount;
@property (nonatomic) long long bedtimeChangesCount;
@property (nonatomic) _Bool hasThirdPartySleepTrackerNightCount;
@property (nonatomic) long long thirdPartySleepTrackerNightCount;
@property (nonatomic, readonly) _Bool hasThirdPartyBundleIdentifier;
@property (retain, nonatomic) NSString *thirdPartyBundleIdentifier;
@property (nonatomic, readonly) _Bool hasBedtimeCorrectionMinutesStatistics;
@property (retain, nonatomic) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeCorrectionMinutesStatistics;
@property (nonatomic, readonly) _Bool hasBedtimeChangesMinutesStatistics;
@property (retain, nonatomic) HDSleepAlarmAWDSleepAlarmStatistics *bedtimeChangesMinutesStatistics;
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
