/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class AVAsset, AVAudioMix, AVVideoComposition, PFSlowMotionTimeRangeMapper, PFVideoAdjustments;

@interface PFVideoAVObjectBuilder : NSObject

{
    AVAsset *_videoAsset;
    PFVideoAdjustments *_videoAdjustments;
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForPlayback;
    PFSlowMotionTimeRangeMapper *__timeRangeMapperForExport;
    AVAsset *__finalAsset;
    AVAudioMix *__finalAudioMix;
    AVVideoComposition *__finalVideoComposition;
}

@property (nonatomic, readonly) PFSlowMotionTimeRangeMapper *_timeRangeMapperForPlayback;
@property (nonatomic, readonly) PFSlowMotionTimeRangeMapper *_timeRangeMapperForExport;
@property (nonatomic, readonly) AVAsset *_finalAsset;
@property (nonatomic, readonly) AVAudioMix *_finalAudioMix;
@property (nonatomic, readonly) AVVideoComposition *_finalVideoComposition;
@property (nonatomic, readonly) AVAsset *videoAsset;
@property (nonatomic, readonly) PFVideoAdjustments *videoAdjustments;

- (id)description;
- (void)requestAVAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithVideoAsset:(id)arg1 videoAdjustments:(id)arg2;
- (void)requestAsynchronousPlayerItemWithResultHandler:(CDUnknownBlockType)arg1;
- (void)requestAVAssetForExport:(_Bool)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (CDStruct_1b6d18a9)convertToOriginalTimeFromScaledTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (CDStruct_1b6d18a9)convertToScaledTimeFromOriginalTime:(CDStruct_1b6d18a9)arg1 forExport:(_Bool)arg2;
- (id)initWithAsset:(id)arg1 audioMix:(id)arg2 videoComposition:(id)arg3;
- (void)requestAsynchronousExportSessionWithExportPreset:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)requestAsynchronousAVAssetWithResultHandler:(CDUnknownBlockType)arg1;
- (void)_synchronouslyLoadSlowMotionPropertiesFromAsset:(id)arg1;
- (id)_getOrCreateTimeRangeMapperForExport:(_Bool)arg1;
- (CDStruct_e83c9415)slowMotionRampInRangeForExport:(_Bool)arg1;
- (CDStruct_e83c9415)slowMotionRampOutRangeForExport:(_Bool)arg1;

@end
