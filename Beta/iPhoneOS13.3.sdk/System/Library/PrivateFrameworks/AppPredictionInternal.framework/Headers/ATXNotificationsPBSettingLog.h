/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXNotificationsPBAggregateData, ATXNotificationsPBSetting, ATXNotificationsPBUsageData;

@interface ATXNotificationsPBSettingLog : PBCodable

{
    ATXNotificationsPBAggregateData *_aggregate;
    ATXNotificationsPBSetting *_setting;
    ATXNotificationsPBUsageData *_usage;
}

@property (nonatomic, readonly) _Bool hasSetting;
@property (retain, nonatomic) ATXNotificationsPBSetting *setting;
@property (nonatomic, readonly) _Bool hasUsage;
@property (retain, nonatomic) ATXNotificationsPBUsageData *usage;
@property (nonatomic, readonly) _Bool hasAggregate;
@property (retain, nonatomic) ATXNotificationsPBAggregateData *aggregate;

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
