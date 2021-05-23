/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageSaliencyAnalyzer.h>

@class NSURL, VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPImageSaliencyAnalyzerBinary : VCPImageSaliencyAnalyzer

{
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}

- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (float)outputScaling;
- (int)getSalientRegions:(CDUnknownBlockType)arg1;

@end
