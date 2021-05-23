/*
 Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

#import <ATSessionTask.h>

@class ATAssetLinkController, NSMutableOrderedSet, NSMutableSet, NSObject, NSPredicate, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ATAssetSessionTask : ATSessionTask

{
    NSMutableOrderedSet *_remainingAssets;
    NSMutableSet *_failedAssets;
    NSMutableSet *_currentAssets;
    NSString *_dataClass;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _cancelAtStart;
    double _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    _Bool _waitingForRetry;
    _Bool _retryUntilFinished;
    NSPredicate *_filterPredicate;
    CDUnknownBlockType _shouldRetryAssetBlock;
    ATAssetLinkController *_assetLinkController;
    unsigned long long _failedAssetsCount;
}

@property (copy, nonatomic, readonly) NSString *dataClass;
@property (copy, nonatomic) NSPredicate *filterPredicate;
@property (copy, nonatomic) CDUnknownBlockType shouldRetryAssetBlock;
@property (retain, nonatomic) ATAssetLinkController *assetLinkController;
@property (nonatomic) _Bool retryUntilFinished;
@property (nonatomic, readonly) unsigned long long failedAssetsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)cancel;
- (void)resume;
- (void)start;
- (void)suspend;
- (id)remainingAssets;
- (id)sessionGroupingKey;
- (id)initWithAssets:(id)arg1;
- (void)assetLinkController:(id)arg1 didFinishAsset:(id)arg2;
- (void)assetLinkController:(id)arg1 didUpdateAsset:(id)arg2;
- (id)initWithDataClass:(id)arg1;
- (void)_finishAsset:(id)arg1 withError:(id)arg2;
- (void)cancelAllAssets;

@end
