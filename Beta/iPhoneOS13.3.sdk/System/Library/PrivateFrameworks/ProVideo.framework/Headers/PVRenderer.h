/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <ProVideo/PVRendererBase.h>

@class NSDate, PVRenderEffectLoader;

@interface PVRenderer : PVRendererBase

{
    struct HGSynchronizable *_cvPoolsLock;
    struct vector<HGRef<PVCVPixelBufferPool>, std::__1::allocator<HGRef<PVCVPixelBufferPool>>> _cvPools;
    _Bool _enableDestinationPool;
    struct HGRef<HGCVPixelBufferPool> _destinationBufferPool;
    HGRef_9706a068 _renderManager;
    PVRenderEffectLoader *_effectLoader;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock>> _dateLock;
    NSDate *_lastStatsLogDateTime;
    NSDate *_lastTextureCacheFlushDate;
}

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (id).cxx_construct;
- (CDStruct_1b6d18a9)frameDuration;
- (void)startRenderRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)renderJobFinished:(HGRef_e03d2d21)arg1;
- (void)cleanupMemoryCaches;
- (void)_configureDefaultPoolPolicy;
- (void)_configureWorkingColorSpace;
- (void)_statsLogCheck;
- (HGRef_55a77cc8)hgCVPixelBufferFromCVPoolForSize:(struct CGSize)arg1 withFormat:(unsigned int)arg2;
- (void)loadInstructionGraphEffects:(id)arg1;
- (unsigned int)outputCVPixelBufferFormat;
- (HGRef_0776e7a8)getDestinationBuffer:(struct CGSize)arg1 cvPixelBufferFormat:(unsigned int)arg2;

@end
