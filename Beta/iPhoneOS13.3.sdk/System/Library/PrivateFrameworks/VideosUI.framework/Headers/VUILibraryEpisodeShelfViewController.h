/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUIShelfViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSString, VUIDialogInteractionController, VUIEpisodeDetailViewController, VUILibraryEpisodeListCell;

@protocol VUILibraryEpisodeShelfViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUILibraryEpisodeShelfViewController : VUIShelfViewController <Swift>

{
    VUILibraryEpisodeListCell *_sizingCell;
    VUIDialogInteractionController *_dialogInteractionController;
    _Bool _onlyShowLocalContent;
    _Bool _shouldIgnoreSelectEvent;
    id <VUILibraryEpisodeShelfViewControllerDelegate> _delegate;
    NSArray *_episodeViewModels;
    VUIEpisodeDetailViewController *_episodeDetailViewController;
    NSIndexPath *_popoverIndexPath;
}

@property (copy, nonatomic) NSArray *episodeViewModels;
@property (retain, nonatomic) VUIEpisodeDetailViewController *episodeDetailViewController;
@property (retain, nonatomic) NSIndexPath *popoverIndexPath;
@property (nonatomic) _Bool shouldIgnoreSelectEvent;
@property (weak, nonatomic) id <VUILibraryEpisodeShelfViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool onlyShowLocalContent;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)willMoveToParentViewController:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_updateHeaderView;
- (void)updateWithEpisodes:(id)arg1 andChangeSet:(id)arg2;
- (void)_updateViewWithFetchedEpisodes:(id)arg1 andChangeSet:(id)arg2;
- (id)_episodeWithIdentifier:(id)arg1;
- (_Bool)_canRemoveEpisodeAtIndexPath:(id)arg1;
- (id)_episodeViewModelsWithFetchedEpisodes:(id)arg1;
- (void)updateShelfLayout:(id)arg1;
- (void)episodeDetailViewControllerWasDismissed:(id)arg1;
- (_Bool)dialogInteractionController:(id)arg1 shouldBeginInteractionForIndexPath:(id)arg2;
- (void)dialogInteractionController:(id)arg1 interactionDidBeginForIndexPath:(id)arg2;
- (void)dialogInteractionController:(id)arg1 interactionDidEndForIndexPath:(id)arg2;
- (void)removeDownloadPressed;
- (void)removeDownloadDismissed;
- (id)initWithEpisodes:(id)arg1;
- (void)configureWithCollectionView:(id)arg1;
- (void)_configureShelfLayout:(id)arg1;

@end
