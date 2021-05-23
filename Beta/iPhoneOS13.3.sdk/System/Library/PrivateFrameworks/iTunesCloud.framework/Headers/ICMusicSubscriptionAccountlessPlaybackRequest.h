/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionAccountlessPlaybackRequest : NSObject

{
    NSString *_assetSourceStorefrontID;
    ICStoreRequestContext *_requestContext;
    long long _qualityOfService;
    long long _storeSubscriptionAdamID;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (copy, nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, readonly) long long storeSubscriptionAdamID;

- (id)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 storeSubscriptionAdamID:(long long)arg2;

@end
