/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UITableViewController.h>

@class WFComplicationManagerResultsController;

@interface WFComplicationManagerViewController : UITableViewController

{
    WFComplicationManagerResultsController *_resultsController;
}

@property (nonatomic, readonly) WFComplicationManagerResultsController *resultsController;

- (id)init;
- (void)loadView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
