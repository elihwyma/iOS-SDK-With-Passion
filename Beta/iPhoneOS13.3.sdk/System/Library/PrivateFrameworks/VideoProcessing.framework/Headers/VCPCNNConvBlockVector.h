/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPCNNConvBlock.h>

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlockVector : VCPCNNConvBlock

{
    CDUnknownFunctionPointerType CalculateDotProductOfChunk;
}

+ (_Bool)isFilterSizeSupported:(int)arg1;

- (int)forward;
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;
- (int)straightForwardForChunkFour;
- (int)chunkFourForward;

@end
