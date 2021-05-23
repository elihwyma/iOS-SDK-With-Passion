/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryStackViewController.h>

@class NSString, VUIDownloadButton, VUILibraryProductInfoView, VUIMediaEntitiesFetchController, VUIMediaItem, VUIProductLockupView;

__attribute__((visibility("hidden")))
@interface VUILibraryProductViewController : VUILibraryStackViewController

{
    VUIMediaItem *_mediaItem;
    VUIMediaEntitiesFetchController *_fetchController;
    VUIProductLockupView *_productLockupView;
    VUILibraryProductInfoView *_productInfoView;
    VUIDownloadButton *_downloadButton;
}

@property (retain, nonatomic) VUIDownloadButton *downloadButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)initWithMediaItem:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (void)configureWithCollectionView:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)reportMetricsPageEvent;
- (id)_productLockupViewWithMediaItem:(id)arg1;
- (id)_productInfoViewWithMediaItem:(id)arg1;
- (id)_productSectionForHeader:(id)arg1 data:(id)arg2 group:(id)arg3 maxItemCount:(unsigned long long)arg4;
- (void)contentDescriptionExpanded;

@end
