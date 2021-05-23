/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HMHTMLDocument, HUWebViewController, NSFileManager, NSString, NSURL, UIButton, UIScrollView, WKWebView;

@interface HUSoftwareUpdateLicenseViewController : UIViewController <Swift>

{
    NSURL *_URL;
    HMHTMLDocument *_document;
    CDUnknownBlockType _agreeHandler;
    CDUnknownBlockType _disagreeHandler;
    UIScrollView *_scrollView;
    UIButton *_retainCopyOfTermsButton;
    NSString *_license;
    NSFileManager *_fileManager;
    HUWebViewController *_webViewController;
}

@property (nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic, readonly) UIButton *retainCopyOfTermsButton;
@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) NSString *license;
@property (retain, nonatomic) NSFileManager *fileManager;
@property (nonatomic, readonly) HUWebViewController *webViewController;
@property (copy, nonatomic, readonly) NSURL *URL;
@property (copy, nonatomic, readonly) HMHTMLDocument *document;
@property (copy, nonatomic) CDUnknownBlockType agreeHandler;
@property (copy, nonatomic) CDUnknownBlockType disagreeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)loadView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)initWithDocument:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)hu_preloadContent;
- (id)_initWithWebViewController:(id)arg1;
- (void)_emailTermsAndConditions:(id)arg1;
- (id)loadLicense;
- (id)_evaluateHeight:(id)arg1;
- (void)_disagreeToTerms:(id)arg1;
- (void)_agreeToTerms:(id)arg1;

@end
