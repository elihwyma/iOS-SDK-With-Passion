/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <VideoProcessing/VCPImageAnalyzer.h>

__attribute__((visibility("hidden")))
@interface VCPCNNBlurAnalyzer : VCPImageAnalyzer

{
    _Bool _sdof;
}

@property _Bool sdof;

+ (id)analyzer;

- (void)_copyBufferFrom:(char *)arg1 fromStride:(long long)arg2 toPtr:(float *)arg3 toStride:(long long)arg4 toWidth:(int)arg5 toHeight:(int)arg6;
- (float)calculateScoreFromNetworkOutput:(float *)arg1 outChannel:(int)arg2 outHeight:(int)arg3 outWidth:(int)arg4 textureness:(char *)arg5 contrast:(float)arg6 imgWidth:(int)arg7;
- (int)prepareModelForSourceWidth:(int)arg1 andSourceHeight:(int)arg2;
- (float *)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int *)arg3 cnnInputWidth:(int *)arg4;
- (int)computeSharpnessScore:(float *)arg1 textureness:(char *)arg2 contrast:(float)arg3 imgWidth:(int)arg4 cancel:(CDUnknownBlockType)arg5;
- (int)scaleRegion:(struct CGRect *)arg1 ofImage:(struct __CVBuffer *)arg2 toData:(float *)arg3 withWidth:(int)arg4 andHeight:(int)arg5;
- (int)computeCNNBasedSharpness:(struct __CVBuffer *)arg1 sharpnessScore:(float *)arg2 textureScore:(float *)arg3 contrast:(float)arg4 cancel:(CDUnknownBlockType)arg5;

@end
