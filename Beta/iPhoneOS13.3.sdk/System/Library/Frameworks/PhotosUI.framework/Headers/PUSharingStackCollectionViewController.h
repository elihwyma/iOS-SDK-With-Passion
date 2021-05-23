/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewController.h>

@class NSArray, NSMutableDictionary, NSString, PUSharingStackCollectionViewLayout;

@protocol PUSharingStackCollectionViewControllerDataSource, PXUIImageProvider;

__attribute__((visibility("hidden")))
@interface PUSharingStackCollectionViewController : UICollectionViewController

{
    _Bool _needsUpdate;
    id <PUSharingStackCollectionViewControllerDataSource> _dataSource;
    PUSharingStackCollectionViewLayout *_stackLayout;
    id <PXUIImageProvider> _imageProvider;
    NSMutableDictionary *_layoutItemsByAssets;
    long long _currentRotationDirection;
    long long _currentVerticalAdjustmentDirection;
    unsigned long long _numberOfItems;
    NSArray *_assets;
}

@property (nonatomic, readonly) PUSharingStackCollectionViewLayout *stackLayout;
@property (retain, nonatomic) id <PXUIImageProvider> imageProvider;
@property (retain, nonatomic) NSMutableDictionary *layoutItemsByAssets;
@property (nonatomic) long long currentRotationDirection;
@property (nonatomic) long long currentVerticalAdjustmentDirection;
@property (nonatomic) unsigned long long numberOfItems;
@property (retain, nonatomic) NSArray *assets;
@property (nonatomic) _Bool needsUpdate;
@property (weak, nonatomic) id <PUSharingStackCollectionViewControllerDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithImageProvider:(id)arg1;
- (void)_updatePhotoForAsset:(id)arg1 cell:(id)arg2 atIndexPath:(id)arg3;
- (void)_updateCell:(id)arg1 forItemAtIndexPath:(id)arg2;
- (id)sharingStackCollectionViewLayout:(id)arg1 layoutItemForItemAtIndexPath:(id)arg2;
- (void)invalidateContent;
- (struct CGSize)_sizeForAsset:(id)arg1;
- (id)_layoutItemInputForAsset:(id)arg1 atIndex:(long long)arg2;

@end
