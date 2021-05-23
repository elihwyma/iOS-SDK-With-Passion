/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNBlock.h>

@class VCPCNNData;

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlock : VCPCNNBlock

{
    int _filterSize;
    int _filterNum;
    VCPCNNData *_filter;
    VCPCNNData *_bias;
    int _chunk;
    _Bool _reLU;
    int _padding;
    int _padSize;
    int _stride;
    int _groups;
    _Bool _batchNorm;
}

+ (Class)convBlockClass:(int)arg1;
+ (id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5;
+ (id)convBlockWithFilterSize:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;

- (_Bool)useGPU;
- (_Bool)supportGPU;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;
- (int)constructBlock:(id)arg1 context:(id)arg2;

@end
