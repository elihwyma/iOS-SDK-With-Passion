/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSLock, NSString, PVVideoCompositingContext;

@interface PVRendererBase : NSObject

{
    struct atomic<unsigned int> _frameCount;
    struct vector<HGRef<PVRenderJob>, std::__1::allocator<HGRef<PVRenderJob>>> _inFlightRenderJobs;
    NSLock *_inFlightRenderJobsLock;
    struct HGSynchronizable *_perfStatsLock;
    struct PVPerfStats *_perfStats;
    _Bool _trackStats;
    PVVideoCompositingContext *_compositingContext;
    NSString *_name;
}

@property (retain, nonatomic) PVVideoCompositingContext *compositingContext;
@property (retain, nonatomic) NSString *name;

+ (id)getEAGLShareGroup;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id).cxx_construct;
- (void)trackStats:(_Bool)arg1;
- (void)printAndClearStats:(_Bool)arg1;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (void)didRecieveMemoryWarning:(id)arg1;
- (void)cancelAllPendingRequests;
- (void)addRenderJobInFlight:(HGRef_e03d2d21)arg1;
- (void)addFrameStats:(struct FrameStats *)arg1;
- (void)cleanupMemoryCaches;
- (HGRef_e03d2d21)startJobForDelegate:(id)arg1 frameStats:(struct FrameStats)arg2;
- (struct FrameStats)newFrameStats;

@end
