/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ASReachabilityStatusCache : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableDictionary *_cache;
}

- (id)init;
- (id)statusForDestination:(id)arg1;
- (id)statusesForDestinations:(id)arg1;
- (void)addStatusesByDestination:(id)arg1;
- (void)setStatus:(id)arg1 forDestination:(id)arg2;

@end
