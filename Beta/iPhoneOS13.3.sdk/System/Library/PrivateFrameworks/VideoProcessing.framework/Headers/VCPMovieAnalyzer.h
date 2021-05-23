/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, VCPAsset;

@interface VCPMovieAnalyzer : NSObject

{
    unsigned long long _requestedAnalyses;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_privateResults;
    VCPAsset *_asset;
    _Bool _supportConditionalAnalysis;
    NSDictionary *_existingAnalysis;
    _Bool _allowStreaming;
    long long _status;
}

@property (nonatomic) _Bool allowStreaming;
@property (readonly) long long status;

+ (_Bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)analyzerWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;

- (id)privateResults;
- (id)initWithPHAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)analyzeAsset:(CDUnknownBlockType)arg1;
- (id)processExistingAnalysisForTimeRange:(CDStruct_e83c9415)arg1 analysisTypes:(unsigned long long *)arg2;
- (id)createDecoderForTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;
- (id)createVideoAnalyzer:(id)arg1 withFrameStats:(id)arg2;
- (int)analyzeVideoSegment:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2 cancel:(CDUnknownBlockType)arg3;
- (void)loadPropertiesForAsset:(id)arg1;
- (int)performMetadataAnalysisOnAsset:(id)arg1 withCancelBlock:(CDUnknownBlockType)arg2;
- (int)analyzeVideoTrack:(id)arg1 start:(CDStruct_1b6d18a9)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)generateKeyFrameResource:(id)arg1;
- (id)initWithPHAsset:(id)arg1 withPausedAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithVCPAsset:(id)arg1 withExistingAnalysis:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;

@end
