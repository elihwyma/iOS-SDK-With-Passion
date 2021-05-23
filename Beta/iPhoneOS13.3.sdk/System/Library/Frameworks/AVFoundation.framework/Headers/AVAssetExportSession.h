/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAssetExportSessionInternal, NSError, NSString, NSURL;

@interface AVAssetExportSession : NSObject

{
    AVAssetExportSessionInternal *_exportSession;
}

@property (nonatomic, readonly) NSString *presetName;
@property (retain, nonatomic, readonly) AVAsset *asset;
@property (copy, nonatomic) NSString *outputFileType;
@property (copy, nonatomic) NSURL *outputURL;
@property (nonatomic) _Bool shouldOptimizeForNetworkUse;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) float progress;

+ (CDStruct_1b6d18a9)maximumDurationForPreset:(id)arg1 properties:(id)arg2;
+ (id)allExportPresets;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (void)determineCompatibilityOfExportPreset:(id)arg1 withAsset:(id)arg2 outputFileType:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;
+ (long long)estimatedOutputFileLengthForPreset:(id)arg1 duration:(CDStruct_1b6d18a9)arg2 properties:(id)arg3;
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (CDStruct_e83c9415)timeRange;
- (void)setAudioMix:(id)arg1;
- (void)setAudioTimePitchAlgorithm:(id)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)customVideoCompositor;
- (id)audioMix;
- (id)audioTimePitchAlgorithm;
- (_Bool)maximizePowerEfficiency;
- (void)setMaximizePowerEfficiency:(_Bool)arg1;
- (id)directoryForTemporaryFiles;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (id)metadataItemFilter;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (void)estimateMaximumDurationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)estimateOutputFileLengthWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)supportedFileTypes;
- (void)determineCompatibleFileTypesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)AVExportSessionExportAsynchronouslyCompletionHandler;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelExport;
- (CDStruct_1b6d18a9)maxDuration;
- (void)setMinVideoFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)minVideoFrameDuration;
- (void)setVideoFrameRateConversionAlgorithm:(id)arg1;
- (id)videoFrameRateConversionAlgorithm;
- (void)setPreserveSyncFrames:(_Bool)arg1;
- (_Bool)preserveSyncFrames;
- (long long)estimatedOutputFileLength;
- (void)setMetadataItemFilter:(id)arg1;
- (long long)fileLengthLimit;
- (void)setFileLengthLimit:(long long)arg1;
- (_Bool)canPerformMultiplePassesOverSourceMediaData;
- (void)setCanPerformMultiplePassesOverSourceMediaData:(_Bool)arg1;

@end
