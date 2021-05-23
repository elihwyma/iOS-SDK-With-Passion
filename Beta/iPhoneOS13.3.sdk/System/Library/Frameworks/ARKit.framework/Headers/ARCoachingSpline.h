/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARCoachingSpline : NSObject

{
    struct vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint>> _controlPoints;
    struct vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData>> _patchData;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
    float _relativeThickness;
    float _cap_error;
}

@property (nonatomic, readonly) CDStruct_37a3040a *controlPoints;
@property (nonatomic, readonly) unsigned int numControlPoints;
@property (nonatomic, readonly) CDStruct_183601bc *patchData;
@property (nonatomic, readonly) unsigned int patchDataLength;
@property (nonatomic, readonly) unsigned short *indices;
@property (nonatomic, readonly) unsigned int numIndices;

+ (MISSING_TYPE *)interpolate:(float)arg1 p1:p2:p3:t: /* Error: Ran out of types for this method. */;
+ (MISSING_TYPE *)interpolateTangent:(float)arg1 p1:p2:p3:t: /* Error: Ran out of types for this method. */;

- (id).cxx_construct;
- (void)genTubeIndicesWithPattern:(unsigned long long)arg1;
- (void)genLeftCapWithWidth:(float)arg1;
- (void)genRightCapWithWidth:(float)arg1;
- (id)initWithPoints:(MISSING_TYPE **)arg1 numPoints:(unsigned int)arg2 relativeThickness:(float)arg3 pattern:(unsigned long long)arg4 mat:(CDStruct_14d5dc5e)arg5;

@end
