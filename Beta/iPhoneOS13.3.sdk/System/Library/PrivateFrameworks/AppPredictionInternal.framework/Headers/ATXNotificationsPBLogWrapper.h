/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <ProtocolBuffer/PBCodable.h>

@class ATXNotificationsPBGradedRecord, ATXNotificationsPBPeriodicLog, ATXNotificationsPBRecord, ATXNotificationsPBResponse, ATXNotificationsPBSettingLog;

@interface ATXNotificationsPBLogWrapper : PBCodable

{
    ATXNotificationsPBGradedRecord *_grecord;
    ATXNotificationsPBPeriodicLog *_periodiclog;
    ATXNotificationsPBRecord *_record;
    ATXNotificationsPBResponse *_response;
    ATXNotificationsPBSettingLog *_settinglog;
}

@property (nonatomic, readonly) _Bool hasRecord;
@property (retain, nonatomic) ATXNotificationsPBRecord *record;
@property (nonatomic, readonly) _Bool hasResponse;
@property (retain, nonatomic) ATXNotificationsPBResponse *response;
@property (nonatomic, readonly) _Bool hasGrecord;
@property (retain, nonatomic) ATXNotificationsPBGradedRecord *grecord;
@property (nonatomic, readonly) _Bool hasPeriodiclog;
@property (retain, nonatomic) ATXNotificationsPBPeriodicLog *periodiclog;
@property (nonatomic, readonly) _Bool hasSettinglog;
@property (retain, nonatomic) ATXNotificationsPBSettingLog *settinglog;

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
