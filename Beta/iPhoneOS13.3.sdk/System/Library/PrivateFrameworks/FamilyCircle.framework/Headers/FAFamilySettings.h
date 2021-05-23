/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class FAFamilySetupPrompter, NSString, SSAccount, UIViewController;

@interface FAFamilySettings : FAFamilyCircleRequest

{
    FAFamilySetupPrompter *_prompter;
    FAFamilySettings *_retainedSelf;
    _Bool _isFirstRun;
    UIViewController *_presentingViewController;
    SSAccount *_iTunesAccount;
}

@property UIViewController *presentingViewController;
@property (retain) SSAccount *iTunesAccount;
@property _Bool isFirstRun;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)launchiCloudFamilySettings;
- (void)familySetupPrompterDidFinish:(id)arg1;
- (void)_launchPrefsUsingDaemon;

@end
