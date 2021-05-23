/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCoachingSplineGroup : NSObject

{
    struct vector<ARCoachingControlPoint, std::__1::allocator<ARCoachingControlPoint>> _controlPoints;
    struct vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData>> _patchData;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
}

@property (nonatomic, readonly) CDStruct_37a3040a *controlPoints;
@property (nonatomic, readonly) unsigned int numControlPoints;
@property (nonatomic, readonly) CDStruct_183601bc *patchData;
@property (nonatomic, readonly) unsigned int patchDataLength;
@property (nonatomic, readonly) unsigned short *indices;
@property (nonatomic, readonly) unsigned int numIndices;

- (id).cxx_construct;
- (id)initWithSplines:(id)arg1;

@end
