/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCRemoteVideoManager : NSObject

{
    NSMutableDictionary *_queuesForStreamTokenDict;
    NSMutableDictionary *_stateCacheForStreamTokenDict;
    struct _opaque_pthread_mutex_t _remoteVideoLock;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)registerBlocksForService;
- (void)remoteVideoDidDegrade:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidSuspend:(_Bool)arg1 streamToken:(long long)arg2;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)connectionDidChangeWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 streamToken:(long long)arg3;
- (void)remoteMediaDidStall:(_Bool)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)remoteVideoDidPause:(_Bool)arg1 streamToken:(long long)arg2;
- (void)cleanupDictionaries;
- (id)newQueueForStreamToken:(long long)arg1 videoMode:(int)arg2 imageQueueProtected:(_Bool)arg3;
- (id)getQueueForStreamToken:(unsigned int)arg1 videoMode:(int)arg2;
- (_Bool)doesQueueExistForStreamToken:(id)arg1;
- (unsigned int)slotForStreamToken:(long long)arg1 videoMode:(int)arg2;
- (void)notifyCachedStateForStreamToken:(id)arg1;

@end
