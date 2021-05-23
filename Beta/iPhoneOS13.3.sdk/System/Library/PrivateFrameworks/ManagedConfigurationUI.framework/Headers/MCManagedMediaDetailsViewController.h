/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class MCBook, MCUIProfile, NSString;

__attribute__((visibility("hidden")))
@interface MCManagedMediaDetailsViewController : UITableViewController

{
    MCUIProfile *_UIProfile;
    MCBook *_managedBook;
}

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (retain, nonatomic) MCBook *managedBook;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_setup;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (id)initWithUIProfile:(id)arg1 managedBook:(id)arg2;

@end
