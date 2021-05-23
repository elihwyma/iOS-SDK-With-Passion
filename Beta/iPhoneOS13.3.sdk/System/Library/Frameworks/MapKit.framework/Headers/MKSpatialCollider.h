/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class _MKSpatialColliderPairSet;

__attribute__((visibility("hidden")))
@interface MKSpatialCollider : NSObject

{
    long long _options;
    _MKSpatialColliderPairSet *_previousCollisionPairs;
    _MKSpatialColliderPairSet *_registeredCollisonPairs;
    _Bool _isVertical;
    struct vector<MKAnnotationView *, std::__1::allocator<MKAnnotationView *>> _sortedAnnotationViews;
    double _maxLength;
    unsigned long long mutator;
}

- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id).cxx_construct;
- (unsigned long long)viewCount;
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(_Bool)arg2 fromIndex:(long long)arg3 length:(double)arg4;
- (id)initWithAnnotationViews:(id)arg1 previousCollissions:(id)arg2 options:(long long)arg3;
- (id)annotationViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)insertAnnotationView:(id)arg1;
- (id)viewsCollidingWithAnnotationView:(id)arg1 inCollidableList:(_Bool)arg2;
- (id)viewsCollidingWithAnnotationViewAtIndex:(unsigned long long)arg1;
- (id)registeredCollissions;

@end
