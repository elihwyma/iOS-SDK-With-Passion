/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <CommunicationsSetupUI/CNFRegSignInController.h>

@class AKTapToSignInViewController, CNFRegSigninLearnMoreView, NSString;

@interface CNFRegSplashSignInController : CNFRegSignInController

{
    CNFRegSigninLearnMoreView *_signInView;
    AKTapToSignInViewController *_akSignInVC;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)_handleTimeout;
- (void)tapToSignInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (id)specifierList;
- (id)_existingLearnMoreViewForSpecifier:(id)arg1;
- (id)_existingLearnMoreViewForSection:(long long)arg1;
- (id)_controllerToPresentOn;

@end
