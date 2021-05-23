/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSWatchMetricsEventTable;

@protocol OS_dispatch_queue;

@interface SSWatchMetricsEventsController : NSObject

{
    SSWatchMetricsEventTable *_table;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (nonatomic, readonly) SSWatchMetricsEventTable *table;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)_numberFormatter;

- (_Bool)insertWatchMetricEvent:(id)arg1 error:(id *)arg2;
- (id)unreportedEventsSinceTimestamp:(long long)arg1;
- (void)discardUnreportableEvents;
- (void)markAsCompleted:(id)arg1;
- (void)markAsFailed:(id)arg1;

@end
