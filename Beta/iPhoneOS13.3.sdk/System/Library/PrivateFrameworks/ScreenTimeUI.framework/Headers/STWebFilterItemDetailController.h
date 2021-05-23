/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <Preferences/PSListController.h>

@class NSString, STRestrictionItem, STWebFilterDetailController;

@protocol STContentPrivacyViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STWebFilterItemDetailController : PSListController

{
    _Bool _isNamedSite;
    STRestrictionItem *_restriction;
    NSString *_pageURL;
    NSString *_pageTitle;
    id <STContentPrivacyViewModelCoordinator> _coordinator;
    STWebFilterDetailController *_parentWebFilterController;
}

@property (weak) STWebFilterDetailController *parentWebFilterController;
@property (retain, nonatomic) STRestrictionItem *restriction;
@property (nonatomic) _Bool isNamedSite;
@property (copy, nonatomic) NSString *pageURL;
@property (copy, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) id <STContentPrivacyViewModelCoordinator> coordinator;

- (id)init;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)willResignActive;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)specifiers;
- (_Bool)shouldSelectResponderOnAppearance;
- (void)saveFilterItem;

@end
