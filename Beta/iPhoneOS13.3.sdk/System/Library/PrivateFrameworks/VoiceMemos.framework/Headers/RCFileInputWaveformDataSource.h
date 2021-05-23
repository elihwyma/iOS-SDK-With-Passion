/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSObject, NSURL;

@protocol OS_dispatch_queue;

@interface RCFileInputWaveformDataSource

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    double _cachedDuration;
    float _loadingProgress;
    NSURL *_AVFileURL;
    double _destinationBeginTime;
    CDStruct_73a5d3ca _sourceTimeRange;
}

@property (copy, nonatomic, readonly) NSURL *AVFileURL;
@property (nonatomic) double destinationBeginTime;
@property (nonatomic) CDStruct_73a5d3ca sourceTimeRange;
@property (nonatomic, readonly) _Bool savesGeneratedWaveform;

- (double)duration;
- (_Bool)setPaused:(_Bool)arg1;
- (void)startLoading;
- (float)loadingProgress;
- (void)setLoadingProgress:(float)arg1;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)saveGeneratedWaveformIfNecessary;
- (_Bool)shouldMergeLiveWaveform;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;
- (id)initWithAVFileURL:(id)arg1 savesGeneratedWaveform:(_Bool)arg2 segmentFlushInterval:(double)arg3;
- (id)initWithAVFileURL:(id)arg1;

@end
