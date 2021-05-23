/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString, PVLivePlayerRenderLink, PVLivePlayerThermalThrottlingPolicy, PVRenderer, PVTaskTokenPool;

@protocol PVLivePlayerDelegate;

@interface PVLivePlayer : NSObject

{
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock>> _lock;
    struct map<unsigned int, id<PVLivePlayerSource>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, id<PVLivePlayerSource>>>> _sourceMap;
    PVRenderer *_renderer;
    id <PVLivePlayerDelegate> _weakDelegate;
    _Atomic unsigned int _queueSize;
    _Atomic int _playerStatus;
    PVLivePlayer *_primaryPlayer;
    struct HGRef<HGRenderQueue> _playerQueue;
    unsigned int _playerQueueUnitCount;
    unsigned int _activeRenderLinkJobCount;
    CDStruct_1b6d18a9 _renderTime;
    CDStruct_1b6d18a9 _previousSignalTime;
    _Bool _previousSignalTimeValid;
    double _lastCompletedHostTime;
    _Atomic unsigned int _frameCount;
    NSString *_name;
    _Atomic unsigned int _parentCode;
    PVTaskTokenPool *_tokenPool;
    struct unique_ptr<PerfTimer, std::__1::default_delete<PerfTimer>> _statLogTimer;
    struct unique_ptr<PVGCDLock, std::__1::default_delete<PVGCDLock>> _perfStatsLock;
    struct unique_ptr<PVPerfStats, std::__1::default_delete<PVPerfStats>> _perfStats;
    _Bool _trackStats;
    _Bool _lowerGCDPriority;
    _Bool _lowerGPUPriority;
    _Bool _bypassRenderLink;
    PVLivePlayerRenderLink *_renderLink;
    PVLivePlayerThermalThrottlingPolicy *_thermalThrottlingPolicy;
}

@property (retain, nonatomic) PVLivePlayerRenderLink *renderLink;
@property (nonatomic, readonly) int status;
@property (retain, nonatomic) PVLivePlayerThermalThrottlingPolicy *thermalThrottlingPolicy;
@property (nonatomic) unsigned int queueSize;
@property (nonatomic) _Bool lowerGCDPriority;
@property (nonatomic) _Bool lowerGPUPriority;
@property (nonatomic) _Bool bypassRenderLink;
@property (nonatomic, readonly) CDStruct_1b6d18a9 renderTime;

- (void)dealloc;
- (void)setName:(id)arg1;
- (void)stop;
- (void)start;
- (id).cxx_construct;
- (void)setStatus:(int)arg1;
- (void)flush;
- (void)shutdown;
- (void)setParentCode:(unsigned int)arg1;
- (void)trackStats:(_Bool)arg1;
- (void)printAndClearStats:(_Bool)arg1;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2;
- (void)setSource:(id)arg1 inputID:(unsigned int)arg2;
- (void)resetRenderTime;
- (void)renderLinkSignalSkipped;
- (void)renderLinkSignal:(CDStruct_1b6d18a9)arg1;
- (void)renderLinkSignalDropped;
- (void)_statsLogCheck;
- (void)updateRenderQueueUnits;
- (unsigned long long)getPackedFamilyCode:(unsigned int)arg1;
- (void)_renderLinkSignal:(CDStruct_1b6d18a9)arg1;
- (_Bool)_dropFrameForSaturatedPrimaryPlayer;
- (_Bool)_dropFrameForFullQueue;
- (id)getTaskToken;
- (void)_notifyDelegateOfDroppedFrame:(int)arg1;
- (unsigned int)_throttledQueueSize_NoLock;
- (id)readSourceFrameSets:(double)arg1;
- (void)renderLinkJobFinished:(HGRef_b5f7fda3)arg1;
- (_Bool)testOutOfOrderCompletion:(HGRef_b5f7fda3)arg1;
- (void)addStats:(struct FrameStats *)arg1;
- (void)bypassRenderLink:(HGRef_b5f7fda3)arg1;
- (_Bool)throttledBypassRenderLink;
- (id)playerSources;
- (void)setPrimaryPlayer:(id)arg1;
- (void)handleRenderLinkJob:(HGRef_b5f7fda3)arg1;

@end
