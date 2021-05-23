/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, NSString, _ATXAppDailyDoseCurrentStore, _ATXDuetHelper;

@protocol OS_dispatch_queue;

@interface _ATXAppDailyDose : NSObject

{
    _ATXDuetHelper *_duetHelper;
    NSObject<OS_dispatch_queue> *_queue;
    _ATXAppDailyDoseCurrentStore *_currentDoseStore;
    NSMutableDictionary *_appHistoricalDoseMap;
    NSDate *_duetHistoryTimestamp;
    NSString *_previousAppId;
    NSDate *_previousAppLaunchDate;
    double _alpha;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)_defaultHistoricalDosePath;
+ (id)_defaultCurrentDosePath;
+ (void)deleteCurrentDoseFile;

- (id)init;
- (id)now;
- (void)train;
- (id)initWithDuetHelper:(id)arg1;
- (id)initWithDuetHelper:(id)arg1 timeZone:(id)arg2 today:(id)arg3 alpha:(double)arg4 historicalDosePath:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)currentDoseStore;
- (id)getDoseForApp:(id)arg1;
- (double)getCurrentDoseForApp:(id)arg1;
- (id)todayWithTimeZone:(id)arg1;
- (void)_doTrainingOn:(id)arg1 timeZone:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addLaunchForBundleId:(id)arg1 date:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_recordAppDurationForApp:(id)arg1 withStartTime:(id)arg2 andEndTime:(id)arg3;
- (void)stopAppUsageAtDate:(id)arg1;
- (void)_asyncStopAppUsageAtDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_writeHistoricalDoseWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_loadHistoricalDoseFrom:(id)arg1;
- (void)_backfillAppDurationMapDBForToday;
- (id)previousBundleId;

@end
