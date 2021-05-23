/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNBlock.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPoolingBlock : VCPCNNBlock

{
    int _px;
    int _py;
    int _chunk;
}

+ (id)poolingBlockWithPoolX:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;

- (_Bool)useGPU;
- (int)forward;
- (_Bool)supportGPU;
- (int)constructBlock:(id)arg1 context:(id)arg2;
- (id)initWithParameters:(int)arg1 poolY:(int)arg2 chunk:(int)arg3;

@end
