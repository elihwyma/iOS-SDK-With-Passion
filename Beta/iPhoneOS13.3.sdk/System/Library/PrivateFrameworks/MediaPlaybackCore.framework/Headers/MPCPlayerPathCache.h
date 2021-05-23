/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MPCPlayerPathCache : NSObject

{
    NSMutableDictionary *_playerPathResolutions;
    NSMutableDictionary *_playerPathObservers;
    NSMutableDictionary *_endpointObservers;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *playerPathResolutions;
@property (nonatomic, readonly) NSMutableDictionary *playerPathObservers;
@property (nonatomic, readonly) NSMutableDictionary *endpointObservers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;

+ (id)sharedCache;

- (void)dealloc;
- (id)_init;
- (id)observationTokenDescriptionForPlayerPath:(id)arg1;
- (id)resolvedPlayerPathForPlayerPath:(id)arg1;
- (void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void *)arg2;
- (void)_onQueue_registerForEndpointChangeWithUnresolvedPlayerPath:(id)arg1;

@end
