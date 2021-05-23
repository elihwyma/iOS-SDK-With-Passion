/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface ARCoachingBlendableSplineGroup : NSObject

{
    NSMutableArray *_controlPoints;
    struct vector<ARCoachingPatchData, std::__1::allocator<ARCoachingPatchData>> _patchData;
    struct vector<unsigned short, std::__1::allocator<unsigned short>> _indices;
}

@property (nonatomic, readonly) NSArray *controlPoints;
@property (nonatomic, readonly) CDStruct_183601bc *patchData;
@property (nonatomic, readonly) unsigned int patchDataLength;
@property (nonatomic, readonly) unsigned short *indices;
@property (nonatomic, readonly) unsigned int numIndices;

- (id).cxx_construct;
- (id)initWithSplineGroups:(id)arg1;

@end
