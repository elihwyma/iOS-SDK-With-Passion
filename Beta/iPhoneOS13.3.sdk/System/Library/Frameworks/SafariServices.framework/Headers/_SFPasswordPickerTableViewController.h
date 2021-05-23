/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFPasswordTableViewController.h>

@class NSIndexPath, NSMutableArray, _SFPasswordPickerTableConfiguration;

@protocol _SFPasswordPickerTableViewControllerDelegate;

@interface _SFPasswordPickerTableViewController : _SFPasswordTableViewController

{
    NSMutableArray *_savedPasswordsMatchingHintStrings;
    NSMutableArray *_savedPasswords;
    NSMutableArray *_matchingPasswords;
    long long _sectionForPasswordsMatchingHintStrings;
    long long _sectionForAllPasswords;
    NSIndexPath *_indexPathOfRowShowingDetailView;
    id <_SFPasswordPickerTableViewControllerDelegate> _delegate;
    _SFPasswordPickerTableConfiguration *_configuration;
}

@property (weak, nonatomic) id <_SFPasswordPickerTableViewControllerDelegate> delegate;
@property (nonatomic, readonly) _SFPasswordPickerTableConfiguration *configuration;

- (id)initWithConfiguration:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (void)_cancel;
- (void)searchPatternDidUpdate;
- (id)_passwordForIndexPath:(id)arg1;
- (void)_updateMatchingPasswords;
- (void)_updateSections;
- (void)_deletePasswordAtIndexPath:(id)arg1;

@end
