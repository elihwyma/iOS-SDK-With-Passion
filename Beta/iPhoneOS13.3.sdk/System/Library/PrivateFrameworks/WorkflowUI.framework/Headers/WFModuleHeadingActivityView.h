/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivityIndicatorView.h>

@class NSString, WFAction;

@interface WFModuleHeadingActivityView : UIActivityIndicatorView

{
    WFAction *_action;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)actionRunningStateDidChange:(id)arg1;

@end
