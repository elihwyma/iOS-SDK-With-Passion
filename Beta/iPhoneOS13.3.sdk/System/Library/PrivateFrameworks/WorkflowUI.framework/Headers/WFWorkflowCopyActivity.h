/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivity.h>

@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity

{
    NSURL *_excludedURL;
    NSURL *_URL;
}

@property (nonatomic, readonly) NSURL *excludedURL;
@property (retain, nonatomic) NSURL *URL;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityImage;
- (void)performActivity;
- (id)initWithExcludedURL:(id)arg1;

@end
