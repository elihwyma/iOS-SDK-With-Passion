/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIViewController.h>

#import <Memories/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIBarButtonItem, UICollectionView;

@protocol MiroAssetSuggestionsCollectionViewControllerDelegate;

@interface MiroAssetSuggestionsCollectionViewController : UIViewController <Swift>

{
    _Bool _showDebugInterfaces;
    NSMutableArray *_allAssets;
    UICollectionView *_collectionView;
    NSString *_memoryLocalizedTitle;
    NSArray *_assets;
    id <MiroAssetSuggestionsCollectionViewControllerDelegate> _delegate;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_showAllButton;
}

@property (nonatomic, readonly) NSMutableArray *allAssets;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *showAllButton;
@property (nonatomic) _Bool showDebugInterfaces;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (copy, nonatomic) NSString *memoryLocalizedTitle;
@property (retain, nonatomic) NSArray *assets;
@property (weak, nonatomic) id <MiroAssetSuggestionsCollectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)_indexOAssetWithCreationDate:(id)arg1 inChronologicallySortedAssets:(id)arg2 insertionIndex:(unsigned long long *)arg3;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (id)_selectedAssets;
- (id)_assetAtIndex:(unsigned long long)arg1;
- (void)showAll:(id)arg1;
- (_Bool)assetsArePhotosOnly;
- (long long)_indexOfAssetID:(id)arg1;
- (void)_updateDebugLabelsOnCell:(id)arg1 withAsset:(id)arg2;
- (void)_workaround_24890628_setupSplitScreenWidthConstraint:(id)arg1;
- (void)_setupPopoverPresentationIfNecessary:(id)arg1 fromView:(id)arg2;
- (void)selectCellsWithAssetIDs:(id)arg1;

@end
