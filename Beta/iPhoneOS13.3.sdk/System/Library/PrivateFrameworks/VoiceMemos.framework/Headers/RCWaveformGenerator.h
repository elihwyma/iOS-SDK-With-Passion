/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <Foundation/NSObject.h>

@class AVAudioFile, NSError, NSHashTable, NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RCWaveformGenerator : NSObject

{
    long long _state;
    NSObject<OS_dispatch_semaphore> *_digestPausedSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    double _totalDigestedTime;
    double _totalFlushedTime;
    NSHashTable *_weakObservers;
    NSMutableArray *_internalFinishedLoadingBlockUUIDs;
    NSMutableArray *_internalFinishedLoadingBlocks;
    AVAudioFile *_activeAudioFile;
    struct PowerMeter _samplePowerMeter;
    _Bool _isSampleRateKnown;
    vector_7584168e _powerLevelBuffer;
    float _powerLevelBufferLastPushedValue;
    unsigned long long _powerLevelsConsumedSinceLastFlush;
    unsigned long long _framesConsumedSinceLastFlush;
    long long _framesNeededForNextDB;
    long long _framesNeededForNextFlush;
    NSError *_loadingError;
    unsigned long long _pauseCount;
    _Bool _canceled;
    double _segmentFlushInterval;
    long long _overviewUnitsPerSecond;
}

@property (nonatomic, readonly) double segmentFlushInterval;
@property (nonatomic) long long overviewUnitsPerSecond;
@property (nonatomic, readonly) long long state;
@property (nonatomic) _Bool canceled;
@property (nonatomic, readonly) _Bool loadable;
@property (nonatomic, readonly) _Bool idle;
@property (nonatomic, readonly) _Bool finished;
@property (nonatomic) _Bool paused;

- (id)init;
- (id).cxx_construct;
- (void)beginLoading;
- (id)initWithSegmentFlushInterval:(double)arg1;
- (void)_onQueue_flushRemainingData;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_appendPowerMeterValuesFromAudioPCMBuffer:(id)arg1;
- (_Bool)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (void)_appendAveragePowerLevel:(float)arg1;
- (void)_onQueue_performObserversBlock:(CDUnknownBlockType)arg1;
- (void)async_finishLoadingByTerminating:(_Bool)arg1 loadingFinishedBlockTimeout:(unsigned long long)arg2 loadingFinishedBlock:(CDUnknownBlockType)arg3;
- (void)_onQueue_performLoadingFinishedBlock:(CDUnknownBlockType)arg1 internalBlockUUID:(id)arg2 isTimeout:(_Bool)arg3;
- (void)_onQueue_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_onQueue_pushAveragePowerLevel:(float)arg1;
- (void)_onQueue_appendPowerMeterValuesFromRawAudioData:(void *)arg1 frameCount:(long long)arg2 format:(const struct AudioStreamBasicDescription *)arg3 isPredigest:(_Bool)arg4;
- (void)terminateLoadingImmediately;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(CDStruct_73a5d3ca)arg1 inAudioFile:(id)arg2;
- (id)initWithSamplingParametersFromGenerator:(id)arg1;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(CDStruct_73a5d3ca)arg1 inAudioFile:(id)arg2;
- (void)_onQueue_appendSegment:(id)arg1;
- (void)_onQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(_Bool)arg2;
- (void)_onQueue_digestAveragePowerLevel:(float)arg1;
- (void)_onQueue_flushWaveformSegment:(id)arg1;
- (void)addSegmentOutputObserver:(id)arg1;
- (void)removeSegmentOutputObserver:(id)arg1;
- (void)flushPendingCapturedSampleBuffers;
- (_Bool)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (_Bool)appendAveragePowerLevel:(float)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingWaveform:(id)arg1;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg2;

@end
