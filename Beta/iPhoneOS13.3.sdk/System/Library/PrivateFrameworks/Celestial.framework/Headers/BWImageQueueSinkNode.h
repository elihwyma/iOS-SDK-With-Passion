/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWSinkNode.h>

@class CAContext, NSMutableArray, NSObject;

@protocol BWImageQueueSinkNodePreviewTapDelegate, OS_dispatch_queue, OS_os_transaction;

@interface BWImageQueueSinkNode : BWSinkNode

{
    unsigned int _imageQueueCapacity;
    unsigned int _imageQueueWidth;
    unsigned int _imageQueueHeight;
    unsigned int _imageQueueRequiredFreeSlots;
    struct _CAImageQueue *_imageQueue;
    unsigned int _imageQueueSlot;
    unsigned long long _imageQueueCurrentFreeSlots;
    int _syncStrategy;
    _Bool _resetPreviewSynchronizerOnNextFrame;
    struct OpaqueBWPreviewSynchronizer *_previewSynchronizer;
    double _lastFramePTS;
    double _lastDisplayTime;
    double _lateFrameIntervalStartPTS;
    double _previousFrameDuration;
    unsigned long long _framesSinceLastHarmonicCompensation;
    id <BWImageQueueSinkNodePreviewTapDelegate> _previewTapDelegate;
    unsigned long long _numFramesReceived;
    NSObject<OS_os_transaction> *_holdingBuffersForClientAssertion;
    NSMutableArray *_sharedSurfaces;
    unsigned long long *_sharedBufferIDs;
    unsigned long long _sharedSurfaceCount;
    _Bool _useGlobalIOSurfaces;
    struct OpaqueFigSimpleMutex *_surfaceRegistrationMutex;
    NSMutableArray *_bufferIDsInQueue;
    struct _EnqueuedBufferContext **_enqueuedBufferContexts;
    unsigned long long _enqueuedBufferContextCount;
    NSMutableArray *_previewPTSHistory;
    struct OpaqueFigSimpleMutex *_previewPTSHistoryMutex;
    NSObject<OS_dispatch_queue> *_previewPTSHistoryQueue;
    CDStruct_1b6d18a9 _firstFramePTS;
    long long _firstFrameHostTime;
    _Bool _didCallFirstFrameAtHostTimeCallback;
    _Bool _didCallFirstFrameCallback;
    _Bool _packed10BitPixelFormatSupported;
    _Bool _fenceSupportEnabled;
    _Bool _fencePortGenerationIDWillChange;
    int _framesSinceLastFenceIDWillChange;
    int _framesSinceLastFence;
    long long _lastFencedGenerationID;
    int _savedSyncStrategy;
    CAContext *_imageQueueContext;
}

@property (nonatomic, readonly) struct _CAImageQueue *imageQueue;
@property (nonatomic, readonly) unsigned int imageQueueSlot;
@property (nonatomic) id <BWImageQueueSinkNodePreviewTapDelegate> previewTapDelegate;

+ (void)initialize;

- (void)dealloc;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 forInput:(id)arg2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)registerSurfacesFromSourcePool:(id)arg1;
- (CDStruct_1b6d18a9)previewPTSDisplayedAtHostTime:(unsigned long long)arg1 allowingExtrapolation:(_Bool)arg2;
- (void)inputConnectionWillBeEnabled;
- (void)makeCurrentConfigurationLive;
- (_Bool)hasNonLiveConfigurationChanges;
- (void)setPacked10BitPixelFormatSupported:(_Bool)arg1;
- (_Bool)packed10BitPixelFormatSupported;
- (_Bool)_doesCaptureDeviceHaveISPJitter;
- (id)_inputFormatRequirements;
- (void)_cleanupIOSurfaces;
- (void)_cleanupImageQueueContext;
- (void)_ensureImageQueue;
- (unsigned long long)_bufferIDForSurface:(struct __IOSurface *)arg1;
- (void)_collectUnconsumedBuffersWithReason:(id)arg1;
- (void)_processReleasedContexts;
- (double)_displayTimeSyncedWithFramePTS:(double)arg1;
- (struct _EnqueuedBufferContext *)_createContextForBuffer:(struct opaqueCMSampleBuffer *)arg1 bufferId:(unsigned long long)arg2 framePTS:(CDStruct_1b6d18a9)arg3;
- (void)_processBufferContext:(struct _EnqueuedBufferContext *)arg1;
- (void)_storePreviewPTS:(CDStruct_1b6d18a9)arg1 withHostTime:(unsigned long long)arg2;
- (void)_removeBufferFromInternalQueues:(struct opaqueCMSampleBuffer *)arg1 bufferId:(unsigned long long)arg2;
- (id)initWithHFRSupport:(_Bool)arg1 sinkID:(id)arg2;
- (void)setSyncStrategy:(int)arg1;
- (int)syncStrategy;
- (void)setFenceSupportEnabled:(_Bool)arg1;
- (_Bool)fenceSupportEnabled;
- (CDStruct_1b6d18a9)previewPTSAtHostTime:(unsigned long long)arg1;
- (void)fencePortGenerationIDWillChange;

@end
