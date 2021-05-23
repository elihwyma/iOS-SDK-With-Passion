/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSOperation.h>

@class ICMediaRedownloadRequest, MPStoreRedownloadProductResponse, NSError, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MPStoreRedownloadProductOperation : NSOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPStoreRedownloadProductResponse *_redownloadProductResponse;
    NSError *_responseError;
    _Bool _shouldUseStreamingRedownload;
    ICMediaRedownloadRequest *_redownloadRequest;
    _Bool _streamingRental;
    NSString *_buyParameters;
    unsigned long long _endpointType;
    NSString *_requestingBundleIdentifier;
    NSString *_requestingBundleVersion;
}

@property (copy, nonatomic, readonly) NSString *buyParameters;
@property (nonatomic, readonly) unsigned long long endpointType;
@property (nonatomic, readonly) MPStoreRedownloadProductResponse *redownloadProductResponse;
@property (copy, nonatomic, readonly) NSError *responseError;
@property (nonatomic, getter=isStreamingRental) _Bool streamingRental;
@property (copy, nonatomic) NSString *requestingBundleIdentifier;
@property (copy, nonatomic) NSString *requestingBundleVersion;

- (id)init;
- (void)cancel;
- (void)main;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2;
- (id)initWithBuyParameters:(id)arg1 endpointType:(unsigned long long)arg2 shouldUseStreamingRedownload:(_Bool)arg3;

@end
