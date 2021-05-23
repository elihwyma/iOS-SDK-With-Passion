/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNBlurAnalyzer.h>

@class NSURL, VCPCNNData, VCPCNNModel;

__attribute__((visibility("hidden")))
@interface VCPCNNBlurAnalyzerMPS : VCPCNNBlurAnalyzer

{
    VCPCNNModel *_model;
    VCPCNNData *_input;
    NSURL *_modelURL;
}

- (id)init;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)computeSharpnessScore:(float *)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(CDUnknownBlockType)arg5;

@end
