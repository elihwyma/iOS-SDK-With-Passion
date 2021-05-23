/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class GKAggregateMapping, UICollectionView;

@interface GKAggregateCollectionViewWrapper : NSObject

{
    UICollectionView *_wrappedView;
    GKAggregateMapping *_mapping;
}

@property (retain, nonatomic) UICollectionView *wrappedView;
@property (retain, nonatomic) GKAggregateMapping *mapping;

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (id)wrapperForView:(id)arg1 mapping:(id)arg2;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (void)insertSections:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)reloadSections:(id)arg1;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)indexPathForCell:(id)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (id)indexPathsForSelectedItems;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (id)indexPathsForVisibleItems;
- (void)_gkRegisterClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2;
- (void)_gkRegisterCellClass:(Class)arg1;
- (id)_gkDequeueSupplementaryViewForClass:(Class)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3;
- (id)_gkDequeueCellForClass:(Class)arg1 forIndexPath:(id)arg2;
- (void)_gkPerformWithoutViewReuse:(CDUnknownBlockType)arg1;
- (id)initWithView:(id)arg1 mapping:(id)arg2;

@end
