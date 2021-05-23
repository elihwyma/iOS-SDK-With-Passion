/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCPAsset;

@interface VCPPhotoAnalyzer : NSObject

{
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    unsigned long long _irisAnalyses;
    NSDictionary *_phFaceResults;
    unsigned long long _phFaceFlags;
    VCPAsset *_asset;
    float _imageBlurTextureScore;
    _Bool _allowStreaming;
    long long _status;
}

@property (nonatomic) _Bool allowStreaming;
@property (readonly) long long status;

+ (_Bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;
+ (id)analyzerWithVCPAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;

- (id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)analyzeAsset:(CDUnknownBlockType)arg1;
- (void)processExistingAnalyses:(id)arg1;
- (id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1;
- (int)downscaleImage:(struct __CVBuffer *)arg1 scaledImage:(struct __CVBuffer **)arg2 majorDimension:(int)arg3;
- (id)existingAnalysisForMovieAnalyzer;
- (int)analyzeImage:(unsigned long long *)arg1 performedAnalyses:(unsigned long long *)arg2 movingObjectResults:(id)arg3 cancel:(CDUnknownBlockType)arg4;

@end
