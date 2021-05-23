/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@class PPXPCClientHelper, PPXPCClientPipelinedBatchQueryManager;

@interface PPEventClient : NSObject

{
    PPXPCClientHelper *_clientHelper;
    PPXPCClientPipelinedBatchQueryManager *_queryManager;
}

+ (id)sharedInstance;

- (id)init;
- (id)_remoteObjectProxy;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eventNameRecordBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)eventNameRecordChangesBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)eventHighlightsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)interactionSummaryMetricsBatch:(id)arg1 isLast:(_Bool)arg2 error:(id)arg3 queryId:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_unblockPendingQueries;
- (_Bool)eventNameRecordsForClient:(id)arg1 error:(id *)arg2 handleBatch:(CDUnknownBlockType)arg3;
- (_Bool)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 error:(id *)arg3 handleBatch:(CDUnknownBlockType)arg4;
- (_Bool)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id *)arg4 handleBatch:(CDUnknownBlockType)arg5;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (_Bool)interactionSummaryMetricsWithError:(id *)arg1 handleBatch:(CDUnknownBlockType)arg2;
- (_Bool)sendRTCLogsWithError:(id *)arg1;

@end
