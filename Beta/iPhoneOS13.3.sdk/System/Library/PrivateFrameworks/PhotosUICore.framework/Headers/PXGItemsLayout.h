/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@protocol PXGItemsGeometry, PXGItemsLayoutDelegate;

@interface PXGItemsLayout : PXGLayout

{
    _Bool _loadedItemsNeedUpdate;
    unsigned long long _delegateRespondsTo;
    long long _applyingItemChangesCount;
    _Bool _lazy;
    id <PXGItemsLayoutDelegate> _delegate;
    id <PXGItemsGeometry> _itemsGeometry;
    long long __numberOfItems;
    struct _NSRange _loadedItems;
}

@property (nonatomic) struct _NSRange loadedItems;
@property (nonatomic) long long _numberOfItems;
@property (nonatomic, getter=isLazy) _Bool lazy;
@property (weak, nonatomic) id <PXGItemsLayoutDelegate> delegate;
@property (nonatomic) long long numberOfItems;
@property (nonatomic, readonly) _Bool isApplyingItemChanges;
@property (nonatomic, readonly) id <PXGItemsGeometry> itemsGeometry;

- (id)init;
- (void)update;
- (id)layoutForItemChanges;
- (void)loadedItemsDidChange;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2;
- (void)setNumberOfItems:(long long)arg1 withChangeDetails:(id)arg2 changeMediaVersionHandler:(CDUnknownBlockType)arg3;
- (long long)itemForSpriteIndex:(unsigned int)arg1;
- (unsigned int)spriteIndexForItem:(long long)arg1;
- (id)itemsForSpriteIndexes:(id)arg1;
- (id)spriteIndexesForItems:(id)arg1;
- (id)loadedItemsForItems:(id)arg1;
- (id)itemsLayout;
- (_Bool)shouldInvalidateDecorationForModifiedSprites;
- (void)invalidateLoadedItems;
- (void)updateLoadedItemsIfNeeded;
- (void)_updateLoadedItems;
- (void)beginApplyingItemChanges;
- (void)endApplyingItemChanges;
- (_Bool)delegateRespondsTo:(unsigned long long)arg1;
- (long long)itemForObjectReference:(id)arg1;
- (struct _NSRange)itemsToLoad;

@end
