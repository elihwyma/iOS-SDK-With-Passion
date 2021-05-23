/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class FCFetchCoordinator, FCThreadSafeMutableSet, NFLFeedSettings, NSMutableDictionary, NSOperationQueue, NSString;

@protocol NFLRankedLayoutSourceDelegate, OS_dispatch_queue;

@interface NFLRankedLayoutSource : NSObject

{
    id <NFLRankedLayoutSourceDelegate> _delegate;
    NFLFeedSettings *_feedSettings;
    FCFetchCoordinator *_fetchCoordinator;
    NSMutableDictionary *_treesByTileInfo;
    FCThreadSafeMutableSet *_fulfilledRequests;
    NSObject<OS_dispatch_queue> *_accessQueue;
    double _tileProminenceScoreBalanceValue;
    long long _qualityOfService;
    NSOperationQueue *_operationQueue;
}

@property (copy, nonatomic) NFLFeedSettings *feedSettings;
@property (retain, nonatomic) FCFetchCoordinator *fetchCoordinator;
@property (retain, nonatomic) NSMutableDictionary *treesByTileInfo;
@property (retain, nonatomic) FCThreadSafeMutableSet *fulfilledRequests;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) double tileProminenceScoreBalanceValue;
@property (nonatomic) long long qualityOfService;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (weak) id <NFLRankedLayoutSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)fetchCoordinator:(id)arg1 filterKeysToFetch:(id)arg2 isFirstAttempt:(_Bool)arg3 context:(id)arg4;
- (id)fetchCoordinator:(id)arg1 fetchOperationForKeys:(id)arg2 context:(id)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5;
- (void)fetchCoordinator:(id)arg1 addFetchOperation:(id)arg2 context:(id)arg3;
- (id)initWithFeedSettings:(id)arg1 qualityOfService:(long long)arg2;
- (void)rankedLayoutsForRequests:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
