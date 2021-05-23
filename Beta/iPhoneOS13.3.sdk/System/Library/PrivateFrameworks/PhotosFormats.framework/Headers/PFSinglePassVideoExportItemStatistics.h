/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PFSinglePassVideoExportItemStatistics : NSObject

{
    float _frameRate;
    unsigned long long _lastOutputChunkTimestamp;
    NSMutableArray *_outputChunkMeasurements;
    unsigned long long _processedOutputTotalBytes;
    unsigned long long _processedVideoSampleBytes;
    unsigned long long _processedAdditionalSampleBytes;
    double _conversionDuration;
    double _lastProcessedInputFramePresentationTime;
    long long _processedOutputFrameCount;
    unsigned long long _targetOutputTotalBytes;
    double _targetPlaybackDuration;
}

@property unsigned long long lastOutputChunkTimestamp;
@property (retain) NSMutableArray *outputChunkMeasurements;
@property unsigned long long processedOutputTotalBytes;
@property unsigned long long processedVideoSampleBytes;
@property unsigned long long processedAdditionalSampleBytes;
@property double conversionDuration;
@property (readonly) unsigned long long processedOutputBytesPerSecond;
@property (readonly) double averageOutputChunkTimeInterval;
@property (readonly) unsigned long long averageOutputChunkBytes;
@property (readonly) float processingFramesPerSecond;
@property double lastProcessedInputFramePresentationTime;
@property long long processedOutputFrameCount;
@property (readonly) long long effectiveEncodingBitRate;
@property unsigned long long targetOutputTotalBytes;
@property double targetPlaybackDuration;
@property float frameRate;
@property (readonly) long long targetEncodingBitRate;

+ (id)statisticsWithTargetPlaybackDuration:(CDStruct_1b6d18a9)arg1 frameRate:(float)arg2 targetOutputTotalBytes:(unsigned long long)arg3;

- (id)init;
- (id)summaryDescription;
- (void)addMeasurementForBytesDelivered:(unsigned long long)arg1;
- (void)enumerateOutputChunkMeasurementsWithHandler:(CDUnknownBlockType)arg1;
- (id)outputChunkMeasurementsDescription;

@end
