/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, UIBarButtonItem, _SFPerSitePreferencesVendor;

@interface _SFPerSitePreferencesPopoverViewController : UITableViewController

{
    NSString *_domain;
    _SFPerSitePreferencesVendor *_perSitePreferencesVendor;
    _Bool _shouldShowSecurePagePreferences;
    NSMutableDictionary *_preferenceToValueCache;
    NSArray *_preferencesBySections;
    UIBarButtonItem *_doneButton;
    NSIndexPath *_expandedRowIndexPath;
    long long _numberOfValuesInExpandedPreference;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_done:(id)arg1;
- (void)switchTableViewCell:(id)arg1 didChangeSwitchState:(_Bool)arg2;
- (void)_initializePreferences;
- (id)_generalPageSection;
- (id)_securePageSection;
- (id)_indexPathForView:(id)arg1;
- (id)_preferenceRowIndexPathForCellAtIndexPath:(id)arg1;
- (id)_preferenceAtIndexPath:(id)arg1;
- (void)_setPreferenceValue:(id)arg1 forPreference:(id)arg2;
- (void)_didRetrieveValue:(id)arg1 forPreference:(id)arg2;
- (id)initWithDomain:(id)arg1 shouldShowSecurePreferences:(_Bool)arg2 perSitePreferencesVendor:(id)arg3;
- (void)reloadPreferences;
- (void)_setPreferenceValueIndex:(long long)arg1 forView:(id)arg2;

@end
