/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaRedownloadResponse, ICStoreRequestContext, ICStoreURLRequest, NSDictionary, NSString;

@interface ICMediaRedownloadRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    ICMediaRedownloadResponse *_redownloadResponse;
    ICStoreURLRequest *_storeURLRequest;
    _Bool _playbackRequest;
    _Bool _streamingRental;
    _Bool _usePrioritizedURLSession;
    _Bool _includeKeybagSyncData;
    _Bool _includeSubscriptionKeybagSyncData;
    NSDictionary *_redownloadParameters;
    NSString *_requestURLBagKey;
}

@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) NSDictionary *redownloadParameters;
@property (copy, nonatomic) NSString *requestURLBagKey;
@property (nonatomic) _Bool includeKeybagSyncData;
@property (nonatomic) _Bool includeSubscriptionKeybagSyncData;
@property (nonatomic, getter=isPlaybackRequest) _Bool playbackRequest;
@property (nonatomic, getter=isStreamingRental) _Bool streamingRental;
@property (nonatomic) _Bool usePrioritizedURLSession;

- (id)init;
- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 redownloadParametersString:(id)arg2;
- (id)initWithRequestContext:(id)arg1 redownloadParameters:(id)arg2;
- (void)_executeWithActiveICloudAccountProperties:(id)arg1;

@end
