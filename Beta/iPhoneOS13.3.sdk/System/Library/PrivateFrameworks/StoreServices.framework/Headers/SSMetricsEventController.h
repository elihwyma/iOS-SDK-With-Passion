/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSMetricsController.h>

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController

{
    SSMetricsEventTable *_table;
}

- (id)init;
- (void)flushUnreportedEventsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (int)_maximumUnreportedToSelect;
- (id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3 suppressUserInfo:(_Bool)arg4;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressDSID:(_Bool)arg3;
- (long long)countUnreportedEventsBefore:(long long)arg1;
- (_Bool)deleteEventsInsertedBefore:(long long)arg1;
- (_Bool)deleteReportedEvents;
- (_Bool)insertEventSummaries:(id)arg1 error:(id *)arg2;
- (_Bool)markEventsAsReported:(id)arg1;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2 suppressUserInfo:(_Bool)arg3;
- (id)unreportedEventURLsSince:(long long)arg1;

@end
