/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICMusicSubscriptionCarrierBundlingEligibilityOperation : ICAsyncOperation

{
    NSString *_cellularProviderName;
    NSString *_mobileSubscriberCountryCode;
    NSString *_mobileSubscriberNetworkCode;
    NSString *_phoneNumber;
    NSString *_IMEI;
    _Bool _deepLink;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic, readonly) ICStoreRequestContext *requestContext;
@property (nonatomic, getter=isDeepLink) _Bool deepLink;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (id)initWithRequestContext:(id)arg1;
- (void)_sendEnrichmentRequestWithURL:(id)arg1 preflightResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendSilentSMSRequestWithMessage:(id)arg1 number:(id)arg2 preflightResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_sendPreflightRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_finishEnrichmentWithBodyDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_newDefaultRequestBodyDictionary;
- (id)_newDefaultRequestBodyDictionaryWithResponseCode:(long long)arg1 error:(id)arg2;

@end
