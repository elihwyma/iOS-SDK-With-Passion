/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivityItemProvider.h>

@class NSString, NSURL, WFWorkflow;

@protocol WFUserInterface;

@interface WFWorkflowLinkProvider : UIActivityItemProvider

{
    WFWorkflow *_workflow;
    NSString *_exclusiveActivityType;
    NSURL *_workflowURL;
    NSString *_workflowID;
    NSURL *_realmURL;
    id <WFUserInterface> _userInterface;
}

@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) NSString *workflowID;
@property (nonatomic, readonly) NSURL *realmURL;
@property (nonatomic, readonly) id <WFUserInterface> userInterface;
@property (copy, nonatomic) NSString *exclusiveActivityType;
@property (retain, nonatomic) NSURL *workflowURL;

- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;
- (id)activityViewControllerLinkMetadata:(id)arg1;
- (id)initWithPlaceholderItem:(id)arg1 workflow:(id)arg2 userInterface:(id)arg3;

@end
