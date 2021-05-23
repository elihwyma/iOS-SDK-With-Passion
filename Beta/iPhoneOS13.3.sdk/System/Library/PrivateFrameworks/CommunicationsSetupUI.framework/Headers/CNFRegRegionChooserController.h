/*
 Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, PSRootController, PSSpecifier, UISearchController, UIViewController;

@protocol CNFRegRegionChooserDelegate, PSController;

@interface CNFRegRegionChooserController : UITableViewController

{
    NSString *_selectedRegionID;
    NSArray *_regionList;
    NSArray *_filteredRegionList;
    id <CNFRegRegionChooserDelegate> _delegate;
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
    UISearchController *_searchController;
}

@property (retain, nonatomic) NSArray *regionList;
@property (retain, nonatomic) NSArray *filteredRegionList;
@property (retain, nonatomic) NSString *selectedRegionID;
@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) id <CNFRegRegionChooserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)specifier;
- (void)suspend;
- (void)handleURL:(id)arg1;
- (void)loadView;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (void)willBecomeActive;
- (void)willResignActive;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)willPresentSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (id)readPreferenceValue:(id)arg1;
- (_Bool)canBeShownFromSuspendedState;
- (void)setParentController:(id)arg1;
- (id)parentController;
- (void)setRootController:(id)arg1;
- (id)rootController;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)didWake;
- (void)statusBarWillAnimateByHeight:(double)arg1;
- (id)initWithRegionList:(id)arg1 selectedRegionID:(id)arg2;
- (id)drillDownControllerList;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (void)_drillDownControllersWithArray:(id)arg1;
- (void)_selectRegionID:(id)arg1;
- (void)_selectRegionList:(id)arg1;
- (void)_hideTableViewCells;
- (void)_showTableViewCells;

@end
