/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIViewController.h>

@class NSMutableDictionary, NSString, NSURL, STLockoutViewController;

@protocol _SFDigitalHealthViewControllerDelegate;

@interface _SFDigitalHealthViewController : UIViewController

{
    NSURL *_url;
    STLockoutViewController *_currentLockOutViewController;
    NSMutableDictionary *_urlsToLockOutViewControllers;
    id <_SFDigitalHealthViewControllerDelegate> _digitalHealthViewControllerDelegate;
    double _additionalVerticalSafeAreaMargin;
}

@property (weak, nonatomic) id <_SFDigitalHealthViewControllerDelegate> digitalHealthViewControllerDelegate;
@property (nonatomic) double additionalVerticalSafeAreaMargin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)lockoutViewControllerDidFinishDismissing:(id)arg1;
- (id)_urlStringForLockOutGivenURL:(id)arg1;
- (void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)arg1;
- (id)showLockOutForURL:(id)arg1;
- (void)hideLockOutForURL:(id)arg1;

@end
