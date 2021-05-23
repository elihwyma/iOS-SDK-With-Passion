/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGSublayoutComposition.h>

@class PXLayoutGenerator;

@interface PXGGeneratedSublayoutComposition : PXGSublayoutComposition

{
    PXLayoutGenerator *_layoutGenerator;
    struct _PXLayoutGeometry *_layoutGeometries;
    long long _layoutGeometriesCapacity;
}

@property (nonatomic, readonly) PXLayoutGenerator *configuredLayoutGenerator;

- (void)dealloc;
- (void)invalidateLayout;
- (struct CGRect)contentBounds;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;

@end
