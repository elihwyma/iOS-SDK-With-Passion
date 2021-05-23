/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNSmileDetector.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNSmileDetectorEspresso : VCPCNNSmileDetector

{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
}

+ (id)sharedModel:(id)arg1;

- (id)init;
- (void)dealloc;
- (float *)getInputBuffer;
- (int)computeSmileScore:(float *)arg1;

@end
