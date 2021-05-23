/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class PSSpecifier, STCommunicationLimits;

__attribute__((visibility("hidden")))
@interface STCommunicationLimitsScreenTimeDetailListController : PSListController

{
    _Bool _allowIntroductionsEnabled;
    PSSpecifier *_allowedCommunicationGroupSpecifier;
    PSSpecifier *_allowEveryoneSpecifier;
    PSSpecifier *_allowContactsOnlySpecifier;
    STCommunicationLimits *_communicationLimits;
}

@property (retain) PSSpecifier *allowedCommunicationGroupSpecifier;
@property (retain) PSSpecifier *allowEveryoneSpecifier;
@property (retain) PSSpecifier *allowContactsOnlySpecifier;
@property _Bool allowIntroductionsEnabled;
@property (retain) STCommunicationLimits *communicationLimits;

+ (void)showCompatibilityAlertIfNeededWithCoordinator:(id)arg1 presentingViewController:(id)arg2;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willResignActive;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (void)_didFinishEditingCommunicationLimit;
- (void)_setAllowIntroductions:(id)arg1 specifier:(id)arg2;
- (id)_allowIntroductions:(id)arg1;

@end
