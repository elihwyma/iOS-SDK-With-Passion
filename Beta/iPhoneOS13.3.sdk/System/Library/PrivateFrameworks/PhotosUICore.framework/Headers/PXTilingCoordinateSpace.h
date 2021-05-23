/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXTilingCoordinateSpace : NSObject

{
    PXTilingCoordinateSpace *_parentSpace;
    struct CGAffineTransform _transform;
}

@property (nonatomic, readonly) void *identifier;
@property (weak, nonatomic) PXTilingCoordinateSpace *parentSpace;
@property (nonatomic) struct CGAffineTransform transform;

- (id)init;

@end
