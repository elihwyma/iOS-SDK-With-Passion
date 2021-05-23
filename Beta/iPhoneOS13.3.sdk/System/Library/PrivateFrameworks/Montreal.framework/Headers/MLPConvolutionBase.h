/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <Montreal/MLPImageLayer.h>

@interface MLPConvolutionBase : MLPImageLayer

{
    unsigned long long _kernelWidth;
    unsigned long long _kernelHeight;
    unsigned long long _kernelStride;
}

@property unsigned long long kernelWidth;
@property unsigned long long kernelHeight;
@property unsigned long long kernelStride;

- (unsigned long long)computeOutputLengthWithInputLength:(long long)arg1 kernelWidth:(long long)arg2 kernelStride:(long long)arg3;

@end
