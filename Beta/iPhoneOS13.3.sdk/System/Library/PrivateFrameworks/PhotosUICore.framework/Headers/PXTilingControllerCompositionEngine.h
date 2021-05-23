/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSString, PXTilingControllerComposition, PXTilingControllerDefaultComposition;

@protocol PXTilingScrollController;

@interface PXTilingControllerCompositionEngine : NSObject

{
    _Bool _isPerformingChanges;
    _Bool _isUpdatingComposition;
    struct {
        _Bool scrollControllerMetrics;
        _Bool composition;
    } _needsUpdateFlags;
    id <PXTilingScrollController> __scrollController;
    NSHashTable *__tilingControllers;
    NSHashTable *__compositions;
    PXTilingControllerComposition *__composition;
    PXTilingControllerDefaultComposition *__defaultComposition;
    NSMutableArray *__invalidationContexts;
    NSMutableArray *__tilingControllersRequestingFocus;
    struct CGSize __referenceSize;
    struct UIEdgeInsets __contentInset;
}

@property (weak, nonatomic, readonly) id <PXTilingScrollController> _scrollController;
@property (nonatomic, readonly) NSHashTable *_tilingControllers;
@property (nonatomic, readonly) NSHashTable *_compositions;
@property (retain, nonatomic, setter=_setComposition:) PXTilingControllerComposition *_composition;
@property (nonatomic, readonly) PXTilingControllerDefaultComposition *_defaultComposition;
@property (nonatomic, setter=_setReferenceSize:) struct CGSize _referenceSize;
@property (nonatomic, setter=_setContentInset:) struct UIEdgeInsets _contentInset;
@property (nonatomic, readonly) NSMutableArray *_invalidationContexts;
@property (nonatomic, readonly) NSMutableArray *_tilingControllersRequestingFocus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGSize referenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets contentInset;
@property (nonatomic, readonly) NSArray *tilingControllersRequestingFocus;
@property (nonatomic, readonly) NSArray *invalidationContexts;

+ (id)compositionEngineForScrollController:(id)arg1 createIfNeeded:(_Bool)arg2;

- (id)init;
- (_Bool)_needsUpdate;
- (void)_beginUpdate;
- (void)_endUpdate;
- (void)_setNeedsUpdate;
- (void)_invalidateScrollControllerMetrics;
- (void)_updateScrollControllerMetricsIfNeeded;
- (void)_performChanges:(CDUnknownBlockType)arg1;
- (void)tilingScrollControllerDidUpdate:(id)arg1;
- (void)setReferenceSize:(struct CGSize)arg1 contentInset:(struct UIEdgeInsets)arg2 forTilingController:(id)arg3;
- (void)setOrigin:(struct CGPoint)arg1 forTilingController:(id)arg2;
- (void)setContentBounds:(struct CGRect)arg1 scrollBounds:(struct CGRect)arg2 scrollInfo:(id)arg3;
- (struct CGRect)contentBoundsForTilingController:(id)arg1;
- (struct CGRect)scrollBoundsForTilingController:(id)arg1;
- (id)scrollInfoForTilingController:(id)arg1;
- (struct CGPoint)preferredOriginForTilingController:(id)arg1;
- (struct CGPoint)originForTilingController:(id)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromTilingController:(id)arg2;
- (id)convertScrollInfo:(id)arg1 fromTilingController:(id)arg2;
- (void)setTilingControllerCompositionNeedsUpdate:(id)arg1 withContext:(id)arg2;
- (void)setTilingControllerNeedsUpdate:(id)arg1;
- (void)tilingController:(id)arg1 invalidatedWithContext:(long long)arg2;
- (id)_initWithScrollController:(id)arg1;
- (void)registerTilingController:(id)arg1;
- (void)unregisterTilingController:(id)arg1;
- (void)registerComposition:(id)arg1;
- (void)unregisterComposition:(id)arg1;
- (void)_invalidateComposition;
- (_Bool)_updateCompositionIfNeeded;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromTilingController:(id)arg2;

@end
