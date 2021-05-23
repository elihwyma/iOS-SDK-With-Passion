/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <UIKit/UIViewController.h>

@class FPUIAuthenticationLandingViewController, NSURL;

@protocol FPUIAuthenticationDelegate;

@interface FPUIAuthenticationViewController : UIViewController

{
    id <FPUIAuthenticationDelegate> _authenticationDelegate;
    NSURL *_initialConnectionURL;
    FPUIAuthenticationLandingViewController *_landingViewController;
}

@property (weak) FPUIAuthenticationLandingViewController *landingViewController;
@property (weak, nonatomic) id <FPUIAuthenticationDelegate> authenticationDelegate;
@property (copy, nonatomic) NSURL *initialConnectionURL;

- (void)viewDidLoad;
- (id)initWithServerURL:(id)arg1;

@end
