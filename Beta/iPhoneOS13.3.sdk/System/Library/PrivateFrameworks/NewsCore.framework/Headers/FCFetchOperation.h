/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCOperation.h>

@class FCFetchOperationResult, NSObject;

@protocol OS_dispatch_queue;

@interface FCFetchOperation : FCOperation

{
    FCFetchOperationResult *_result;
    _Bool _wifiOnly;
    _Bool _shouldFailOnMissingObjects;
    _Bool _canSendFetchCompletionSynchronously;
    unsigned long long _cachePolicy;
    double _maximumCachedAge;
    CDUnknownBlockType _fetchCompletionBlock;
    NSObject<OS_dispatch_queue> *_fetchCompletionQueue;
}

@property _Bool wifiOnly;
@property unsigned long long cachePolicy;
@property double maximumCachedAge;
@property _Bool shouldFailOnMissingObjects;
@property (copy) CDUnknownBlockType fetchCompletionBlock;
@property (retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue;
@property _Bool canSendFetchCompletionSynchronously;
@property (readonly) FCFetchOperationResult *result;

- (id)init;
- (void)cancel;
- (void)finishFromEarlyCancellation;
- (void)operationDidFinishWithError:(id)arg1;
- (void)finishExecutingWithFetchedObject:(id)arg1;
- (void)finishExecutingWithResult:(id)arg1;
- (void)finishExecutingWithStatus:(unsigned long long)arg1;
- (void)finishExecutingWithError:(id)arg1;
- (void)takeInputsFromFetchOperation:(id)arg1;

@end
