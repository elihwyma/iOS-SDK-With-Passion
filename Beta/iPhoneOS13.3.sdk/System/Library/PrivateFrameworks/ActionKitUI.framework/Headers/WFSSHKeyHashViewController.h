/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <UIKit/UITableViewController.h>

@class NSString, WFTableDataSource;

__attribute__((visibility("hidden")))
@interface WFSSHKeyHashViewController : UITableViewController

{
    NSString *_hashString;
    WFTableDataSource *_dataSource;
}

@property (copy, nonatomic, readonly) NSString *hashString;
@property (nonatomic, readonly) WFTableDataSource *dataSource;

- (void)viewDidLoad;
- (id)initWithHashString:(id)arg1 title:(id)arg2;

@end
