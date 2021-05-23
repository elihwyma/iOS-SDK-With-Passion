/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    _Bool _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    long long _requestType;
    CDUnknownBlockType _willBeginExecutionHandler;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
    unsigned long long _storeCloudID;
    long long _storeSubscriptionAdamID;
    long long _storePurchasedAdamID;
    NSString *_cloudUniversalLibraryID;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback;
@property (nonatomic) long long requestType;
@property (copy, nonatomic) CDUnknownBlockType willBeginExecutionHandler;
@property (copy, nonatomic) ICStoreRequestContext *requestContext;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) long long storePurchasedAdamID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;

- (id)init;
- (void)cancel;
- (void)start;

@end
