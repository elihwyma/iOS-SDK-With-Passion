/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFActionDrawerResultsViewController.h>

@class WFActionDrawerResultsController;

@interface WFActionDrawerFavoritesViewController : WFActionDrawerResultsViewController

{
    WFActionDrawerResultsController *_actionDrawerResultsController;
}

@property (retain, nonatomic) WFActionDrawerResultsController *actionDrawerResultsController;

- (void)dealloc;
- (id)state;
- (_Bool)moveToState:(id)arg1 animated:(_Bool)arg2;
- (id)initWithTitle:(id)arg1 actionDrawerResultsController:(id)arg2;
- (void)updateResults;

@end
