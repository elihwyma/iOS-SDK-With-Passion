/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Frameworks/MTLSpline.framework/MTLSpline
 */

#import <NSObject.h>

@class MISSING_TYPE;

@interface MTLSPath : NSObject

{
    float _strokeWeight;
    struct vector<ControlPoint, std::__1::allocator<ControlPoint>> _controlPointsVector;
    struct vector<PatchInfo, std::__1::allocator<PatchInfo>> _patchInfoVector;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indicesVector;
    struct vector<InstanceInfo, std::__1::allocator<InstanceInfo>> _instancesVector;
    struct vector<simd_float4x4, std::__1::allocator<simd_float4x4>> _collapsedTransforms;
}

@property (readonly) struct ControlPoint *controlPoints;
@property (readonly) unsigned long long controlPointsCount;
@property (readonly) struct PatchInfo *patchInfo;
@property (readonly) unsigned long long patchInfoCount;
@property (readonly) unsigned short *indices;
@property (readonly) unsigned long long indicesCount;
@property (readonly) struct InstanceInfo *instances;
@property (readonly) unsigned long long instanceCount;

- (id)init;
- (id).cxx_construct;
- (void)genLeftCapWithWidth:(float)arg1;
- (void)genRightCapWithWidth:(float)arg1;
- (void)clearInstances;
- (void)appendInstances:(struct InstanceInfo *)arg1 count:(unsigned long long)arg2;
- (id)initWithPoints:(MISSING_TYPE **)arg1 colors:(MISSING_TYPE **)arg2 count:(unsigned long long)arg3 strokeWeight:(float)arg4 pattern:(unsigned long long)arg5 rotation:(struct AxisAngle)arg6 scale:translation: /* Error: Ran out of types for this method. */;
- (void)genIndicesWithPattern:(unsigned long long)arg1;
- (void)collapseTransform:(CDStruct_14d5dc5e)arg1;
- (MISSING_TYPE *)interpolateWithPoints:(MISSING_TYPE *[4])arg1 t:(float)arg2;
- (MISSING_TYPE *)interpolateTangentWithPoints:(MISSING_TYPE *[4])arg1 t:(float)arg2;
- (unsigned long long)indicesVectorCount;
- (unsigned long long)controlPointsVectorCount;
- (unsigned long long)patchInfoVectorCount;
- (unsigned long long)instanceInfoVectorCount;
- (struct ControlPoint *)controlPointsVectorData;
- (struct PatchInfo *)patchInfoVectorData;
- (unsigned short *)indicesVectorData;
- (struct InstanceInfo *)instanceInfoVectorData;
- (id)initWithPoints:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2 strokeWeight:(float)arg3 pattern:(unsigned long long)arg4 rotation:(struct AxisAngle)arg5 scale:translation: /* Error: Ran out of types for this method. */;
- (void)appendControlPoints:(struct ControlPoint *)arg1 count:(unsigned long long)arg2;
- (void)appendPatchInfo:(struct PatchInfo *)arg1 count:(unsigned long long)arg2;
- (void)appendIndices:(unsigned short *)arg1 count:(unsigned long long)arg2;

@end
