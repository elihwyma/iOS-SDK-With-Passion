/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivity.h>

@class NSString, WFWorkflow;

@interface WFSubmitToGalleryActivity : UIActivity

{
    WFWorkflow *_workflow;
}

@property (retain, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cancel;
- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)gallerySubmissionDidFinish:(id)arg1;
- (void)gallerySubmissionDidCancel:(id)arg1;

@end
