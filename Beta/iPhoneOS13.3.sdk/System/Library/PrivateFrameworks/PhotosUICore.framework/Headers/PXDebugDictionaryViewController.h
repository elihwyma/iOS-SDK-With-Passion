/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, UISegmentedControl, UITableView;

@interface PXDebugDictionaryViewController : UIViewController

{
    NSDictionary *_debugDictionary;
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
}

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sectionTitles;
@property (retain, nonatomic) NSDictionary *tableContent;
@property (nonatomic, readonly) NSDictionary *debugDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)_switchLogsAction:(id)arg1;
- (void)_closeAction:(id)arg1;
- (id)initWithDebugDictionary:(id)arg1;
- (id)segmentedTitles;
- (void)_updateWithSegmentedTitle:(id)arg1;
- (id)_flattenDictionary:(id)arg1;
- (id)_sanitizedTextForTitle:(id)arg1 value:(id)arg2;

@end
