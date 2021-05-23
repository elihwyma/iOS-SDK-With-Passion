/*
 Image: /System/Library/Frameworks/FileProviderUI.framework/FileProviderUI
 */

#import <FileProviderUI/FPUIAuthenticationTableViewController.h>

@class FPUIAuthenticationSectionDescriptor, NSArray, NSMutableArray, NSString, NSURL, UITextField;

@interface FPUIAuthenticationLandingViewController : FPUIAuthenticationTableViewController

{
    FPUIAuthenticationSectionDescriptor *_recentServersSection;
    NSMutableArray *_recentServersRowDescriptors;
    UITextField *_serverInputTextField;
    NSURL *_initialURL;
    NSURL *_sanitizedURL;
    NSURL *_initialUsername;
    NSArray *_recentServers;
    NSURL *_initialConnectionURL;
}

@property (copy, nonatomic) NSURL *initialConnectionURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithURL:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)_canMoveToNextStep;
- (id)defaultRightBarButtonItem;
- (void)setupTableViewSections;
- (void)authenticationDelegate:(id)arg1 didEncounterError:(id)arg2;
- (void)removeServerWithRepresentation:(id)arg1;
- (void)_disectURLToComponents:(id)arg1;
- (void)_updateNextStep;
- (void)_connect:(id)arg1;
- (void)_showRecentServersSectionWithRecentServers:(id)arg1 rowAnimation:(long long)arg2;
- (void)_connectToServer:(id)arg1;
- (void)_transitionUIStateToConnecting;

@end
