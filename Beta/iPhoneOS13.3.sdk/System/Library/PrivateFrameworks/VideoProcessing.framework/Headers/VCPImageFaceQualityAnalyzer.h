/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer

{
    NSMutableArray *_faceQualityScores;
}

@property (retain) NSMutableArray *faceQualityScores;

- (void)dealloc;
- (int)analyzeDetectedFaces:(struct __CVBuffer *)arg1 faceResults:(id)arg2 cancel:(CDUnknownBlockType)arg3;

@end
