/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewController.h>

@class HUGridLayoutOptions, NSArray, NSString;

@protocol HUPrototypeLayoutOptionsEditorViewControllerDelegate;

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController

{
    HUGridLayoutOptions *_layoutOptions;
    id <HUPrototypeLayoutOptionsEditorViewControllerDelegate> _delegate;
    NSArray *_layoutOptionsKeys;
}

@property (retain, nonatomic) NSArray *layoutOptionsKeys;
@property (retain, nonatomic) HUGridLayoutOptions *layoutOptions;
@property (weak, nonatomic) id <HUPrototypeLayoutOptionsEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)_done:(id)arg1;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (id)_viewSizeSubclassDescription;

@end
