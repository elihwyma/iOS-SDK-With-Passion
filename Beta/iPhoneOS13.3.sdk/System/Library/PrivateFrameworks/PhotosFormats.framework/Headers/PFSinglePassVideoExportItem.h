/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetTrack, AVAssetWriter, AVAssetWriterInput, NSArray, NSFileHandle, NSProgress, NSString, NSURL, PFProportionalIntegralController, PFSinglePassVideoExportItemStatistics, PFVideoExportRangeCoordinator;

@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface PFSinglePassVideoExportItem : NSObject

{
    _Bool _shouldDeleteDestinationURLOnDeallocation;
    _Bool _needsCurrentEncodingBitRateUpdate;
    _Bool _maximizePowerEfficiency;
    NSString *_identifier;
    unsigned long long _targetOutputFileSize;
    NSProgress *_progress;
    NSArray *_additionalMetadata;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_stateQueue;
    AVAsset *_inputAsset;
    AVAssetTrack *_videoTrack;
    NSArray *_additionalTracks;
    NSFileHandle *_conversionOutputFileHandle;
    NSURL *_destinationFileURL;
    unsigned long long _outputFileLastEndOffset;
    long long _targetOutputMediaDataSize;
    PFSinglePassVideoExportItemStatistics *_statistics;
    PFProportionalIntegralController *_bitRateController;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_videoReaderTrackOutput;
    NSArray *_additionalReaderTrackOutputs;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_videoWriterInput;
    NSArray *_additionalWriterInputs;
    NSObject<OS_dispatch_source> *_outputFileSizeChangeSource;
    unsigned long long _minimumChunkLength;
    NSObject<OS_dispatch_group> *_inputReadingCompletionGroup;
    PFVideoExportRangeCoordinator *_availableRangeCoordinator;
    struct OpaqueVTCompressionSession *_compressionSession;
    long long _currentEncodingBitRate;
}

@property (retain) NSString *identifier;
@property unsigned long long state;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain) AVAsset *inputAsset;
@property (retain) AVAssetTrack *videoTrack;
@property (retain) NSArray *additionalTracks;
@property (retain) NSFileHandle *conversionOutputFileHandle;
@property (retain) NSURL *destinationFileURL;
@property _Bool shouldDeleteDestinationURLOnDeallocation;
@property unsigned long long outputFileLastEndOffset;
@property (nonatomic) unsigned long long targetOutputFileSize;
@property long long targetOutputMediaDataSize;
@property (retain) PFSinglePassVideoExportItemStatistics *statistics;
@property (retain) PFProportionalIntegralController *bitRateController;
@property (retain) AVAssetReader *assetReader;
@property (retain) AVAssetReaderTrackOutput *videoReaderTrackOutput;
@property (retain) NSArray *additionalReaderTrackOutputs;
@property (retain) AVAssetWriter *assetWriter;
@property (retain) AVAssetWriterInput *videoWriterInput;
@property (retain) NSArray *additionalWriterInputs;
@property (retain) NSObject<OS_dispatch_source> *outputFileSizeChangeSource;
@property unsigned long long minimumChunkLength;
@property (retain) NSProgress *progress;
@property (retain) NSObject<OS_dispatch_group> *inputReadingCompletionGroup;
@property (retain) PFVideoExportRangeCoordinator *availableRangeCoordinator;
@property struct OpaqueVTCompressionSession *compressionSession;
@property long long currentEncodingBitRate;
@property _Bool needsCurrentEncodingBitRateUpdate;
@property _Bool maximizePowerEfficiency;
@property (copy, nonatomic) NSArray *additionalMetadata;

- (id)init;
- (void)dealloc;
- (void)_cancel;
- (_Bool)preflight;
- (_Bool)startConversionWithError:(id *)arg1 outputAvailableHandler:(CDUnknownBlockType)arg2;
- (id)outputDataInRange:(struct _NSRange)arg1 waitUntilAvailableWithTimeout:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)setupConversionWithError:(id *)arg1;
- (void)configureDroppableFrameRateForCompressionSession:(struct OpaqueVTCompressionSession *)arg1 inputWidth:(int)arg2 inputHeight:(int)arg3;
- (long long)estimatedOutputBitRate;
- (void)startReadingInputAssetWithOutputAvailableHandler:(CDUnknownBlockType)arg1;
- (void)processCompressedSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;
- (void)setupOutputFileSourceWithOutputAvailableHandler:(CDUnknownBlockType)arg1;
- (void)notifyDataAvailableToHandler:(CDUnknownBlockType)arg1 ignoreMinimumChunkLength:(_Bool)arg2;
- (id)bitRateControllerForTargetEncodingBitRate:(long long)arg1;
- (double)inputAssetDuration;

@end
