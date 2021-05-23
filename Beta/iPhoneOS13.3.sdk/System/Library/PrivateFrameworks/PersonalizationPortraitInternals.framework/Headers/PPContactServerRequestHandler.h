/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager;

@protocol PPContactClientProtocol;

@interface PPContactServerRequestHandler : NSObject

{
    id <PPContactClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
}

@property (copy, nonatomic) NSString *clientProcessName;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackDisambiguationResultWithChoicesIdentifiers:(id)arg1 chosenContactIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)contactNameRecordChangesForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactNameRecordChangesForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)contactNameRecordsForClient:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedContactsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
