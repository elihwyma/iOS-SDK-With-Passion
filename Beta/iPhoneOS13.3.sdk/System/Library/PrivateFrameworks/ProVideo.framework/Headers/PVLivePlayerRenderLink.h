/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class PVLivePlayer;

@interface PVLivePlayerRenderLink : NSObject

{
    CDStruct_1b6d18a9 _lastTime;
    unsigned int _throttledFPS;
    struct HGSynchronizable *_lock;
    PVLivePlayer *_player;
}

- (id)init;
- (void)dealloc;
- (void)teardown;
- (void)rebuild;
- (unsigned int)_throttledRenderLinkFPS_NoLock;
- (unsigned int)throttledFPS;
- (_Bool)skipThrottledRenderLinkTime:(CDStruct_1b6d18a9)arg1;
- (void)registerWithPlayer:(id)arg1;
- (_Bool)setThrottledFPS:(unsigned int)arg1;
- (unsigned int)thermalPolicyThrottledFPS;
- (void)signalPlayer:(CDStruct_1b6d18a9)arg1;
- (void)signalDroppedRenderLink;

@end
