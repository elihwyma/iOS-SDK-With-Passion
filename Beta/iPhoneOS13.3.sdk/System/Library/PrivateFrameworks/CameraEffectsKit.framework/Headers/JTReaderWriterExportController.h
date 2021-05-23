/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <CameraEffectsKit/JTExportController.h>

@class NSError, PVVideoCompositing;

@interface JTReaderWriterExportController : JTExportController

{
    _Bool _firstPassDone;
    float _progress;
    int _numberOfPasses;
    NSError *_error;
    PVVideoCompositing *_customCompositor;
}

@property (nonatomic) float progress;
@property (nonatomic) int numberOfPasses;
@property (nonatomic) NSError *error;
@property (nonatomic) _Bool firstPassDone;
@property (retain, nonatomic) PVVideoCompositing *customCompositor;

- (void)cancelExport;
- (void)continueExportAfterDelay;
- (void)noteSessionProgressed:(float)arg1;
- (struct CGSize)applyCompositionAspectRatioToAVPresetSize:(struct CGSize)arg1 compositionSize:(struct CGSize)arg2;
- (long long)mapAssetReaderStatusToExportStatus:(long long)arg1;
- (long long)mapAssetWriterStatusToExportStatus:(long long)arg1;
- (void)updateSessionProgress;
- (void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2;
- (id)fileTypeFromExtension;
- (id)videoCompressionSettings:(struct CGSize)arg1;
- (id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1;
- (id)audioCompressionSettings;
- (void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(CDStruct_e83c9415)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)continueExportForNextPreset;
- (void)testAspectRatio;

@end
