/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPVideoMetaAnalyzer.h>

@class NSMutableData, VCPVideoMetaFocusAnalyzer, VCPVideoMetaMotionAnalyzer;

__attribute__((visibility("hidden")))
@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer

{
    struct CGVector _prevEstimatedCenterMv;
    NSMutableData *_deSerializedMetaBuffer;
    VCPVideoMetaFocusAnalyzer *_metaFocusAnalyzer;
    VCPVideoMetaMotionAnalyzer *_metaMotionAnalyzer;
}

+ (id)defaultDesiredKeys;

- (id)init;
- (int)finalizeAnalysis;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long *)arg2;
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata *)arg1 toDictionary:(id)arg2;
- (int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2;

@end
