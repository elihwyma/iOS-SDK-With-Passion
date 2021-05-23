/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewController.h>

@interface HKTableViewController : UITableViewController

{
    _Bool _useInsetStyling;
}

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithUsingInsetStyling:(_Bool)arg1;

@end
