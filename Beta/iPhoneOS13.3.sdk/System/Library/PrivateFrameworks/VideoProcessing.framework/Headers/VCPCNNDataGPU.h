/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNData.h>

__attribute__((visibility("hidden")))
@interface VCPCNNDataGPU : VCPCNNData

- (int)allocBuffers:(_Bool)arg1;
- (int)reallocGPUTemporalBuffers;
- (int)convertCPUData2GPU;
- (int)convertGPUData2CPU;
- (int)bufferAllocGPU;

@end
