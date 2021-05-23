/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICAddToWishListResponse, ICStoreRequestContext, NSString;

@interface ICAddToWishListRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    NSString *_buyParams;
    long long _storeItemID;
    NSString *_itemName;
    NSString *_itemKind;
    ICAddToWishListResponse *_response;
}

- (void)execute;
- (void)performWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 buyParams:(id)arg2 storeItemID:(long long)arg3 itemName:(id)arg4 itemKind:(id)arg5;
- (id)initWithRequestContext:(id)arg1 platformMetadataItem:(id)arg2;

@end
