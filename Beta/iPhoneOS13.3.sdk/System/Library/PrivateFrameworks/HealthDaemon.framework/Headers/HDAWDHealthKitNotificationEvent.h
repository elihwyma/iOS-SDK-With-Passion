/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitAchievement, HDAWDHealthKitActivityCache, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitExperimentalCondition, HDAWDHealthKitNotificationResponseFlags, HDAWDHealthKitWeeklySummaryDetail, NSMutableArray;

@interface HDAWDHealthKitNotificationEvent : PBCodable <Swift>

{
    CDStruct_9f2792e4 _goalTypes;
    long long _endDate;
    long long _startDate;
    unsigned long long _timestamp;
    HDAWDHealthKitAchievement *_achievement;
    HDAWDHealthKitActivityCache *_activityCache;
    int _alertType;
    HDAWDHealthKitConcurrentCalendarItem *_calendarItem;
    HDAWDHealthKitExperimentalCondition *_experimentalCondition;
    HDAWDHealthKitNotificationResponseFlags *_responseFlags;
    int _testAction;
    NSMutableArray *_views;
    HDAWDHealthKitWeeklySummaryDetail *_weeklySummaryDetail;
    _Bool _dndEnabled;
    _Bool _failedPosting;
    struct {
        unsigned int endDate:1;
        unsigned int startDate:1;
        unsigned int timestamp:1;
        unsigned int alertType:1;
        unsigned int testAction:1;
        unsigned int dndEnabled:1;
        unsigned int failedPosting:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasAlertType;
@property (nonatomic) int alertType;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;
@property (nonatomic) _Bool hasDndEnabled;
@property (nonatomic) _Bool dndEnabled;
@property (nonatomic) _Bool hasFailedPosting;
@property (nonatomic) _Bool failedPosting;
@property (nonatomic, readonly) _Bool hasExperimentalCondition;
@property (retain, nonatomic) HDAWDHealthKitExperimentalCondition *experimentalCondition;
@property (nonatomic) _Bool hasTestAction;
@property (nonatomic) int testAction;
@property (nonatomic, readonly) _Bool hasCalendarItem;
@property (retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *calendarItem;
@property (retain, nonatomic) NSMutableArray *views;
@property (nonatomic, readonly) _Bool hasActivityCache;
@property (retain, nonatomic) HDAWDHealthKitActivityCache *activityCache;
@property (nonatomic, readonly) _Bool hasAchievement;
@property (retain, nonatomic) HDAWDHealthKitAchievement *achievement;
@property (nonatomic, readonly) _Bool hasWeeklySummaryDetail;
@property (retain, nonatomic) HDAWDHealthKitWeeklySummaryDetail *weeklySummaryDetail;
@property (nonatomic, readonly) unsigned long long goalTypesCount;
@property (nonatomic, readonly) unsigned int *goalTypes;
@property (nonatomic, readonly) _Bool hasResponseFlags;
@property (retain, nonatomic) HDAWDHealthKitNotificationResponseFlags *responseFlags;

+ (Class)viewsType;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)alertTypeAsString:(int)arg1;
- (int)StringAsAlertType:(id)arg1;
- (void)addViews:(id)arg1;
- (unsigned long long)viewsCount;
- (void)clearViews;
- (id)viewsAtIndex:(unsigned long long)arg1;
- (void)clearGoalTypes;
- (unsigned int)goalTypesAtIndex:(unsigned long long)arg1;
- (void)addGoalTypes:(unsigned int)arg1;
- (id)testActionAsString:(int)arg1;
- (int)StringAsTestAction:(id)arg1;
- (void)setGoalTypes:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
