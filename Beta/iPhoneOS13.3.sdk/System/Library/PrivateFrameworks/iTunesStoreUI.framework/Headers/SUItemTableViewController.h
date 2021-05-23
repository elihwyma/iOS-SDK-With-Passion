/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUTableViewController.h>

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController

{
    SUDocumentInteractionSession *_documentInteractionSession;
}

- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)reloadData;
- (id)itemAtIndexPath:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_touchCaptureAction:(id)arg1;
- (void)itemOfferButtonAction:(id)arg1;
- (void)_purchasedItemSetChangedNotification:(id)arg1;
- (void)_removeTouchCaptureView;
- (void)_showPurchaseConfirmationForButton:(id)arg1;
- (void)_hidePurchaseConfirmationForButton:(id)arg1;
- (_Bool)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2;
- (void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)purchaseItemAtIndexPath:(id)arg1;
- (id)_preferredApplicationFromCandidates:(id)arg1;
- (void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_tableCellForButton:(id)arg1;

@end
