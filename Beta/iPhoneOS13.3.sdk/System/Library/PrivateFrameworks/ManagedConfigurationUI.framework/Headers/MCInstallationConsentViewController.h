/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class MCProfile, NSString;

@protocol MCInstallationConsentDelegate;

__attribute__((visibility("hidden")))
@interface MCInstallationConsentViewController : UITableViewController

{
    _Bool _showInstall;
    MCProfile *_profile;
    id <MCInstallationConsentDelegate> _consentDelegate;
}

@property (retain, nonatomic) MCProfile *profile;
@property (weak, nonatomic) id <MCInstallationConsentDelegate> consentDelegate;
@property (nonatomic) _Bool showInstall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)canBeShownFromSuspendedState;
- (void)_installProfile;
- (void)_cancelInstallProfile;

@end
