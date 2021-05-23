/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICLibraryAuthServiceBulkClientTokenResponse, ICStoreRequestContext, NSSet;

@interface ICLibraryAuthServiceBulkClientTokenRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceBulkClientTokenResponse *_response;
    NSSet *_accountDSIDs;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1 accountDSIDs:(id)arg2;

@end
