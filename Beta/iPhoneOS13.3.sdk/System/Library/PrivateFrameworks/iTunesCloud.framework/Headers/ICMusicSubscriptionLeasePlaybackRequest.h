/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

#import <iTunesCloud/Swift-Protocol.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionLeasePlaybackRequest : NSObject <Swift>

{
    _Bool _shouldPreventLeaseAcquisition;
    _Bool _shouldRequireLeaseAcquisition;
    NSString *_assetSourceStorefrontID;
    ICStoreRequestContext *_requestContext;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
    NSString *_cloudUniversalLibraryID;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (copy, nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic) _Bool shouldPreventLeaseAcquisition;
@property (nonatomic) _Bool shouldRequireLeaseAcquisition;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequestContext:(id)arg1;

@end
