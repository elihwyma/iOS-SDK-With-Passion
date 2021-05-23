/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@interface VKVectorOverlayPolyline : NSObject

{
    struct vector<geo::Mercator2<double>, std::__1::allocator<geo::Mercator2<double>>> _points;
    Range_ee55b4bd _worldIndexes;
    struct unique_ptr<geo::Cache<unsigned char, std::__1::shared_ptr<std::__1::vector<geo::Mercator2<double>, std::__1::allocator<geo::Mercator2<double>>>>, std::__1::hash<unsigned char>, LRUPolicy>, std::__1::default_delete<geo::Cache<unsigned char, std::__1::shared_ptr<std::__1::vector<geo::Mercator2<double>, std::__1::allocator<geo::Mercator2<double>>>>, std::__1::hash<unsigned char>, LRUPolicy>>> _simplifiedGeometryCache;
    struct unfair_lock _simplifiedGeometryCacheLock;
}

@property (nonatomic, readonly) Range_ee55b4bd worldIndexes;

- (id).cxx_construct;
- (id)initWithMapPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
- (shared_ptr_13962faa)simplifiedGeometryAtZoomLevel:(unsigned char)arg1;

@end
