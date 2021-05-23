/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIView.h>

@class BPSMultipleWatchMigrationPickerTableView, NSArray, NSMutableDictionary, NSString;

@interface BPSMultipleWatchMigrationView : UIView

{
    NSArray *_migratableDevices;
    unsigned long long _style;
    BPSMultipleWatchMigrationPickerTableView *_devicesTable;
    NSMutableDictionary *_selectedStates;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) BPSMultipleWatchMigrationPickerTableView *devicesTable;
@property (retain, nonatomic) NSMutableDictionary *selectedStates;
@property (retain, nonatomic) NSArray *migratableDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 andStyle:(unsigned long long)arg2;
- (id)selectedMigrationDevices;
- (double)tableHeight;

@end
