/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class WKWebView;

@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController

{
    _Bool _isFamilyAndFriendsConsent;
    WKWebView *_consentView;
    id <HUFeedbackConsentViewControllerDelegate> _consentDelegate;
}

@property (retain, nonatomic) WKWebView *consentView;
@property (nonatomic) _Bool isFamilyAndFriendsConsent;
@property (retain, nonatomic) id <HUFeedbackConsentViewControllerDelegate> consentDelegate;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)viewDidLoad;
- (void)updateViewConstraints;
- (id)htmlString;
- (id)initWithConsentDelegate:(id)arg1;
- (void)didDeclineConsent;
- (void)didAcceptConsent;
- (id)consentFormFilePath;

@end
