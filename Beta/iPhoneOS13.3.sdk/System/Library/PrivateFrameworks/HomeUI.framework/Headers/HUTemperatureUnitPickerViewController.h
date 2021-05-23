/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewController.h>

#import <HomeUI/Swift-Protocol.h>

@class HFSimpleItemManager, NSString;

@interface HUTemperatureUnitPickerViewController : UITableViewController <Swift>

{
    HFSimpleItemManager *_itemManager;
}

@property (retain, nonatomic) HFSimpleItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)_controlItem;
- (void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2;
- (id)initWithUnitItem:(id)arg1;
- (long long)_tableRowToTemperatureUnit:(unsigned long long)arg1;

@end
