/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, SKUIClientContext, SKUIOverlayContainerViewController, SKUIReportAConcernViewController, SKUIStoreDialogController, UINavigationController, UIPopoverController, UIViewController;

@protocol SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, SKUIModalSourceViewProvider, UINavigationControllerDelegate;

@interface SKUIModalDocumentController : NSObject

{
    SKUIClientContext *_clientContext;
    NSMutableArray *_composeReviewViewControllers;
    id <SKUIModalDocumentDelegate> _delegate;
    SKUIStoreDialogController *_dialogController;
    SKUIReportAConcernViewController *_reportAConcernViewController;
    NSMutableArray *_giftViewControllers;
    id <SKUIModalSourceViewProvider> _modalSourceViewProvider;
    UINavigationController *_overlayNavigationController;
    SKUIOverlayContainerViewController *_overlayViewController;
    id <UINavigationControllerDelegate> _navigationControllerDelegate;
    UIPopoverController *_popoverController;
    UIViewController *_rootViewController;
    NSMutableArray *_stackItems;
    id <SKUIModalDocumentDataSource> _dataSource;
}

@property (nonatomic, readonly) SKUIOverlayContainerViewController *_overlayViewController;
@property (nonatomic, readonly) UINavigationController *_overlayNavigationController;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id <SKUIModalDocumentDataSource> dataSource;
@property (weak, nonatomic) id <SKUIModalDocumentDelegate> delegate;
@property (weak, nonatomic) id <SKUIModalSourceViewProvider> modalSourceViewProvider;
@property (weak, nonatomic) id <UINavigationControllerDelegate> navigationControllerDelegate;
@property (retain, nonatomic) UIViewController *rootViewController;
@property (nonatomic, readonly) NSArray *documents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (id)_presenterViewController;
- (void)pushDocument:(id)arg1 options:(id)arg2;
- (void)replaceDocument:(id)arg1 withDocument:(id)arg2 options:(id)arg3;
- (void)popDocument;
- (void)popToDocument:(id)arg1;
- (_Bool)composeReviewViewController:(id)arg1 shouldSubmitReview:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didFailWithDialog:(id)arg2;
- (void)composeReviewViewController:(id)arg1 didSubmitWithEdit:(_Bool)arg2;
- (void)composeReviewViewControllerDidCancel:(id)arg1;
- (void)giftViewController:(id)arg1 didFinishWithResult:(_Bool)arg2;
- (void)popAllDocuments;
- (void)_presentAlertForDialog:(id)arg1;
- (void)composeReviewViewController:(id)arg1 presentDialog:(id)arg2;
- (void)overlayContainerViewController:(id)arg1 willPopViewController:(id)arg2;
- (void)ensureOverlayNavigationControllerStackConsistencyForNavigationController:(id)arg1;
- (void)presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)setOverlayNavigationController:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)navigationDocumentForNavigationController:(id)arg1;
- (void)_presentOverlayViewControllersFromNavigationController:(id)arg1;
- (void)_popDocument:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendDidFinishIfApplicable;
- (void)_pushCharityDocument:(id)arg1 options:(id)arg2;
- (void)_pushDialogDocument:(id)arg1 options:(id)arg2;
- (void)_pushFamilySetupDocument:(id)arg1 options:(id)arg2;
- (void)_pushGiftDocument:(id)arg1 options:(id)arg2;
- (void)_pushPlaylistDocument:(id)arg1 options:(id)arg2;
- (void)_pushRedeemDocument:(id)arg1 options:(id)arg2;
- (void)_garbageCollectActivityViewController:(id)arg1;
- (void)_pushPopoverStackItem:(id)arg1;
- (void)_pushPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3 options:(id)arg4;
- (void)_pushSheetStackItem:(id)arg1;
- (void)_composeReviewViewControllerDidFinish:(id)arg1 finished:(_Bool)arg2;
- (void)_pushSheetDocument:(id)arg1 viewController:(id)arg2;
- (void)_pushOverlayStackItem:(id)arg1;
- (void)_dismissOverlayControllerWithStackItem:(id)arg1 animated:(_Bool)arg2;
- (void)_promptForStarRating:(id)arg1;
- (void)_unloadDocumentForViewController:(id)arg1;
- (void)_unloadDocumentForPopoverController:(id)arg1;
- (void)_popOverlayStackItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_popPopoverStackItem:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_overlayStackItems;
- (id)_showOverlayContainerViewController;
- (id)_imageForImageViewElement:(id)arg1;
- (id)_modalSourceViewProviderFromStackItems;
- (struct CGRect)_centerRect:(id)arg1 adjust:(_Bool)arg2;
- (void)_presetPopoverSheetDocument:(id)arg1 viewController:(id)arg2 popoverPresentationController:(id)arg3;
- (void)_overlayControllerBackstopAction:(id)arg1;
- (_Bool)_popoverController:(id)arg1 containsStackItem:(id)arg2;
- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(_Bool)arg2;
- (void)unloadDocumentForViewController:(id)arg1;
- (id)navigationDocumentForDocument:(id)arg1;
- (void)_popDocumentSkippingUserInterfaceUpdates;

@end
