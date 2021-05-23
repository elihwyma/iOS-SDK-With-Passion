/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageSaliencyAnalyzer.h>

@class NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageSaliencyAnalyzerFullEspresso : VCPImageSaliencyAnalyzer

{
    VCPCNNModelEspresso *_modelEspresso;
    float *_inputData;
    NSString *_resConfig;
    int _srcWidth;
    int _srcHeight;
}

+ (id)sharedModel:(id)arg1;

- (void)dealloc;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)getSalientRegions:(CDUnknownBlockType)arg1;

@end
