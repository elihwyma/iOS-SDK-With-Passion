/*
 Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

#import <UIKit/UITableViewController.h>

@class MCUIProfile, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCProfileDetailsViewController : UITableViewController

{
    _Bool _showTitleIfOnlyOneSection;
    _Bool _viewControllerCanPop;
    int _mode;
    double _tableViewBottomInset;
    MCUIProfile *_UIProfile;
    NSArray *_sections;
}

@property (retain, nonatomic) MCUIProfile *UIProfile;
@property (nonatomic) _Bool showTitleIfOnlyOneSection;
@property (nonatomic) _Bool viewControllerCanPop;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int mode;
@property (nonatomic) double tableViewBottomInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

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
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didReceiveMemoryWarning;
- (_Bool)canBeShownFromSuspendedState;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_profileChanged:(id)arg1;
- (void)setProfileDetailsMode:(int)arg1;
- (void)reloadSectionArray;
- (void)setUIProfile:(id)arg1 mode:(int)arg2;

@end
