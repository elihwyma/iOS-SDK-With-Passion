/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

@class NSURL, SKUIApplicationLicensePage, SSVLoadURLOperation, UIWebView;

@interface SKUIApplicationLicenseViewController : SKUIViewController

{
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)reloadData;
- (id)initWithLicenseAgreementURL:(id)arg1;
- (void)_displayPage:(id)arg1 error:(id)arg2;
- (id)initWithLicenseAgreementPage:(id)arg1;

@end
