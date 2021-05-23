/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@protocol MCInstallationWarningDelegate;

__attribute__((visibility("hidden")))
@interface MCInstallationWarningViewController : UITableViewController

{
    _Bool _isMDMInstall;
    NSArray *_warnings;
    id <MCInstallationWarningDelegate> _warningDelegate;
}

@property (nonatomic) _Bool isMDMInstall;
@property (retain, nonatomic) NSArray *warnings;
@property (weak, nonatomic) id <MCInstallationWarningDelegate> warningDelegate;
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
- (void)_confirmInstallProfileIfNeeded;

@end
