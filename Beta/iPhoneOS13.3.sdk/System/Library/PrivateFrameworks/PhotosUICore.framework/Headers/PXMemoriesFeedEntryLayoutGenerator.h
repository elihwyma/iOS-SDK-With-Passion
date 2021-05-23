/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesFeedLayoutGenerator.h>

@class NSDictionary, NSIndexSet, PXMemoriesSpec;

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator

{
    struct CGSize _size;
    PXMemoriesSpec *_spec;
    NSIndexSet *_geometryKinds;
    struct CGRect _sectionHeaderRect;
    NSDictionary *_rectsByIndexByKind;
    _Bool _isPrepared;
    long long _layoutAxis;
}

@property (nonatomic) long long layoutAxis;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invalidate;
- (struct CGSize)size;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize)estimatedSize;
- (void)getGeometries:(struct _PXLayoutGeometry *)arg1 inRange:(struct _NSRange)arg2 withKind:(long long)arg3;
- (id)geometryKinds;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (void)_prepareLayoutIfNeeded;

@end
