/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUVideoFrameSourceNode.h>

@interface NUPixelBufferSourceNode : NUVideoFrameSourceNode

{
    struct __CVBuffer *_pixelBuffer;
}

- (void)dealloc;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 settings:(id)arg2 orientation:(long long)arg3;

@end
