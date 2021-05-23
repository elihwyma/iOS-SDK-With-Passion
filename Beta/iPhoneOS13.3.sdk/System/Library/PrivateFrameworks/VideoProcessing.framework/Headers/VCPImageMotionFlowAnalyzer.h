/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray, NSMutableArray, NSString, VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPImageMotionFlowAnalyzer : VCPImageAnalyzer

{
    VCPCNNModelEspresso *_modelEspresso;
    NSArray *_inputNames;
    vector_f351fd4e _inputsData;
    NSString *_resConfig;
    NSMutableArray *_results;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (int)createModel;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2 withChannels:(int)arg3;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)analyzeImages:(struct __CVBuffer *)arg1 secondImage:(struct __CVBuffer *)arg2 moflow:(float *)arg3 cancel:(CDUnknownBlockType)arg4;

@end
