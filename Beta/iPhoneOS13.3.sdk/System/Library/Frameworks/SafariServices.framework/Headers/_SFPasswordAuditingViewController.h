/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFPasswordTableViewController.h>

@class NSArray, NSString, WBSAutoFillQuirksManager, WBSSavedPasswordAuditor, WBSSavedPasswordStore;

@protocol _SFPasswordAuditingViewControllerDelegate;

@interface _SFPasswordAuditingViewController : _SFPasswordTableViewController

{
    WBSAutoFillQuirksManager *_autoFillQuirksManager;
    WBSSavedPasswordAuditor *_savedPasswordAuditor;
    WBSSavedPasswordStore *_savedPasswordStore;
    NSArray *_reusedPasswords;
    id <_SFPasswordAuditingViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <_SFPasswordAuditingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithSiteMetadataManager:(id)arg1 autoFillQuirksManager:(id)arg2;
- (void)passwordDetailViewControllerDidUpdate:(id)arg1;
- (void)_reloadSavedPasswords;

@end
