/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARPatchGrid : NSObject

{
    vector_f87b304d _patchesVector;
    float _angle;
}

@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) const CDStruct_183601bc *patches;
@property (nonatomic, readonly) float pivot;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)initWithPatchesVector:(vector_f87b304d)arg1 pivotAngle:(float)arg2;

@end
