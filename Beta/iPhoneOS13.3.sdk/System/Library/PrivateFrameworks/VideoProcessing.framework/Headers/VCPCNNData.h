/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

@class MPSImage, NSMutableArray, VCPCNNMetalContext;

__attribute__((visibility("hidden")))
@interface VCPCNNData : NSObject

{
    _Bool _isInputOutput;
    NSMutableArray *_size;
    float *_data;
    MPSImage *_mpsImg;
    VCPCNNMetalContext *_context;
}

@property (retain) NSMutableArray *size;
@property float *data;
@property _Bool isInputOutput;
@property (retain) MPSImage *mpsImg;
@property (weak) VCPCNNMetalContext *context;

+ (id)cnnDataWithGPUContext:(id)arg1;
+ (id)cnnData;
+ (Class)cnnDataClass;
+ (id)cnnDataWithPlane:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;

- (id)init;
- (void)dealloc;
- (int)normalization;
- (int)allocBuffers:(_Bool)arg1;
- (int)reallocGPUTemporalBuffers;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (id)initWithGPUContext:(id)arg1;
- (id)initWithParameters:(int)arg1 height:(int)arg2 width:(int)arg3 context:(id)arg4;
- (int)bufferAllocCPU;
- (int)randInit;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
- (int)copyImage:(struct __CVBuffer *)arg1 withChunk:(int)arg2;
- (int)softmax;

@end
