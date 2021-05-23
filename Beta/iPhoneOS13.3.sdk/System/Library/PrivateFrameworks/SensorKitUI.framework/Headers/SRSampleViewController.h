/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@interface SRSampleViewController : UITableViewController

{
    NSArray *_items;
    NSString *_note;
}

@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *note;

- (id)init;
- (void)dealloc;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)prepareEndRowWithText:(id)arg1 detailText:(id)arg2;
- (id)sortedKeysForDictionary:(id)arg1;
- (id)prepareExtendedRowWithText:(id)arg1;

@end
