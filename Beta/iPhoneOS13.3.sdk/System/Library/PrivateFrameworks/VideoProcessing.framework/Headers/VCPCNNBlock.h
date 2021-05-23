/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, VCPCNNData, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNBlock : NSObject

{
    NSMutableArray *_inputSize;
    NSMutableArray *_outputSize;
    VCPCNNData *_input;
    VCPCNNData *_output;
    VCPCNNMetalContext *_context;
    _Bool _generateOutput;
    _Bool _executedOnGPU;
}

@property (weak) NSMutableArray *inputSize;
@property (retain) NSMutableArray *outputSize;
@property (weak) VCPCNNData *input;
@property (retain) VCPCNNData *output;
@property (readonly) VCPCNNMetalContext *context;
@property _Bool generateOutput;

- (_Bool)useGPU;
- (int)forward;
- (_Bool)supportGPU;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;

@end
