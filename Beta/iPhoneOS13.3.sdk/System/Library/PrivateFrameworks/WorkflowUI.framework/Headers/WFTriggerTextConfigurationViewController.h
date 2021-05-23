/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class UITextField;

@protocol WFTriggerTextConfigurationViewControllerDelegate;

@interface WFTriggerTextConfigurationViewController : UIViewController

{
    id <WFTriggerTextConfigurationViewControllerDelegate> _delegate;
    UITextField *_textField;
}

@property (nonatomic, readonly) UITextField *textField;
@property (weak, nonatomic) id <WFTriggerTextConfigurationViewControllerDelegate> delegate;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;

@end
