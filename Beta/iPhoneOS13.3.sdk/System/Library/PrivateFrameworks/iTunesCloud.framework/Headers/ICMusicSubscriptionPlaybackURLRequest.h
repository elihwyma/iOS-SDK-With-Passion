/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICStoreURLRequest.h>

@class NSData, NSString;

@interface ICMusicSubscriptionPlaybackURLRequest : ICStoreURLRequest

{
    _Bool _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    NSData *_certificateData;
    NSString *_cloudUniversalLibraryID;
    long long _requestType;
    unsigned long long _storeCloudID;
    long long _storePurchasedAdamID;
    long long _storeSubscriptionAdamID;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID;
@property (copy, nonatomic) NSData *certificateData;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID;
@property (nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback;
@property (nonatomic) long long requestType;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID;

+ (_Bool)requiresCertificateDataForRequestType:(long long)arg1;

- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
