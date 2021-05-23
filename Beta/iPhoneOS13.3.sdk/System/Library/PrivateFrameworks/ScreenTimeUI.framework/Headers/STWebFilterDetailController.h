/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSObject, STContentPrivacyMediaRestrictionsDetailController;

@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STWebFilterDetailController : PSListController

{
    NSObject<STContentPrivacyViewModelCoordinator> *_coordinator;
    STContentPrivacyMediaRestrictionsDetailController *_parentMediaRestrictionsController;
}

@property (weak) STContentPrivacyMediaRestrictionsDetailController *parentMediaRestrictionsController;
@property (retain, nonatomic) NSObject<STContentPrivacyViewModelCoordinator> *coordinator;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willResignActive;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (id)getItemSpecifierValue:(id)arg1;
- (id)groupSpecifierWithConfiguration:(id)arg1 key:(id)arg2 footerText:(id)arg3 radio:(_Bool)arg4;
- (id)listItemSpecifierWithGroup:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)_listItemSpecifiersForSitesGroup:(id)arg1;
- (void)addSite:(id)arg1;
- (id)_addButtonSpecifierWithGroup:(id)arg1 action:(SEL)arg2;
- (id)_listItemSpecifiersForNamedSitesGroup:(id)arg1;
- (void)addNamedSite:(id)arg1;
- (void)updateParent;
- (void)saveRemovingItem:(id)arg1 value:(id)arg2;
- (void)saveItemValue:(id)arg1 specifier:(id)arg2;

@end
