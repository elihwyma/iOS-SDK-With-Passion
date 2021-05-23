/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSString, SKUIProxyScrollView, UICollectionView;

@protocol SKUIHorizontalScrollingContainerViewControllerDelegate;

@interface SKUIHorizontalScrollingContainerViewController : SKUIViewController <Swift>

{
    struct CGSize _contentCollectionViewItemSize;
    UICollectionView *_contentCollectionView;
    _Bool _isHandlingScrollViewDidScroll;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    NSMapTable *_viewControllerToExistingContentInsetAdjustment;
    _Bool _initialScrollWasPerformed;
    NSArray *_viewControllers;
    id <SKUIHorizontalScrollingContainerViewControllerDelegate> _delegate;
    UICollectionView *_menuBarCollectionView;
}

@property (copy, nonatomic) NSArray *viewControllers;
@property (weak, nonatomic) id <SKUIHorizontalScrollingContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) UICollectionView *menuBarCollectionView;
@property (nonatomic, readonly) NSIndexPath *indexPathOfFocusedItem;
@property (nonatomic, readonly) _Bool initialScrollWasPerformed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (void)observedScrollViewDidScroll:(id)arg1;
- (void)observedScrollViewWillBeginDecelerating:(id)arg1;
- (void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)_scrollViewDidScroll:(id)arg1;
- (void)_scrollViewWillBeginDecelerating:(id)arg1;
- (struct UIEdgeInsets)viewControllerContentScrollViewContentInset;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 toViewControllers:(id)arg2;
- (void)_applyNewContentInset:(struct UIEdgeInsets)arg1 toViewController:(id)arg2;
- (id)_indexPathOfFocusedContentItemWithDistanceToFocusedPosition:(double *)arg1 layoutAttributes:(id *)arg2;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeContentCollectionViewWithMenuBarCollectionView;
- (void)_synchronizeMenuBarCollectionViewWithContentCollectionView;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)setNeedsViewControllerContentScrollViewContentInsetUpdate;

@end
