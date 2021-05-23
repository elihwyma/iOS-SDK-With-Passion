/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TSAudioTimeErrorCalculator : NSObject

{
    long long _numberOfSamples;
    long long _maxMeasurements;
    long long _measurementsInBuffer;
    const float *_channelASamples;
    const float *_channelBSamples;
    double *_sampleTimestamps;
    double *_timeErrors;
    _Bool _calculatedTimeError;
    long long _interval;
    long long _correlationLength;
    long long _upscaleFactor;
    double _samplingRate;
    long long _correlationType;
    _Bool _noCopy;
}

@property (copy, nonatomic, readonly) NSArray *audioTimeErrors;
@property (copy, nonatomic, readonly) NSArray *timeErrors;

- (void)dealloc;
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7 correlationType:(long long)arg8;
- (void)calculateTimeErrorWithThreadingOption:(long long)arg1;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2 withThreadingOption:(long long)arg3;
- (void)_processTimeErrorFromStartOffset:(long long)arg1 atIndex:(long long)arg2 withCount:(long long)arg3;
- (void)calculateTimeError;
- (_Bool)exportTimeErrorToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (_Bool)exportTimeErrorToPath:(id)arg1;
- (id)initWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (id)initNoCopyWithChannelA:(const float *)arg1 andChannelB:(const float *)arg2 ofLength:(long long)arg3 withInterval:(long long)arg4 correlationLength:(long long)arg5 upscaleFactor:(long long)arg6 atSamplingRate:(double)arg7;
- (void)calculateTimeErrorFromStartOffset:(long long)arg1 toEndOffset:(long long)arg2;
- (_Bool)exportTimeErrorToDirectoryURL:(id)arg1;

@end
