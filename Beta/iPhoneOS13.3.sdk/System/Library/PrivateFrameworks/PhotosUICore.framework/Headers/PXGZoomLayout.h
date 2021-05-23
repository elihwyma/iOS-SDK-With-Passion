/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSArray;

@interface PXGZoomLayout : PXGLayout

{
    CDStruct_d97c9657 _updateFlags;
    _Bool _settingSublayouts;
    _Bool _isUpdatingSublayouts;
    PXGLayout *_primaryLayer;
    NSArray *_layers;
    id _anchorObjectReference;
    struct CGPoint _anchorViewportCenter;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, readonly) PXGLayout *primaryLayer;
@property (nonatomic, readonly) NSArray *layers;
@property (retain, nonatomic) id anchorObjectReference;
@property (nonatomic) struct CGPoint anchorViewportCenter;
@property (nonatomic) struct UIEdgeInsets padding;

- (id)init;
- (void)update;
- (void)safeAreaInsetsDidChange;
- (void)visibleRectDidChange;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)_updateSublayoutGeometries;
- (void)viewEnvironmentDidChange;
- (void)userInterfaceDirectionDidChange;
- (void)sublayoutNeedsUpdate:(id)arg1;
- (void)sublayoutDidChangeContentSize:(id)arg1;
- (void)sublayoutDidChangeLastBaseline:(id)arg1;
- (void)didChangeSublayoutOrigins;
- (struct CGRect)sublayout:(id)arg1 visibleRectForRequestedVisibleRect:(struct CGRect)arg2;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (void)setLayers:(id)arg1 primaryLayer:(id)arg2;
- (void)_configureSublayouts;

@end
