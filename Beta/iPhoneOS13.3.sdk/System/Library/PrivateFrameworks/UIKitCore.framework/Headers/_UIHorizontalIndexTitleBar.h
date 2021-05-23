/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIFocusGuide, _UIHorizontalIndexTitleBarCell;

@protocol _UIHorizontalIndexTitleBarDelegate;

__attribute__((visibility("hidden")))
@interface _UIHorizontalIndexTitleBar : UIView <Swift>

{
    NSArray *_entries;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    _UIHorizontalIndexTitleBarCell *_focusedCell;
    _UIHorizontalIndexTitleBarCell *_selectedCell;
    UIFocusGuide *_horizontalIndexTitleBarFocusGuide;
    id <_UIHorizontalIndexTitleBarDelegate> _delegate;
    struct UIEdgeInsets _sectionInset;
    struct UIEdgeInsets _parentSafeAreaInsets;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) NSArray *entries;
@property (weak, nonatomic) _UIHorizontalIndexTitleBarCell *focusedCell;
@property (weak, nonatomic) _UIHorizontalIndexTitleBarCell *selectedCell;
@property (retain, nonatomic) UIFocusGuide *horizontalIndexTitleBarFocusGuide;
@property (weak, nonatomic) id <_UIHorizontalIndexTitleBarDelegate> delegate;
@property (nonatomic, getter=_parentSafeAreaInsets, setter=_setParentSafeAreaInsets:) struct UIEdgeInsets parentSafeAreaInsets;
@property (nonatomic) struct UIEdgeInsets sectionInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)commonInit;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)_updateWithEntries:(id)arg1;
- (_Bool)_isViewEntryCell:(id)arg1;
- (id)_currentlyFocusedCell;
- (id)selectedEntry;
- (void)_selectEntryForTitleIndex:(long long)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_cancelDelayedFocusAction;
- (void)_sendDelayedFocusActionIfNecessary;
- (void)_flipIfRightToLeft;
- (void)_updateSectionInset;
- (void)_selectFocusedCell;

@end
