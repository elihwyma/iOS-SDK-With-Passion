/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class MCUIAppSigner, NSObject, UIAlertController;

@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface MCAppSignerViewController : UITableViewController

{
    _Bool _isNetworkReachable;
    MCUIAppSigner *_appSigner;
    UIAlertController *_activeAlertController;
    NSObject<OS_dispatch_group> *_trustActionGroup;
}

@property (retain, nonatomic) UIAlertController *activeAlertController;
@property (nonatomic) _Bool isNetworkReachable;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *trustActionGroup;
@property (retain, nonatomic) MCUIAppSigner *appSigner;

- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_cancelActiveAlertController:(_Bool)arg1;
- (id)initWithAppSigner:(id)arg1;
- (void)effectiveSettingsChanged:(id)arg1;
- (void)appSignerApplicationsChanged:(id)arg1;
- (void)networkReachabilityChanged:(id)arg1;
- (_Bool)_isEnterpriseAppTrustAllowed;
- (void)refreshAppSigner;
- (void)_presentNetworkRequiredAlert;
- (void)_trustActionGroupVerifyAppsAndTrustSigner:(_Bool)arg1;
- (_Bool)_isAppRemovalAllowed;
- (_Bool)_isShowingTrustUntrustRowAllowed;
- (void)_presentAppRemovalAlert;
- (void)_presentTrustAlert;
- (void)_presentVerifyAppAlert;
- (void)trustAppSigner;
- (void)verifyApps;
- (void)removeAppSignerApps;

@end
