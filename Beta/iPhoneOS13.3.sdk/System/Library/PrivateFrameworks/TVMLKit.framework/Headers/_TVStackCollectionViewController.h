/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UICollectionViewController.h>

@class IKViewElement, NSArray, NSIndexPath, UIView, UIViewController, _TVNeedsMoreContentEvaluator, _TVStackCollectionView;

@protocol _TVStackCollectionViewControllerDelegate;

@interface _TVStackCollectionViewController : UICollectionViewController

{
    NSArray *_viewControllers;
    NSArray *_stackSections;
    NSArray *_stackRows;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    _Bool _configureForListTemplate;
    struct {
        _Bool respondsToStackCollectionViewControllerScrollViewDidScroll;
    } _delegateFlags;
    IKViewElement *_viewElement;
    id <_TVStackCollectionViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <_TVStackCollectionViewControllerDelegate> delegate;
@property (nonatomic, readonly) IKViewElement *viewElement;
@property (retain, nonatomic) _TVStackCollectionView *collectionView;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)updateWithViewElement:(id)arg1;
- (_Bool)_updateWithCollectionListElement:(id)arg1 autoHighlightIndexPath:(id *)arg2;
- (void)_configureBackgroundTintView;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (id)_needsMoreTargetElement;
- (void)_buildStackSections;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (double)_maxViewWidth;
- (id)_viewControllerWithElement:(id)arg1 existingController:(id)arg2;
- (struct CGSize)_maxContentSize;
- (void)_updateFirstItemRowIndexes;

@end
