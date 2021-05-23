/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMapTable, NSString, SKUIOnboardingAffiliationCirclesViewController, SKUIOnboardingFooterView, SKUIOnboardingProgressView, SKUIPhysicalCirclesTemplateViewElement, SKUIResourceLoader, UIGestureRecognizer;

__attribute__((visibility("hidden")))
@interface SKUIPhysicalCirclesDocumentViewController : SKUIViewController <Swift>

{
    SKUIOnboardingAffiliationCirclesViewController *_circlesViewController;
    SKUIOnboardingFooterView *_footerView;
    NSMapTable *_imageRequests;
    UIGestureRecognizer *_interactivePopGestureRecognizer;
    SKUIOnboardingProgressView *_progressView;
    SKUIResourceLoader *_resourceLoader;
    SKUIPhysicalCirclesTemplateViewElement *_templateElement;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)_affiliationItemsWithCircleItemElements:(id)arg1;
- (void)_footerLeftButtonAction:(id)arg1;
- (void)_footerRightButtonAction:(id)arg1;
- (void)_reloadFooterViewAnimated:(_Bool)arg1;
- (void)_reloadInstructionsView;
- (void)_loadImagesWithReason:(long long)arg1;
- (id)_profileImageElement;
- (id)_leftFooterButtonElement;
- (id)_rightFooterButtonElement;
- (void)_styleAttributedString:(id)arg1 withStyle:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)onboardingCircles:(id)arg1 didRemoveAffiliationItem:(id)arg2;
- (void)onboardingCircles:(id)arg1 didSelectAffiliationItem:(id)arg2 atIndex:(long long)arg3;
- (void)physicalCirclesDOMFeature:(id)arg1 didRequestAnimation:(id)arg2;
- (id)initWithPhysicalCirclesTemplateViewElement:(id)arg1;

@end
