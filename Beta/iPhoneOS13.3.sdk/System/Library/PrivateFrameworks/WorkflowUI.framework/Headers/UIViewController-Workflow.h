/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class WFDrawerController, WFDrawerItem;

@interface UIViewController (Workflow)

@property (nonatomic, readonly) struct UIEdgeInsets wf_contentLayoutMargins;
@property (weak, nonatomic, readonly) WFDrawerController *wf_drawerController;
@property (nonatomic, readonly) WFDrawerItem *wf_drawerItem;

- (_Bool)wf_showSearchBarAboveScrollView:(id)arg1;
- (void)wf_applyContentLayoutMarginsToNavigationController;
- (void)wf_setDrawerController:(id)arg1;
- (void)wf_setDrawerItem:(id)arg1;

@end
