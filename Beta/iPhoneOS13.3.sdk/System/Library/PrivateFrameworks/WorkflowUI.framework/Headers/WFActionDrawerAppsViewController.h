/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, WFActionDrawerResultsController;

@protocol WFActionDrawerAppsViewControllerDelegate;

@interface WFActionDrawerAppsViewController : UIViewController <Swift>

{
    id <WFActionDrawerAppsViewControllerDelegate> _delegate;
    WFActionDrawerResultsController *_resultsController;
    NSArray *_appItems;
    UICollectionView *_collectionView;
}

@property (retain, nonatomic) WFActionDrawerResultsController *resultsController;
@property (retain, nonatomic) NSArray *appItems;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id <WFActionDrawerAppsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)state;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillAppear:(_Bool)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (id)initWithActionDrawerResultsController:(id)arg1;
- (long long)numberOfItemsWithWidth:(double)arg1 totalWidth:(double)arg2 minimumSpacing:(double)arg3;
- (double)insetForEqualSpacingWithCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3;
- (double)insetForCollectionViewWidth:(double)arg1 numberOfItems:(long long)arg2 itemSize:(double)arg3 spacing:(double)arg4;
- (void)updateAppItems;
- (void)fetchBundleIdentifiersFromActionRegistryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchBundleIdentifiersFromRecentDonationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)expectedCollectionViewWidth;

@end
