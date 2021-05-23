/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTInMemoryResourceCache, AVTUIEnvironment;

@protocol AVTImageCache, AVTTaskScheduler, AVTUILogger, OS_dispatch_queue;

@interface AVTPresetResourceLoader : NSObject

{
    AVTUIEnvironment *_environment;
    AVTInMemoryResourceCache *_presetCache;
    id <AVTImageCache> _inMemoryImageCache;
    id <AVTTaskScheduler> _renderingScheduler;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id <AVTUILogger> _logger;
}

@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic, readonly) AVTInMemoryResourceCache *presetCache;
@property (nonatomic, readonly) id <AVTImageCache> inMemoryImageCache;
@property (nonatomic, readonly) id <AVTTaskScheduler> renderingScheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) id <AVTUILogger> logger;

- (id)preLoadResourcesForSectionItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)preLoadResourcesForPresetResourcesProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPresetCache:(id)arg1 renderingScheduler:(id)arg2 callbackQueue:(id)arg3 environment:(id)arg4;
- (void)startSectionItemPreloadingTask:(id)arg1;
- (void)performSectionItemPreloadingTask:(id)arg1;
- (void)performPresetLoadingForPresetResources:(id)arg1 task:(id)arg2;
- (void)startPresetPreloadingTask:(id)arg1;
- (void)performPresetResourcesPreloadingTask:(id)arg1;
- (id)initWithEnvironment:(id)arg1 renderingScheduler:(id)arg2 callbackQueue:(id)arg3;

@end
