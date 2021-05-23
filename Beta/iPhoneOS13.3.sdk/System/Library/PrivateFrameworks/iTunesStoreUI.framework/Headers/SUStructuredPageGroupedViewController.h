/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUStructuredPageViewController.h>

@class SULoadingView;

@interface SUStructuredPageGroupedViewController : SUStructuredPageViewController

{
    SULoadingView *_loadingView;
}

- (id)init;
- (void)dealloc;
- (id)itemAtIndexPath:(id)arg1;
- (void)setSkLoading:(_Bool)arg1;
- (id)newNoItemsOverlayLabel;
- (_Bool)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;
- (_Bool)purchaseItemAtIndexPath:(id)arg1;
- (_Bool)_addPurchaseBatch:(id)arg1 forIndexPath:(id)arg2;
- (void)_performPurchaseAnimationForIndexPath:(id)arg1;

@end
