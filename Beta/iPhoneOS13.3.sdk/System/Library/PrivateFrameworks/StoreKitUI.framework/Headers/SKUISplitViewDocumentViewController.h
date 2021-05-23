/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSString, SKUINavigationDocumentController, SKUISplitViewTemplateElement, UISplitViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISplitViewDocumentViewController : SKUIViewController

{
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
    SKUINavigationDocumentController *_leftNavigationDocumentController;
    SKUINavigationDocumentController *_rightNavigationDocumentController;
}

@property (retain, nonatomic) SKUINavigationDocumentController *leftNavigationDocumentController;
@property (retain, nonatomic) SKUINavigationDocumentController *rightNavigationDocumentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)loadView;
- (id)_defaultBackgroundColor;
- (void)documentDidUpdate:(id)arg1;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;
- (void)_reloadSplitViewControllers;
- (_Bool)_isFullyPopulated;
- (void)_skui_endDelayingPresentation;
- (void)navigationDocumentStackDidChange:(id)arg1;

@end
