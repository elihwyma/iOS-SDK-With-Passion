/*
 Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

#import <Foundation/NSObject.h>

@class PKQuadTree;

@interface PKPhysicsGrid : NSObject

{
    shared_ptr_c9c6a83f grid;
    PKQuadTree *quadTree;
}

@property (nonatomic, readonly) int width;
@property (nonatomic, readonly) int height;
@property (nonatomic) shared_ptr_c9c6a83f gridPtr;

+ (id)gridFromOccupancyArray:(const char *)arg1 bytePitch:(int)arg2 width:(int)arg3 height:(int)arg4;
+ (id)gridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 alphaThreshold:(float)arg4 accuracy:(float)arg5;
+ (id)vectorGridFromRGBAU8PixelData:(const char *)arg1 imageWidth:(int)arg2 imageHeight:(int)arg3 accuracy:(float)arg4;

- (id).cxx_construct;
- (shared_ptr_2aaf3a07)pathFromOutlineWithSmoothingThreshold:(double)arg1 bounds:(CDStruct_c7fe8b62)arg2;
- (unsigned char)gridDataAtX:(int)arg1 y:(int)arg2 z:(int)arg3;
- (_Bool)isGridRegionOccupied:(int)arg1 y:(int)arg2 width:(int)arg3 height:(int)arg4;
- (id)physicsBodyFromLVS0:(struct CGRect)arg1;
- (id)physicsBodyFromSmoothedOutline:(double)arg1 size:(struct CGSize)arg2;

@end
