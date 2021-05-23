/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class HDActivitySummaryQueryHelper, HDSQLitePredicate;

@interface HDActivitySummaryQueryServer : HDQueryServer

{
    _Bool _deliversUpdates;
    long long _lastProcessedAnchor;
    HDSQLitePredicate *_filterPredicate;
    HDActivitySummaryQueryHelper *_queryHelper;
    _Bool _hasSentInitialResults;
}

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (void)_setUpInitialQueryHelper;
- (void)_queue_deliverErrorToClient:(id)arg1;
- (void)_queue_deliverActivitySummariesToClient:(id)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3;
- (void)_queue_deliverResultsWithActivitySummaries:(id)arg1 isFinalBatch:(_Bool)arg2 clearPendingBatches:(_Bool)arg3 error:(id)arg4;

@end
