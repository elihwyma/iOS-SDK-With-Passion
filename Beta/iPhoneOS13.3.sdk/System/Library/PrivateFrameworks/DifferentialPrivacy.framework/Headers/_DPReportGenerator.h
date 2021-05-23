/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@protocol _DPMetricsCollector;

@interface _DPReportGenerator : NSObject

{
    id <_DPMetricsCollector> _metricsCollector;
}

@property (nonatomic, readonly) id <_DPMetricsCollector> metricsCollector;

+ (id)randomizeKeys:(id)arg1 andSortByPriority:(_Bool)arg2;
+ (id)queryKeysForPattern:(id)arg1 storage:(id)arg2;
+ (unsigned long long)queryRecordCountForKey:(id)arg1 withPredicate:(id)arg2 storage:(id)arg3;
+ (id)queryRecordsForKey:(id)arg1 storage:(id)arg2;
+ (id)filterNonConformingRecordsFrom:(id)arg1;

- (id)init;
- (void)scheduleMaintenanceWithName:(id)arg1 database:(id)arg2;
- (id)generateReportForKeys:(id)arg1 storage:(id)arg2;
- (id)initWithMetricsCollector:(id)arg1;
- (void)reportMetricsForKey:(id)arg1 toBeSubmitted:(id)arg2 currentDate:(id)arg3 storage:(id)arg4;
- (void)reportToPrivateCloudWithStrings:(id)arg1 forKey:(id)arg2;
- (_Bool)markSubmitted:(id)arg1 storage:(id)arg2;
- (id)generateReportUsing:(id)arg1;

@end
