/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PVEffectScheduler : NSObject

{
    struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction>>> _effectSchedule;
    struct set<HGRef<LoadableInstruction>, LoadableInstructionCompare, std::__1::allocator<HGRef<LoadableInstruction>>> _previousScheduleToUnload;
    struct __tree_const_iterator<HGRef<LoadableInstruction>, std::__1::__tree_node<HGRef<LoadableInstruction>, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__ptr_;
    } _lastLoadedEffectSetIterator;
    CDStruct_1b6d18a9 _endTime;
    _Bool _loadedFinalInstructions;
    _Bool _isExporting;
    NSObject<OS_dispatch_queue> *_loadQueue;
    _Bool _isScheduling;
    struct HGSynchronizable *_effectScheduleLock;
    HGRef_6bae45d3 _effectLoadRenderContext;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)setIsExporting:(_Bool)arg1;
- (void)releaseAllUnusedEffects:(CDStruct_1b6d18a9)arg1;
- (_Bool)previousLoadedIteratorIsLastInList;
- (void)unloadInstructionFromPreviousSchedule;
- (void)resetSchedule:(id)arg1;
- (void)resetSearchPoint;
- (void)setEffectLoadingRenderContext:(HGRef_6bae45d3)arg1;
- (void)loadEffects:(CDStruct_1b6d18a9)arg1 playerRate:(float)arg2;
- (_Bool)loadTimeIsNearEnd:(CDStruct_1b6d18a9)arg1;

@end
