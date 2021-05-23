/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, PSListController, PSSpecifier, UISearchController;

@interface PSTimeZoneController : UITableViewController

{
    NSArray *_cities;
    PSSpecifier *_specifier;
    PSListController *_parentController;
    UISearchController *_searchController;
}

@property (retain, nonatomic) UISearchController *searchController;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (weak, nonatomic) PSListController *parentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)setTimeZone:(id)arg1;

- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (id)currentTimeZoneCityName;

@end
