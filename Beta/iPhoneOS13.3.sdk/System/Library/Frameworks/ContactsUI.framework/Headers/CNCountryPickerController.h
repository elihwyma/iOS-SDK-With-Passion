/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UINavigationController.h>

@class NSArray, NSIndexPath, NSString, UILocalizedIndexedCollation, UITableViewController;

@protocol CNCountryPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNCountryPickerController : UINavigationController

{
    NSString *_selectedCountryCode;
    UITableViewController *_tableViewController;
    UILocalizedIndexedCollation *_collation;
    NSArray *_countries;
    NSArray *_sections;
    NSIndexPath *_selectedIndexPath;
}

@property (retain, nonatomic) UITableViewController *tableViewController;
@property (retain, nonatomic) UILocalizedIndexedCollation *collation;
@property (copy, nonatomic) NSArray *countries;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) NSString *selectedCountryCode;
@property (weak, nonatomic) id <CNCountryPickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)windowDidRotate:(id)arg1;
- (void)cancelPicker:(id)arg1;
- (void)_loadCountryCodes;
- (void)_configureSections;

@end
