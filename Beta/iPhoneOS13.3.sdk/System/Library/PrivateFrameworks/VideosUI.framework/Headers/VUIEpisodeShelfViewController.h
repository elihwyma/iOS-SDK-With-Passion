/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVShelfViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIEpisodeShelfViewController : _TVShelfViewController

{
    _Bool _isInitialLoad;
}

@property (nonatomic) _Bool isInitialLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)seasonPickerButtonTapped:(id)arg1;
- (id)_episodeHeaderView;
- (void)_updateEpisodeHeaderWithLeftMostItem;
- (unsigned long long)selectedIndexTitleForItemIndexPath:(id)arg1;

@end
