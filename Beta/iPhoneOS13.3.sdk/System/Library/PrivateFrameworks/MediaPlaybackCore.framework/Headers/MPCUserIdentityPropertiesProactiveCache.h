/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSCountedSet;

@protocol OS_dispatch_queue;

@interface MPCUserIdentityPropertiesProactiveCache : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSCountedSet *_proactiveCachingIdentities;
}

+ (id)sharedCache;

- (id)_init;
- (void)_userIdentityStoreDidChangeNotification:(id)arg1;
- (void)endProactiveCachingForUserIdentity:(id)arg1;
- (void)beginProactiveCachingForUserIdentity:(id)arg1;
- (void)_proactivelyCacheUserIdentity:(id)arg1;

@end
