/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNPoolingBlock.h>

@class MPSCNNPoolingMax;

__attribute__((visibility("hidden")))
@interface VCPCNNPoolingBlockGPU : VCPCNNPoolingBlock

{
    MPSCNNPoolingMax *_mpsPooling;
}

- (int)forward;

@end
