/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUSourceNode.h>

@class CIImage;

@interface NUCISourceNode : NUSourceNode

{
    CIImage *_image;
    long long _orientation;
}

- (id)initWithSettings:(id)arg1;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImagePropertiesWithSourceOptions:(id)arg1 error:(out id *)arg2;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long *)arg2 error:(out id *)arg3;
- (long long)sourceOrientation;
- (_Bool)shouldCacheNodeForPipelineState:(id)arg1;
- (CDStruct_912cb5d2)pixelSizeWithSourceOptions:(id)arg1;
- (_Bool)supportsPipelineState:(id)arg1 error:(out id *)arg2;
- (id)initWithImage:(id)arg1 identifier:(id)arg2 orientation:(long long)arg3;
- (id)initWithImage:(id)arg1 settings:(id)arg2 orientation:(long long)arg3;

@end
