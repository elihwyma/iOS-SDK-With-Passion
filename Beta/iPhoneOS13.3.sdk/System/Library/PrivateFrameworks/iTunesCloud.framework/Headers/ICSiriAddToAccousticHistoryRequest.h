/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSString;

@interface ICSiriAddToAccousticHistoryRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    long long _storeItemID;
    NSString *_affiliateIdentifier;
}

- (void)execute;
- (id)initWithRequestContext:(id)arg1 storeItemID:(long long)arg2 affiliateIdentifier:(id)arg3;

@end
