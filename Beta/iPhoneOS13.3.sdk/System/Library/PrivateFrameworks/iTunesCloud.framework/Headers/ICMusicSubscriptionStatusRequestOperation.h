/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICMusicSubscriptionStatusRequest;

@interface ICMusicSubscriptionStatusRequestOperation : ICAsyncOperation

{
    _Bool _allowsFuseHeaderEnrichment;
    ICMusicSubscriptionStatusRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic, readonly) ICMusicSubscriptionStatusRequest *request;
@property (nonatomic) _Bool allowsFuseHeaderEnrichment;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (id)initWithRequest:(id)arg1;
- (void)_cacheAccountEligibilityWithStatus:(id)arg1 requestContext:(id)arg2;
- (_Bool)_carrierBundleStatusIsValidForCachedSubscriptionStatus:(id)arg1;
- (void)_performSubscriptionStatusURLRequestWithRequestContext:(id)arg1 subscriptionStatusURL:(id)arg2 allowsAuthentication:(_Bool)arg3 maximumRetryCount:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;

@end
