/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;

@protocol PPEventClientProtocol;

@interface PPEventServerRequestHandler : NSObject

{
    id <PPEventClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)sendRTCLogsWithWithCompletion:(CDUnknownBlockType)arg1;
- (void)interactionSummaryMetricsWithQueryId:(unsigned long long)arg1;
- (void)eventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 queryId:(unsigned long long)arg4;
- (void)resolveEventNameRecordChanges:(id)arg1 client:(id)arg2 queryId:(unsigned long long)arg3;
- (void)eventNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
