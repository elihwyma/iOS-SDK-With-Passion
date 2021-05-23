/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceNode.h>

@interface NUVideoFrameSourceNode : NUSourceNode

{
    long long _orientation;
}

- (id)initWithSettings:(id)arg1;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (long long)sourceOrientation;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (id)applySourceOptions:(id)arg1 image:(id)arg2;

@end
