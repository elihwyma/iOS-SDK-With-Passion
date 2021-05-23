/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryStackViewController.h>

@class NSString, UIBarButtonItem, VUILibraryBannerCollectionViewCell, VUILibraryMediaEntityShelvesViewModel, _VUIDownloadSeeAllController;

__attribute__((visibility("hidden")))
@interface VUILibraryDownloadViewController : VUILibraryStackViewController

{
    VUILibraryBannerCollectionViewCell *_bannerViewSizingCell;
    _Bool _isPhone;
    UIBarButtonItem *_libraryBarButton;
    VUILibraryMediaEntityShelvesViewModel *_viewModel;
    UIBarButtonItem *_currentNavBarButtonItem;
    _VUIDownloadSeeAllController *_currentSeeAllController;
}

@property (retain, nonatomic) VUILibraryMediaEntityShelvesViewModel *viewModel;
@property (retain, nonatomic) UIBarButtonItem *currentNavBarButtonItem;
@property (retain, nonatomic) _VUIDownloadSeeAllController *currentSeeAllController;
@property (retain, nonatomic) UIBarButtonItem *libraryBarButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_localizedTitleForMediaEntityType:(id)arg1;

- (void)start;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)configureWithCollectionView:(id)arg1;
- (id)initWithMediaLibrary:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)shelfCollectionViewController:(id)arg1 collectionView:(id)arg2 didSelectMediaEntity:(id)arg3 atIndexPath:(id)arg4;
- (void)seeAllButtonPressed:(id)arg1;
- (id)_localizedBannerString;

@end
