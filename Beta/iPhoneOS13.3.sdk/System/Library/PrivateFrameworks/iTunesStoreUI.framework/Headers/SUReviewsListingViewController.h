/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController

{
    SUButtonAccessoryView *_accessoryView;
}

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (id)_accessoryView;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)_reloadHeaderView;
- (void)reloadForChangedRowCount:(long long)arg1;
- (id)newTermsAndConditionsFooter;
- (id)_headerItem;
- (void)_writeAReview:(id)arg1;
- (_Bool)_canWriteReview;

@end
