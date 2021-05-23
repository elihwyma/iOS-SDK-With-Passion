/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVVideoComposition, NSDictionary, NSLock, NSString, PVEffectScheduler, PVTaskTokenPool, PVVideoCompositingContext;

@protocol OS_dispatch_queue;

@interface PVVideoCompositing : NSObject

{
    AVVideoComposition *_videoComposition;
    NSDictionary *_sourceAttributes;
    NSDictionary *_pixelBufferPoolAttributes;
    CDStruct_1b6d18a9 _videoCompositionDuration;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob>>> _inFlightRenderJobs;
    NSLock *_inFlightRenderJobsLock;
    unsigned int _frameCount;
    struct HGSynchronizable *_trackerLock;
    struct deque<int, std::__1::allocator<int>> _dropFrameTracker;
    int _windowedDropTotal;
    _Bool _droppedResolution;
    double _frameDuration;
    PVEffectScheduler *_effectScheduler;
    struct HGSynchronizable *_inPlaybackLock;
    _Bool _inPlayback;
    struct HGSynchronizable *_throttleLock;
    unsigned int _throttleRequestHandling;
    struct HGSynchronizable *_notificationStateLock;
    _Bool _hostAppIsShuttingDown;
    _Bool _didEnterBackground;
    struct HGSynchronizable *_perfStatsLock;
    struct PVPerfStats *_perfStats;
    _Bool _trackStats;
    HGRef_9706a068 _renderManager;
    NSObject<OS_dispatch_queue> *_refreshCompletionCallbackQueue;
    PVTaskTokenPool *_tokenPool;
    _Bool _thumbnailCompositing;
    _Bool _cancelsPendingRequests;
    unsigned int _minimumRequestCompletionTimeMS;
    PVVideoCompositingContext *videoCompositingContext;
    CDUnknownBlockType _refreshCompletionBlock;
}

@property (retain) PVVideoCompositingContext *videoCompositingContext;
@property (nonatomic) _Bool thumbnailCompositing;
@property (nonatomic) _Bool cancelsPendingRequests;
@property (copy, nonatomic) CDUnknownBlockType refreshCompletionBlock;
@property (nonatomic) unsigned int minimumRequestCompletionTimeMS;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *sourcePixelBufferAttributes;
@property (nonatomic, readonly) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (nonatomic, readonly) _Bool supportsWideColorSourceFrames;

+ (_Bool)flushOnFinalRelease;
+ (void)setFlushOnFinalRelease:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)setFrameDuration:(double)arg1;
- (void)renderContextChanged:(id)arg1;
- (void)startVideoCompositionRequest:(id)arg1;
- (void)cancelAllPendingVideoCompositionRequests;
- (double)numFrames;
- (void)signalScheduling:(CDStruct_1b6d18a9)arg1 playerRate:(float)arg2;
- (void)signalSchedulingResetSearch;
- (void)trackStats:(_Bool)arg1;
- (void)printAndClearStats;
- (void)didRecieveMemoryWarning:(id)arg1;
- (void)addRenderJobInFlight:(HGRef_e03d2d21)arg1;
- (void)addFrameStats:(struct FrameStats *)arg1;
- (_Bool)shouldDoLowPowerExport;
- (void)renderRequestFinished:(HGRef_e03d2d21)arg1;
- (void)setupTextureFactories;
- (void)setupEffectScheduler;
- (void)setInPlayback:(_Bool)arg1;
- (void)videoCompositionChanged:(id)arg1;
- (void)setColorSpacesFromDestinationBuffer:(id)arg1;
- (_Bool)inPlayback;
- (void)checkAndReportDropFrames:(struct FrameStats *)arg1 job:(HGRef_e03d2d21)arg2;
- (void)removeRenderJobInFlight:(HGRef_e03d2d21)arg1;
- (void)callRefreshCompletionBlock:(_Bool)arg1;
- (double)getTimeSinceLast:(struct FrameStats *)arg1;
- (id)getPreviousInstruction:(HGRef_e03d2d21)arg1;
- (double)windowedFPS;
- (double)averageStat:(int)arg1;
- (double)getLastStat:(int)arg1;
- (unsigned long long)taskResidentSize;

@end
