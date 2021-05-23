/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGSublayoutComposition.h>

@interface PXGStackedSublayoutComposition : PXGSublayoutComposition

{
    long long _axis;
    double _interlayoutSpacing;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets padding;

- (id)init;
- (struct CGRect)contentBounds;
- (void)referenceSizeDidChange;
- (void)updateEstimatedSublayoutGeometries;
- (void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(CDUnknownBlockType)arg2;

@end
