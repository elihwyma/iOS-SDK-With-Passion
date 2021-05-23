/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

#import <PhotosUICore/Swift-Protocol.h>

@interface PXLayoutGeometryArray : NSObject <Swift>

{
    struct _PXLayoutGeometry *_geometries;
    long long _count;
}

@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct _PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1;
- (id)initWithGeometries:(struct _PXLayoutGeometry *)arg1 count:(unsigned long long)arg2;

@end
