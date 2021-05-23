/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryStackViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, VUILibraryMediaCollectionViewModel, VUIMediaCollection;

__attribute__((visibility("hidden")))
@interface VUILibraryMediaCollectionViewController : VUILibraryStackViewController <Swift>

{
    _Bool _canShowMultipleSeasons;
    VUIMediaCollection *_mediaCollection;
    NSArray *_seasons;
    NSArray *_episodes;
    NSArray *_episodeGroups;
    VUILibraryMediaCollectionViewModel *_mediaCollectionViewModel;
    NSMutableDictionary *_downloadButtonBySeasonIdentifier;
    NSString *_showTitle;
}

@property (retain, nonatomic) NSArray *seasons;
@property (retain, nonatomic) NSArray *episodes;
@property (retain, nonatomic) NSArray *episodeGroups;
@property (retain, nonatomic) VUILibraryMediaCollectionViewModel *mediaCollectionViewModel;
@property (retain, nonatomic) NSMutableDictionary *downloadButtonBySeasonIdentifier;
@property (retain, nonatomic) NSString *showTitle;
@property (nonatomic) _Bool canShowMultipleSeasons;
@property (nonatomic, readonly) VUIMediaCollection *mediaCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)start;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)libraryEpisodesShelfViewController:(id)arg1 didRemoveDownloadForAssetController:(id)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)contentDescriptionExpanded;
- (void)titleButtonPressedForStoreId:(id)arg1;
- (id)initWithMediaCollection:(id)arg1 showMultipleSeasons:(_Bool)arg2;
- (_Bool)_usingEpisodesGroupFetch;
- (void)_buildMediaCollectionViewModel;
- (void)_updateDeletedContentErrorMessage;
- (id)_episodesChangeSetMapWithEpisodeGroups:(id)arg1 changeSet:(id)arg2;
- (id)_seasonViewModelsWithSeasons:(id)arg1;
- (void)_updateMediaCollectionViewModelWithSeasonViewModels:(id)arg1;
- (void)_updateProductLockupViewWithSeasonIdentifier:(id)arg1;
- (id)_episodesBySeasonIdentifier;
- (id)_productLockupViewWithSeason:(id)arg1;
- (id)_episodeShelfViewControllerWithSeason:(id)arg1 episodes:(id)arg2;
- (void)_updateProductLockupView:(id)arg1 withSeason:(id)arg2;
- (void)addDownloadButtonToProductLockupView:(id)arg1 forSeason:(id)arg2;

@end
