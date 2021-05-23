/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFComposeViewController.h>

@class HMHome;

@protocol WFHomeComposeViewControllerDelegate;

@interface WFHomeComposeViewController : WFComposeViewController

{
    HMHome *_home;
}

@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id <WFHomeComposeViewControllerDelegate> delegate;

+ (void)preloadActionRegistryIfNeeded;
+ (void)preloadHomeManager;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didTapDone;
- (id)initWithWorkflow:(id)arg1;
- (id)doneBarButtonItem;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2 home:(id)arg3;
- (id)initWithHomeWorkflow:(id)arg1 actionSetBuilder:(id)arg2;

@end
