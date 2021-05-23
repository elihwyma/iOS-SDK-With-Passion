/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUTransformNode.h>

@class NUImageTransformAffine;

@interface NUCropNode : NUTransformNode

{
    _Bool _resetCleanAperture;
    NUImageTransformAffine *_transform;
    CDStruct_996ac03c _cropRect;
}

@property (retain) NUImageTransformAffine *transform;
@property CDStruct_996ac03c cropRect;
@property (readonly) _Bool resetCleanAperture;

- (id)debugQuickLookObject;
- (id)resolvedNodeWithCachedInputs:(struct NSDictionary *)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)_evaluateImageGeometry:(out id *)arg1;
- (id)initWithSettings:(id)arg1 inputs:(struct NSDictionary *)arg2;
- (id)_evaluateVideoProperties:(out id *)arg1;
- (id)_evaluateImage:(out id *)arg1;
- (id)_transformWithError:(out id *)arg1;
- (_Bool)canPropagateOriginalAuxiliaryData;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2 resetCleanAperture:(_Bool)arg3 settings:(id)arg4;
- (id)initWithRect:(CDStruct_996ac03c)arg1 input:(id)arg2;
- (id)transformAffine;
- (struct CGPoint)scaleCropOriginForOriginalVideoSize:(struct CGSize)arg1 originalCleanAperture:(struct CGRect)arg2 renderScale:(double)arg3 inputExtent:(CDStruct_996ac03c)arg4;
- (_Bool)scaledCropOrigin:(struct CGPoint *)arg1 error:(out id *)arg2;

@end
