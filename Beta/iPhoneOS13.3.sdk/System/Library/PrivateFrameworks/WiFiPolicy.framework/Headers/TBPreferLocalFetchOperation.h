/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSOperation.h>

@class NSArray, NSDate, NSOperationQueue, TBPreferLocalFetchDataSource;

@protocol TBFetchRequest, TBFetchResponse;

@interface TBPreferLocalFetchOperation : NSOperation

{
    _Bool _finished;
    NSDate *_start;
    id <TBFetchRequest> _fetchRequest;
    id <TBFetchRequest> _fetchRequestCopy;
    id <TBFetchResponse> _response;
    TBPreferLocalFetchDataSource *_dataSource;
    NSOperationQueue *_fetchQueue;
    NSArray *_remoteKeysToFetch;
    NSArray *_satisfiedLocalKeys;
}

@property (retain, nonatomic) id <TBFetchRequest> fetchRequest;
@property (retain, nonatomic) id <TBFetchRequest> fetchRequestCopy;
@property (retain, nonatomic) id <TBFetchResponse> response;
@property (retain, nonatomic) TBPreferLocalFetchDataSource *dataSource;
@property (retain, nonatomic) NSOperationQueue *fetchQueue;
@property (retain, nonatomic) NSArray *remoteKeysToFetch;
@property (retain, nonatomic) NSArray *satisfiedLocalKeys;

- (id)name;
- (void)start;
- (_Bool)isFinished;
- (_Bool)isReady;
- (void)finish;
- (id)initWithFetchRequest:(id)arg1 dataSource:(id)arg2 fetchQueue:(id)arg3;
- (void)_fetchLocal;
- (_Bool)_doResults:(id)arg1 satisfyFetchRequest:(id)arg2 keysToFetchRemotely:(id *)arg3 satisfiedKeys:(id *)arg4;
- (void)_captureCacheEventWithStatus:(unsigned long long)arg1 userInfo:(id)arg2 error:(id)arg3 type:(unsigned long long)arg4;
- (void)_fetchRemote;
- (void)finishAndCallCompletionWithResponse:(id)arg1;
- (id)_tileItemsFromTileKeys:(id)arg1;
- (void)_mergeLocalAndRemoteResults:(id)arg1;

@end
