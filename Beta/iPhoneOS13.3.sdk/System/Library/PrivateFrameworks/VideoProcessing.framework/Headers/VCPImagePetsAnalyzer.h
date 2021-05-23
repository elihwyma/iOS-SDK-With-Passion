/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

@class VCPCNNPetsDetector;

__attribute__((visibility("hidden")))
@interface VCPImagePetsAnalyzer : VCPImageAnalyzer

{
    int _maxNumRegions;
    VCPCNNPetsDetector *_petsDetector;
}

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)initWithMaxNumRegions:(int)arg1;
- (int)convertResultsToDict:(id)arg1 results:(id)arg2;

@end
