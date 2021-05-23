/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUAbstractScaleNode.h>

@class NUSubsampleNode;

@interface NUResampleNode : NUAbstractScaleNode

{
    long long _subsampleFactor;
    long long _sampleMode;
    NUSubsampleNode *_subsampleNode;
}

@property (readonly) long long subsampleFactor;
@property (readonly) long long sampleMode;
@property (readonly) NUSubsampleNode *subsampleNode;

- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (_Bool)isGeometryNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id *)arg3;
- (id)initWithInput:(id)arg1 settings:(id)arg2;
- (id)initWithPreparedInput:(id)arg1 subsampleNode:(id)arg2;
- (id)initWithSubsampleFactor:(long long)arg1 sampleMode:(long long)arg2 source:(id)arg3 subsampleNode:(id)arg4;
- (CDStruct_912cb5d2)_additionalScale;

@end
