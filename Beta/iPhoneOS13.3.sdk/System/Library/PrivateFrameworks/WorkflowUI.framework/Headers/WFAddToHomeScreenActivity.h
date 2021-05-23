/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivity.h>

@class NSString, UINavigationController, WFWorkflow;

@protocol WFAddToHomeScreenActivityDelegate;

@interface WFAddToHomeScreenActivity : UIActivity

{
    id <WFAddToHomeScreenActivityDelegate> _delegate;
    NSString *_source;
    WFWorkflow *_workflow;
    UINavigationController *_navigationController;
}

@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (weak, nonatomic) UINavigationController *navigationController;
@property (weak, nonatomic) id <WFAddToHomeScreenActivityDelegate> delegate;

- (id)init;
- (void)cancel;
- (id)activityType;
- (id)initWithSource:(id)arg1;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)addToHomeScreenViewController:(id)arg1 didFinishWithName:(id)arg2 icon:(id)arg3;
- (void)addToHomeScreenWithName:(id)arg1 icon:(id)arg2;

@end
