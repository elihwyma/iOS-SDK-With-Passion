/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UICollectionViewController.h>

@class ICDocCamImageCache, ICDocCamThumbnailCollectionViewLayout, NSMutableArray, NSString;

@protocol ICDocCamThumbnailViewDelegate;

__attribute__((visibility("hidden")))
@interface ICDocCamThumbnailCollectionViewController : UICollectionViewController

{
    _Bool _isPerformingBatchUpdates;
    _Bool _needReloadAfterBatchUpdates;
    NSMutableArray *_documentInfoArray;
    ICDocCamImageCache *_imageCache;
    id <ICDocCamThumbnailViewDelegate> _delegate;
    ICDocCamThumbnailCollectionViewLayout *_layout;
}

@property (weak, nonatomic) id <ICDocCamThumbnailViewDelegate> delegate;
@property (retain, nonatomic) ICDocCamThumbnailCollectionViewLayout *layout;
@property (nonatomic) _Bool isPerformingBatchUpdates;
@property (nonatomic) _Bool needReloadAfterBatchUpdates;
@property (retain, nonatomic) NSMutableArray *documentInfoArray;
@property (retain, nonatomic) ICDocCamImageCache *imageCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)update;
- (id)initWithDelegate:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didReceiveMemoryWarning;
- (id)rootView;
- (struct CGSize)collectionView:(id)arg1 imageSizeAtIndex:(long long)arg2;
- (struct CGRect)targetViewRect;
- (void)animateLayoutChange;
- (void)addNewDocument:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setImageWithUUID:(id)arg1 forCell:(id)arg2 useResizedImage:(_Bool)arg3;
- (void)reloadDataForCollectionView;

@end
