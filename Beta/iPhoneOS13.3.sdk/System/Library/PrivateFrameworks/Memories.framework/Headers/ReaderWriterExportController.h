/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Memories/ExportController.h>

@class NSError, PVVideoCompositing;

__attribute__((visibility("hidden")))
@interface ReaderWriterExportController : ExportController

{
    float m_progress;
    int m_numberOfPasses;
    long long m_status;
    NSError *m_error;
    _Bool m_cancel;
    _Bool m_firstPassDone;
    PVVideoCompositing *m_customCompositor;
}

+ (id)stringForStatus:(long long)arg1;

- (float)progress;
- (void)cancelExport;
- (void)continueExportAfterDelay;
- (void)noteSessionProgressed:(float)arg1;
- (long long)mapAssetReaderStatusToExportStatus:(long long)arg1;
- (long long)mapAssetWriterStatusToExportStatus:(long long)arg1;
- (void)updateStatusAndErrorFromReader:(id)arg1 andWriter:(id)arg2;
- (id)fileTypeFromExtension;
- (id)videoDecompressionSettingsForVideoCompressionSettings:(id)arg1;
- (id)audioCompressionSettings;
- (void)transferSampleBuffers:(id)arg1 assetReader:(id)arg2 assetWriterInput:(id)arg3 assetWriter:(id)arg4 timeRangeToExport:(CDStruct_e83c9415)arg5 queue:(id)arg6 pass:(long long)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (void)continueExportForNextPreset;
- (void)_setupMovieController;
- (id)_compositionForExport;
- (void)releaseMovieController;
- (void)updateThemeImages;
- (id)videoCompressionSettings;

@end
