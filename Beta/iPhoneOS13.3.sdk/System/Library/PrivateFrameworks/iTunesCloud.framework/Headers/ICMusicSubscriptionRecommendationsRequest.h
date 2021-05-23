/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, NSArray;

@interface ICMusicSubscriptionRecommendationsRequest : ICRequestOperation

{
    ICStoreRequestContext *_requestContext;
    long long _seedItemID;
    _Bool _isLibraryID;
    long long _maxResultCount;
    NSArray *_resultsList;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 seedItemID:(long long)arg2 isLibraryID:(_Bool)arg3 maxResultCount:(long long)arg4;

@end
