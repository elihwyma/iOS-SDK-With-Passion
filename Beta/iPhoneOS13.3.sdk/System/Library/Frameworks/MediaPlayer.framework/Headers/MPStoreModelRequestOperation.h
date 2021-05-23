/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelResponse, MPStoreModelRequest, NSObject, NSOperation;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MPStoreModelRequestOperation : MPAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSOperation *_childOperation;
    MPModelResponse *_response;
    double _startExecutingTimeStamp;
    NSObject<OS_dispatch_source> *_timeoutTimerSource;
    MPStoreModelRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (nonatomic, readonly) double remainingTimeInterval;
@property (copy, nonatomic) MPStoreModelRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)dispatchAsync:(CDUnknownBlockType)arg1;
- (id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id *)arg2;
- (void)produceResponseWithLoadedOutput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)adjustTimeoutInterval:(double)arg1;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)assertRunningInAccessQueue;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (void)_executeItemMetadataLoadForRequestedItemIdentifiers:(id)arg1 reason:(unsigned long long)arg2 requestContext:(id)arg3;
- (void)_executeURLLoadWithRequest:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3;
- (void)_executeURLLoadWithRequests:(id)arg1 storeBagDictionary:(id)arg2 requestContext:(id)arg3;
- (void)_handleTimeout;
- (void)_tearDownTimeoutTimerSource;

@end
