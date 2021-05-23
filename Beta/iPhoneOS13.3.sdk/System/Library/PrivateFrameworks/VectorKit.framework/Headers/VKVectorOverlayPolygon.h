/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKVectorOverlayPolygon : NSObject

{
    shared_ptr_fafdf979 _geometry;
    Range_ee55b4bd _worldIndexes;
}

@property (nonatomic, readonly) Range_ee55b4bd worldIndexes;
@property (nonatomic, readonly, getter=_geometry) shared_ptr_fafdf979 geometry;

- (id).cxx_construct;
- (id)initWithMapPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;

@end
