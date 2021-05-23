/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class VCPCNNModelEspresso;

__attribute__((visibility("hidden")))
@interface VCPCNNGazeAnalysis : NSObject

{
    float *_inputData;
    VCPCNNModelEspresso *_modelEspresso;
}

+ (id)sharedModel:(id)arg1;

- (id)init;
- (void)dealloc;
- (int)copyImage:(struct __CVBuffer *)arg1 toData:(float *)arg2;
- (int)createInput:(float *)arg1 withBuffer:(struct __CVBuffer *)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4 faceBounds:(struct CGRect)arg5;
- (int)detectEyeOpennessForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 eyeOpenness:(_Bool *)arg3;

@end
