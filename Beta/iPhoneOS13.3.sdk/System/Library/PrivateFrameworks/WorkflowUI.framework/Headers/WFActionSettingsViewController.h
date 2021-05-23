/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSDictionary, WFAction;

@protocol WFActionSettingsViewControllerDelegate;

@interface WFActionSettingsViewController : UIViewController

{
    id <WFActionSettingsViewControllerDelegate> _delegate;
    WFAction *_action;
    NSDictionary *_definition;
}

@property (weak, nonatomic) id <WFActionSettingsViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFAction *action;
@property (nonatomic, readonly) NSDictionary *definition;

- (_Bool)accessibilityPerformEscape;
- (void)donePressed:(id)arg1;
- (id)initWithAction:(id)arg1 definition:(id)arg2;

@end
