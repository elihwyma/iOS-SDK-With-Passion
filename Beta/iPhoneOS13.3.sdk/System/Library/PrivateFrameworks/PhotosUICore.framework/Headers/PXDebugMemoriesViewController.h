/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, PHMemory, UISegmentedControl, UITableView;

@interface PXDebugMemoriesViewController : UIViewController

{
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHMemory *_sourceMemory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)_debugDictionary;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_setupWithDictionary:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_closeAction:(id)arg1;
- (id)initWithMemory:(id)arg1 memoryInfo:(id)arg2;

@end
