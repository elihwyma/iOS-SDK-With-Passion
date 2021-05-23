/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVRenderEffectLoader : NSObject

{
    struct deque<PVLoadedEffectItem, std::__1::allocator<PVLoadedEffectItem>> *_loadedEffects;
    struct HGSynchronizable *_lock;
    _Bool _flushesOnEffectStackChanges;
    float _unusedEffectTimeout;
}

@property (nonatomic) float unusedEffectTimeout;

- (id)init;
- (void)dealloc;
- (void)unloadEffects;
- (void)_removeUnusedEffects_noLock:(id)arg1;
- (void)_loadEffects_noLock:(id)arg1;
- (void)_removeTimedOutEffects_noLock;
- (void)loadEffectsForGraphs:(id)arg1 loadContext:(HGRef_6bae45d3)arg2;
- (void)ageOutEffects;

@end
