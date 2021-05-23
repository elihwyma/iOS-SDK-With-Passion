/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    _Bool _includeKeybagSyncData;
    id _parsedResponse;
}

- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(_Bool)arg3;
- (id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(_Bool)arg3;

@end
