/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKTableViewController.h>

@class NSArray;

@protocol _HKEmergencyContactRelationshipPickerDelegate;

@interface _HKEmergencyContactRelationshipPicker : HKTableViewController

{
    NSArray *_tokens;
    NSArray *_labels;
    id <_HKEmergencyContactRelationshipPickerDelegate> _delegate;
}

@property (weak, nonatomic) id <_HKEmergencyContactRelationshipPickerDelegate> delegate;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_cancelTapped:(id)arg1;

@end
