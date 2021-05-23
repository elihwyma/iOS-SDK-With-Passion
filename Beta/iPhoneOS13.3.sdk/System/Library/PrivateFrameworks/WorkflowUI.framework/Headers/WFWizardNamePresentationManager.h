/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class UINavigationController, WFWorkflowWizardNameViewController;

@interface WFWizardNamePresentationManager : NSObject

{
    _Bool _presentsModally;
    UINavigationController *_navigationController;
    WFWorkflowWizardNameViewController *_wizardNameViewController;
}

@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) WFWorkflowWizardNameViewController *wizardNameViewController;
@property (nonatomic, readonly) _Bool presentsModally;

- (void)dismiss;
- (void)present;
- (id)initWithNavigationController:(id)arg1 wizardNameViewController:(id)arg2;
- (void)presentModal;

@end
