/*
 Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

#import <MusicStoreUI/MSStructuredPageViewController.h>

@class MSTrackListHeaderView, NSString;

@interface MSTrackListViewController : MSStructuredPageViewController

{
    MSTrackListHeaderView *_headerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_reloadHeaderView;
- (id)newTermsAndConditionsFooter;
- (void)_webViewsLoaded:(id)arg1;
- (void)_reloadFooterView;
- (void)_delayedReloadForWebViews;
- (id)_headerArtworkItemImage;
- (id)_newImageDataProvider;
- (id)_newPlaceholderImage;
- (id)_headerArtworkImage;
- (id)purchasableItemsForHeaderView:(id)arg1;

@end
