/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UICollectionView, VUIDebugContainerView, VUIDebugViewDataSource;

@interface VUIDebugViewController : UIViewController

{
    _Bool _requiresRelayout;
    VUIDebugContainerView *_containerView;
    UICollectionView *_collectionView;
    VUIDebugViewDataSource *_dataSource;
}

@property (retain, nonatomic) VUIDebugContainerView *containerView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) _Bool requiresRelayout;
@property (retain, nonatomic) VUIDebugViewDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (void)_dismissViewController;

@end
