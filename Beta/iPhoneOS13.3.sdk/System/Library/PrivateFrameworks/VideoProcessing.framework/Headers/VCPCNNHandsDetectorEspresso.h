/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNHandsDetector.h>

@class NSArray, NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNHandsDetectorEspresso : VCPCNNHandsDetector

{
    int _maxNumRegions;
    float *_inputData;
    NSString *_resConfig;
    NSArray *_outputNames;
    vector_f351fd4e _outputsData;
    VCPCNNModelEspresso *_modelEspresso;
}

- (void)dealloc;
- (id).cxx_construct;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (id)initWithMaxNumRegions:(int)arg1;
- (int)generateHandsBoxes:(id)arg1;

@end
