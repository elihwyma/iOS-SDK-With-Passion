/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIShelfViewController.h>

@class NSArray, NSString, VUILibraryLockupViewCell;

@protocol VUILibraryShelfCollectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryShelfCollectionViewController : VUIShelfViewController

{
    VUILibraryLockupViewCell *_sizingCell;
    _Bool _disableSeeAllButton;
    NSString *_headerTitle;
    NSString *_headerSubtitle;
    id <VUILibraryShelfCollectionViewControllerDelegate> _delegate;
    NSArray *_fetchResults;
}

@property (copy, nonatomic) NSArray *fetchResults;
@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *headerSubtitle;
@property (nonatomic) _Bool disableSeeAllButton;
@property (weak, nonatomic) id <VUILibraryShelfCollectionViewControllerDelegate> delegate;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)initWithFetchResults:(id)arg1;
- (void)_updateHeaderView;
- (void)configureWithCollectionView:(id)arg1;
- (void)updateWithLatestMediaEntities:(id)arg1 andChangeSet:(id)arg2;
- (double)_computeBottomMargin;
- (struct CGSize)_configureSizingCellWithEntity:(id)arg1;
- (_Bool)_hideSeeAllButton;
- (void)_didPressSeeAllButton:(id)arg1;
- (void)setHeaderTitle:(id)arg1 andSubtitle:(id)arg2;

@end
