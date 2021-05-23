/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary, NSString, PHSuggestion, UISegmentedControl, UITableView;

@interface PXSuggestionDebugViewController : UIViewController

{
    UISegmentedControl *_segmentedControl;
    UITableView *_tableView;
    NSArray *_sectionTitles;
    NSDictionary *_tableContent;
    NSDictionary *_sourceDictionary;
    PHSuggestion *_suggestion;
    NSDictionary *_suggestionInfo;
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
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_setupWithDictionary:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (void)_sendByEmailAction:(id)arg1;
- (void)_closeAction:(id)arg1;
- (id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;
- (id)infoSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2 compact:(_Bool)arg3;
- (id)existingSectionsWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;

@end
