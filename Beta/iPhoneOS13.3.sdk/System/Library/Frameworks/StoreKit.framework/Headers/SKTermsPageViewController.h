/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <UIKit/UIViewController.h>

@class NSString, UINavigationBar, UIToolbar, UIWebView;

@protocol SKTermsPageViewControllerDelegate;

@interface SKTermsPageViewController : UIViewController

{
    UINavigationBar *_navbar;
    NSString *_terms;
    UIToolbar *_toolbar;
    UIWebView *_webview;
    id <SKTermsPageViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SKTermsPageViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (long long)positionForBar:(id)arg1;
- (unsigned long long)edgesForExtendedLayout;
- (void)_dismissViewController;
- (id)initWithTerms:(id)arg1;
- (id)_markupTermsWithHTML:(id)arg1;
- (void)_loadSubviews;
- (void)_dismissViewControllerAnimated:(_Bool)arg1;
- (void)_dismissViewControllerAnimated:(_Bool)arg1 withAcceptance:(_Bool)arg2;
- (void)_buttonAccept:(id)arg1;
- (void)_buttonDecline:(id)arg1;

@end
