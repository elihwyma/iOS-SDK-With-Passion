/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@class _NACAVRoutingDiscoverySession;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NACEndpointObserver : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _NACAVRoutingDiscoverySession *_nacDiscoverySession;
}

+ (id)sharedObserver;

- (id)init;
- (void)fetchRouteForOriginIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidateDiscoverySession;

@end
