/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, PHAssetCollection, UISegmentedControl, UITableView;

@interface PXCMMDebugSharingSuggestionViewController : UIViewController

{
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    PHAssetCollection *_sourceSuggestion;
}

@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) PHAssetCollection *sourceSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)generateSectionTitles:(out id *)arg1 andTableContent:(out id *)arg2 forIndex:(long long)arg3 sourceSuggestion:(id)arg4 sourceDictionary:(id)arg5;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)_debugDictionary;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_switchLogsAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_closeAction:(id)arg1;
- (id)initWithSharingSuggestion:(id)arg1;

@end
