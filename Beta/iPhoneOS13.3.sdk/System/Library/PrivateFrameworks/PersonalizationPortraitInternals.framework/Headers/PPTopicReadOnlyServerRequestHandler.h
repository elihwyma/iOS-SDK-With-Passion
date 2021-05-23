/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <Foundation/NSObject.h>

@class NSString, PPXPCServerPipelinedBatchQueryManager, _PASBundleIdResolver;

@protocol PPTopicClientProtocol;

@interface PPTopicReadOnlyServerRequestHandler : NSObject

{
    id <PPTopicClientProtocol> _clientProxy;
    PPXPCServerPipelinedBatchQueryManager *_queryManager;
    NSString *_clientProcessName;
    _PASBundleIdResolver *_bundleIdResolver;
}

@property (copy, nonatomic) NSString *clientProcessName;
@property (retain, nonatomic) _PASBundleIdResolver *bundleIdResolver;

+ (id)filterQIDDictionary:(id)arg1 withWhitelistOfProcess:(id)arg2;
+ (id)filterTopicRecordsNotInWhitelist:(id)arg1 withWhitelistOfProcess:(id)arg2;
+ (id)filterScoredTopicsNotInWhitelist:(id)arg1 withWhitelistOfProcess:(id)arg2;

- (id)init;
- (void)registerFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unmapMappedTopicIdentifier:(id)arg1 mappingIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scoresForTopicMapping:(id)arg1 query:(id)arg2 queryId:(unsigned long long)arg3;
- (void)topicRecordsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)rankedTopicsWithQuery:(id)arg1 queryId:(unsigned long long)arg2;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
