/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionRequest : ICRequestOperation

{
    ICStoreRequestContext *_storeRequestContext;
    long long _requestType;
    _Bool _requestingOfflineSlot;
}

- (void)execute;
- (id)_bagKeyForRequestType:(long long)arg1;
- (id)initWithStoreRequestContext:(id)arg1 requestType:(long long)arg2 requestingOfflineSlot:(_Bool)arg3;

@end
