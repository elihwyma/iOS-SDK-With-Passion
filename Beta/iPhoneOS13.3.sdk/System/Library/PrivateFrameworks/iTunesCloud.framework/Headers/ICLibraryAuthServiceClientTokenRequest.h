/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICLibraryAuthServiceClientTokenResponse, ICStoreRequestContext;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end
