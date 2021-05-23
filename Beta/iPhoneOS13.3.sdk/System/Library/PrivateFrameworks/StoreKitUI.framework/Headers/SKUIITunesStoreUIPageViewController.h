/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <iTunesStoreUI/SUStorePageViewController.h>

@class NSString, SKProductPageViewController, SUBarButtonItem;

__attribute__((visibility("hidden")))
@interface SKUIITunesStoreUIPageViewController : SUStorePageViewController

{
    SUBarButtonItem *_cancelButtonItem;
    NSString *_cancelButtonTitle;
    SKProductPageViewController *_productPageViewController;
    _Bool _showsCancelButton;
}

@property (weak, nonatomic) SKProductPageViewController *productPageViewController;
@property (nonatomic) _Bool showsCancelButton;
@property (copy, nonatomic) NSString *cancelButtonTitle;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)resetNavigationItem:(id)arg1;
- (void)handleFailureWithError:(id)arg1;
- (_Bool)presentDialogForError:(id)arg1 pendUntilVisible:(_Bool)arg2;
- (void)_addCancelButtonToNavigationItem:(id)arg1;
- (id)_cancelButtonItem;
- (void)_storeSheetCancelButtonAction:(id)arg1;

@end
