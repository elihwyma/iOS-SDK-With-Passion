/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICSagaGetAccountStatusRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    _Bool _isEnabled;
    _Bool _canSubscribe;
    _Bool _isSubscriber;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end
