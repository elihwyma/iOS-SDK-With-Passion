/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class WFTrigger, WFTriggerManager;

@protocol WFTriggerConfigurationViewControllerDelegate;

@interface WFTriggerConfigurationViewController : UIViewController

{
    WFTrigger *_trigger;
    id <WFTriggerConfigurationViewControllerDelegate> _delegate;
    WFTriggerManager *_triggerManager;
    unsigned long long _mode;
}

@property (nonatomic, readonly) WFTriggerManager *triggerManager;
@property (nonatomic, readonly) unsigned long long mode;
@property (retain, nonatomic) WFTrigger *trigger;
@property (weak, nonatomic) id <WFTriggerConfigurationViewControllerDelegate> delegate;

- (void)finish;
- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
- (void)dismiss:(id)arg1;
- (id)initWithTrigger:(id)arg1 triggerManager:(id)arg2 mode:(unsigned long long)arg3;
- (void)updateNextButtonEnabledState;

@end
