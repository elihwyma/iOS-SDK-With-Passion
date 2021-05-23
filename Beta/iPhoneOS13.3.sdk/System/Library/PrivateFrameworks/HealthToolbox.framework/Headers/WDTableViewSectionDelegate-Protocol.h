/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/Swift-Protocol.h>

@class UITableView, WDProfile;

@protocol WDTableViewSectionDelegate <Swift>

@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) UITableView *tableView;

- (unsigned short)presentViewController:animated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)dismissViewControllerAnimated:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)indexPathForCell: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadSection:animated: /* Error: Ran out of types for this method. */;
- (unsigned short)reloadTable;
- (unsigned short)pushViewController: /* Error: Ran out of types for this method. */;
- (unsigned short)sectionAddedChildViewController: /* Error: Ran out of types for this method. */;

@end
