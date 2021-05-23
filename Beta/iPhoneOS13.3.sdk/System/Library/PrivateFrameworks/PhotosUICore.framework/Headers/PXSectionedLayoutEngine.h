/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXLayoutEngine.h>

@class NSString, PXSectionedLayoutContent;

@protocol PXSectionedLayoutEngineDelegate, PXSectionedLayoutItem;

@interface PXSectionedLayoutEngine : PXLayoutEngine

{
    PXSectionedLayoutContent *_layoutContent;
    struct {
        _Bool willGenerateLayoutForSection;
    } _delegateRespondsTo;
    _Bool _needsUpdateSeedItem;
    struct _PXLayoutGeometry *_geometryBuffer;
    unsigned long long _geometryBufferCount;
    long long _axis;
    struct CGSize _seedSize;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) id <PXSectionedLayoutItem> seedItem;
@property (nonatomic, readonly) struct CGSize seedSize;
@property (weak, nonatomic) id <PXSectionedLayoutEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setDataSourceSnapshot:(id)arg1 withChangeDetails:(id)arg2;
- (void)setSeedItem:(id)arg1;
- (id)initWithLayoutGenerator:(id)arg1 dataSourceSnapshot:(id)arg2;
- (id)performChangesAndWait:(CDUnknownBlockType)arg1;
- (_Bool)canComputeLayoutSnapshot;
- (void)updateLayoutDataWithChangeDetails:(id)arg1;
- (id)computeLayoutSnapshot;
- (void)setSeedSize:(struct CGSize)arg1;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3;
- (id)initWithAxis:(long long)arg1 layoutGenerator:(id)arg2 dataSourceSnapshot:(id)arg3 insets:(struct UIEdgeInsets)arg4;
- (void)_resetLayoutData;
- (void)_updateLayoutDataWithChangeDetails:(id)arg1;
- (id)_newLayoutSection;
- (id)_newLayoutSnapshot;
- (_Bool)_computeSectionsIfNeeded;
- (id)_computeSectionsFromSection:(id)arg1 itemIndex:(long long)arg2 kind:(long long)arg3;
- (void)_computeSection:(id)arg1;
- (void)_prepareGeometryBufferForCount:(unsigned long long)arg1;
- (id)_emptyLayoutSnapshot;

@end
