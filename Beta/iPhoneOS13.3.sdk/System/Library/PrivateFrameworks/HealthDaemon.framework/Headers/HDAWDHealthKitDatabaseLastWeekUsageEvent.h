/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitDatabaseLastWeekUsageEvent : PBCodable <Swift>

{
    long long _databaseSizeMB;
    long long _highFrequencyDataSizeMB;
    long long _lastMonthDatabaseSizeIncreaseMB;
    long long _lastMonthRowsAdded;
    long long _manuallyEnteredTypesCount;
    long long _percentageDeletedObjects;
    long long _rowCountObjects;
    long long _thirdPartyAppsCount;
    long long _thirdPartyAppsWroteDataCount;
    unsigned long long _timestamp;
    int _rowCountCDA;
    _Bool _hasWatchSource;
    struct {
        unsigned int databaseSizeMB:1;
        unsigned int highFrequencyDataSizeMB:1;
        unsigned int lastMonthDatabaseSizeIncreaseMB:1;
        unsigned int lastMonthRowsAdded:1;
        unsigned int manuallyEnteredTypesCount:1;
        unsigned int percentageDeletedObjects:1;
        unsigned int rowCountObjects:1;
        unsigned int thirdPartyAppsCount:1;
        unsigned int thirdPartyAppsWroteDataCount:1;
        unsigned int timestamp:1;
        unsigned int rowCountCDA:1;
        unsigned int hasWatchSource:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasThirdPartyAppsCount;
@property (nonatomic) long long thirdPartyAppsCount;
@property (nonatomic) _Bool hasThirdPartyAppsWroteDataCount;
@property (nonatomic) long long thirdPartyAppsWroteDataCount;
@property (nonatomic) _Bool hasDatabaseSizeMB;
@property (nonatomic) long long databaseSizeMB;
@property (nonatomic) _Bool hasRowCountObjects;
@property (nonatomic) long long rowCountObjects;
@property (nonatomic) _Bool hasPercentageDeletedObjects;
@property (nonatomic) long long percentageDeletedObjects;
@property (nonatomic) _Bool hasManuallyEnteredTypesCount;
@property (nonatomic) long long manuallyEnteredTypesCount;
@property (nonatomic) _Bool hasHighFrequencyDataSizeMB;
@property (nonatomic) long long highFrequencyDataSizeMB;
@property (nonatomic) _Bool hasHasWatchSource;
@property (nonatomic) _Bool hasWatchSource;
@property (nonatomic) _Bool hasRowCountCDA;
@property (nonatomic) int rowCountCDA;
@property (nonatomic) _Bool hasLastMonthRowsAdded;
@property (nonatomic) long long lastMonthRowsAdded;
@property (nonatomic) _Bool hasLastMonthDatabaseSizeIncreaseMB;
@property (nonatomic) long long lastMonthDatabaseSizeIncreaseMB;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)rowCountCDAAsString:(int)arg1;
- (int)StringAsRowCountCDA:(id)arg1;

@end
