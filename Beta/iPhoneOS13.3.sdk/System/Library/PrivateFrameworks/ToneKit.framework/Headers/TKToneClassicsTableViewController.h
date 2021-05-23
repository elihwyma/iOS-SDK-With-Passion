/*
 Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

#import <UIKit/UITableViewController.h>

@class NSString, TKTonePickerItem;

@protocol TKTonePickerTableViewControllerHelper;

@interface TKToneClassicsTableViewController : UITableViewController

{
    TKTonePickerItem *_classicTonesHeaderItem;
    id <TKTonePickerTableViewControllerHelper> _tonePickerTableViewControllerHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <TKTonePickerTableViewControllerHelper> tonePickerTableViewControllerHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)canBeShownFromSuspendedState;
- (void)layoutMarginsDidChangeInTonePickerTableView:(id)arg1;
- (void)separatorColorDidChangeInTonePickerTableView:(id)arg1;
- (void)didReloadTones;
- (void)didUpdateCheckedStatus:(_Bool)arg1 ofToneClassicsPickerItem:(id)arg2;
- (void)didUpdateDetailText:(id)arg1 ofToneClassicsPickerItem:(id)arg2;
- (id)initWithClassicTonesHeaderItem:(id)arg1;

@end
