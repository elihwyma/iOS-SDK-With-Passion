/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFAction;

@protocol WFComponentNavigationContext;

@interface WFActionCustomView : UIView

{
    WFAction *_action;
    id <WFComponentNavigationContext> _navigationContext;
}

@property (weak, nonatomic) WFAction *action;
@property (weak, nonatomic) id <WFComponentNavigationContext> navigationContext;

+ (double)preferredHeightForAction:(id)arg1;

- (void)didEnterReusePool;
- (void)willLeaveReusePool;

@end
