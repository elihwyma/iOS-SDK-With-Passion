/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class NSArray, NSPredicate, NSString, UIFont, WDProfile;

__attribute__((visibility("hidden")))
@interface WDStoredDataByCategoryViewController : HKTableViewController

{
    _Bool _queryReturned;
    WDProfile *_profile;
    NSArray *_capturedSampleTypes;
    UIFont *_bodyFont;
    NSArray *_savedCategories;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) NSArray *capturedSampleTypes;
@property (retain) NSArray *savedCategories;
@property (nonatomic) _Bool queryReturned;
@property (retain, nonatomic) WDProfile *profile;
@property (nonatomic, readonly) NSPredicate *storedDataPredicate;
@property (nonatomic, readonly) NSString *storedDataDisplayName;
@property (nonatomic, readonly) _Bool shouldShowDeleteAllDataButton;

- (id)init;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_displayTypeStringsChanged:(id)arg1;
- (void)deleteAllStoredData;
- (void)handleSamplesQueryResults:(id)arg1;
- (id)reduceCategoriesForCapturedSampleTypes:(id)arg1;
- (void)selectSourceStoredDataTableViewCell:(id)arg1;
- (void)presentDeleteConfirmation;

@end
