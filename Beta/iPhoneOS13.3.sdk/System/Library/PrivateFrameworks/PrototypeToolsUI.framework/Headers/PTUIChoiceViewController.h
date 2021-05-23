/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <UIKit/UITableViewController.h>

@class NSIndexPath, NSString, PTChoiceRow;

@interface PTUIChoiceViewController : UITableViewController

{
    NSIndexPath *_valueIndexPath;
    PTChoiceRow *_row;
}

@property (retain, nonatomic) PTChoiceRow *row;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)rowDidChangeValue:(id)arg1;
- (void)rowDidReload:(id)arg1;
- (void)_checkAppropriateCell;
- (id)initWithPresentingRow:(id)arg1;

@end
