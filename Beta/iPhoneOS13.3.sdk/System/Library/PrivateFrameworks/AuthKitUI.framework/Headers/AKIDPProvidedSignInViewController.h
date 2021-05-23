/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UIViewController.h>

@class AKIDPHandler, NSString, UIImageView, UILabel, UIStackView, WKWebView;

@interface AKIDPProvidedSignInViewController : UIViewController

{
    WKWebView *_webView;
    AKIDPHandler *_idpHandler;
    UIImageView *_secureIconView;
    UILabel *_titleLabel;
    UIStackView *_titleStackView;
}

@property (retain, nonatomic) AKIDPHandler *idpHandler;
@property (retain, nonatomic) UIImageView *secureIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *titleStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) WKWebView *webView;

- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setupTitleView;
- (void)_setNavigationTitle:(id)arg1;
- (void)_cancelBarButtonPressed:(id)arg1;
- (void)IDPHandler:(id)arg1 didStartLoadingPageInWebView:(id)arg2;
- (void)IDPHandler:(id)arg1 didFinishLoadingPageInWebView:(id)arg2;
- (id)initWithIDPHandler:(id)arg1;

@end
