/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaApplicationBannerSyncResponse, ICStoreRequestContext;

@interface ICMediaApplicationBannerSyncRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    ICMediaApplicationBannerSyncResponse *_response;
    unsigned long long _fromRevision;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1 fromRevision:(unsigned long long)arg2;

@end
