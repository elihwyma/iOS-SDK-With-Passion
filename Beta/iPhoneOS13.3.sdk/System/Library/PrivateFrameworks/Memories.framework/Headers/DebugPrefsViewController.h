/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DebugPrefsViewController : UITableViewController

{
    NSArray *_sections;
    NSMutableDictionary *_extraObjects;
}

@property (retain, nonatomic) NSMutableDictionary *extraObjects;
@property (retain, nonatomic) NSArray *sections;

+ (_Bool)hasDebugPrefs;
+ (_Bool)isDebugPrefs:(id)arg1;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)presentOverViewController:(id)arg1;
- (void)debugPrefsStop:(id)arg1;
- (void)restoreDefaultsInSections:(id)arg1;
- (void)restoreDefaults:(id)arg1;
- (void)loadDebugMenu;
- (void)switchChanged:(id)arg1;
- (void)addAccessory:(id)arg1 forMenuItem:(id)arg2;

@end
