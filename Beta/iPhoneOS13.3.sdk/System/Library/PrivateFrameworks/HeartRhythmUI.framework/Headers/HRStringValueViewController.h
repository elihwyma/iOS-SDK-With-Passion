/*
 Image: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
 */

#import <HealthUI/HKTableViewController.h>

@class NSString;

@interface HRStringValueViewController : HKTableViewController

{
    NSString *_value;
}

@property (copy, nonatomic, readonly) NSString *value;

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)initWithStringValue:(id)arg1;

@end
