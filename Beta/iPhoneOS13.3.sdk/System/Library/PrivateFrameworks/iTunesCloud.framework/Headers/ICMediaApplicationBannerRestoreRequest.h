/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaApplicationBannerSyncResponse, ICStoreRequestContext;

@interface ICMediaApplicationBannerRestoreRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    ICMediaApplicationBannerSyncResponse *_response;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end
