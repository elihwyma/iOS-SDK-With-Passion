/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <TVMLKit/_TVBgImageLoadingViewController.h>

@class IKViewElement, UIScrollView, VUIUpsellOfferTransactionView, VUIUpsellOfferView;

__attribute__((visibility("hidden")))
@interface VUIUpsellOfferViewController : _TVBgImageLoadingViewController

{
    IKViewElement *_viewElement;
    VUIUpsellOfferView *_upsellView;
    UIScrollView *_scrollView;
    VUIUpsellOfferTransactionView *_transactionView;
}

@property (retain, nonatomic) IKViewElement *viewElement;
@property (retain, nonatomic) VUIUpsellOfferView *upsellView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) VUIUpsellOfferTransactionView *transactionView;

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateWithViewElement:(id)arg1;
- (void)_iOS_updateViews;

@end
