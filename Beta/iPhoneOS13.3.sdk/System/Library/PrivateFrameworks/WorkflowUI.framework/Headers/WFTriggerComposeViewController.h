/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFComposeViewController.h>

@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController : WFComposeViewController

{
    id <WFTriggerComposeViewControllerDelegate> delegate;
    unsigned long long _mode;
}

@property (nonatomic, readonly) unsigned long long mode;
@property (weak, nonatomic) id <WFTriggerComposeViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (_Bool)isModalInPresentation;
- (id)doneBarButtonItem;
- (id)emptyStateString;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3;
- (void)didTapNext:(id)arg1;

@end
