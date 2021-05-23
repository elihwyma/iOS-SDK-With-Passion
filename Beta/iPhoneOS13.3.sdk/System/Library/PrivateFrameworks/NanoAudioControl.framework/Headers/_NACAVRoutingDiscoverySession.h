/*
 Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NACAVRoutingDiscoverySession : NSObject

{
    void *_discoverySession;
    void *_callbackToken;
    NSObject<OS_dispatch_group> *_initialFetchGroup;
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _initialFetchCompleted;
}

- (id)init;
- (void)dealloc;
- (void)fetchRouteForOriginIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
