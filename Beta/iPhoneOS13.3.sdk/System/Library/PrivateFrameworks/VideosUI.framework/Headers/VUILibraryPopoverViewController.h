/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <UIKit/UIViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSIndexPath, NSString, VUILibraryListPopoverView;

@protocol VUILibraryPopoverDataSource, VUILibraryPopoverDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryPopoverViewController : UIViewController <Swift>

{
    VUILibraryListPopoverView *_popoverView;
    _Bool _requiresRelayout;
    NSString *_popoverTitle;
    NSIndexPath *_selectedItemIndexPath;
    id <VUILibraryPopoverDataSource> _dataSource;
    id <VUILibraryPopoverDelegate> _delegate;
}

@property (copy, nonatomic, readonly) NSString *popoverTitle;
@property (retain, nonatomic) NSIndexPath *selectedItemIndexPath;
@property (weak, nonatomic) id <VUILibraryPopoverDataSource> dataSource;
@property (weak, nonatomic) id <VUILibraryPopoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)_configureNavigationBar;
- (void)_dismissPopover;
- (id)initWithPopoverTitle:(id)arg1;

@end
