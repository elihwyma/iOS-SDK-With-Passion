/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUIItemListTableViewController, SKUISyncWishlistOperation, SKUIWishlist, UIBarButtonItem, _UIBackdropView, _UIContentUnavailableView;

@protocol SKUIWishlistDelegate;

__attribute__((visibility("hidden")))
@interface SKUIWishlistViewController : SKUIViewController

{
    _UIBackdropView *_backdropView;
    id <SKUIWishlistDelegate> _delegate;
    UIBarButtonItem *_deleteButton;
    _Bool _editing;
    _UIContentUnavailableView *_emptyWishlistView;
    SKUIItemListTableViewController *_itemListViewController;
    _Bool _reloadOnNextAppear;
    SKUISyncWishlistOperation *_syncOperation;
    SKUIWishlist *_wishlist;
    long long _wishlistState;
}

@property (weak, nonatomic) id <SKUIWishlistDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)wishlistBarButtonItemWithClientContext:(id)arg1;

- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (void)_updateDeleteButton;
- (void)_doneAction:(id)arg1;
- (void)_deleteAction:(id)arg1;
- (void)itemList:(id)arg1 didRemoveItemAtIndexPath:(id)arg2;
- (void)itemList:(id)arg1 didDeselectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemList:(id)arg1 didSelectItem:(id)arg2 atIndexPath:(id)arg3;
- (void)_wishlistDidChangeNotification:(id)arg1;
- (id)_itemListViewController;
- (void)_reloadChildView;
- (long long)_wishlistState;
- (void)_syncWishlist;
- (void)_reloadWishlist;
- (void)_reloadNavigationBarAnimated:(_Bool)arg1;
- (void)_deleteItemsAtIndexPaths:(id)arg1;
- (id)_wishlist;
- (void)_setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_finishSignInWithResponse:(id)arg1 error:(id)arg2;
- (void)_signInAction:(id)arg1;
- (id)_emptyWishlistView;
- (void)_destroyEmptyWishlistView;
- (void)_toggleEditAction:(id)arg1;
- (_Bool)_isEditingEnabled;
- (void)_finishSyncWithResult:(_Bool)arg1 didChange:(_Bool)arg2 error:(id)arg3;
- (void)_reloadForAccountsChanged;

@end
