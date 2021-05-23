/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UITableViewController.h>

@class SFContactAutoFillPropertyValues;

__attribute__((visibility("hidden")))
@interface SFContactAutoFillDetailViewController : UITableViewController

{
    SFContactAutoFillPropertyValues *_propertyValues;
}

- (void)viewDidLoad;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithPropertyValues:(id)arg1;

@end
