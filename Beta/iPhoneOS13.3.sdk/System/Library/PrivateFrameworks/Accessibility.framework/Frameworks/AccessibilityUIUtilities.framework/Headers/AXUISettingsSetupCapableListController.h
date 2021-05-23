/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Preferences/PSListController.h>

@interface AXUISettingsSetupCapableListController : PSListController

{
    _Bool _inSetup;
}

@property (nonatomic) _Bool inSetup;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)createWelcomeControllerWithAXSettingsController:(id)arg1 title:(id)arg2;
- (void)filterBuddy:(id)arg1;
- (void)setAllSpecifiersUnsearchable:(id)arg1;

@end
