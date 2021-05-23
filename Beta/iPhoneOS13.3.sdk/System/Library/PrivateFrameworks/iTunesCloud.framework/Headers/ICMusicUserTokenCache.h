/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface ICMusicUserTokenCache : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSMutableDictionary *_cachedMusicUserTokens;
}

+ (id)sharedCache;
+ (void)_getCacheKeyForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)_decodeDeveloperTokenPart:(id)arg1;

- (void)dealloc;
- (id)_init;
- (void)_persistCache;
- (void)_loadPersistedCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)getCachedMusicUserTokenForDeveloperToken:(id)arg1 requestContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCachedMusicUserToken:(id)arg1 forDeveloperToken:(id)arg2 requestContext:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleMusicUserTokensDidChangeDistributedNotification:(id)arg1;
- (void)_postLocalChangeNotification;

@end
