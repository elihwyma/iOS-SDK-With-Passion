/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIActivity.h>

@class NSArray, UIBarButtonItem, UIView, WFFileRepresentation;

@interface WFWorkflowFileActivity : UIActivity

{
    WFFileRepresentation *_workflowFile;
    unsigned long long _arrowDirection;
    NSArray *_activityItems;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    struct CGRect _sourceRect;
}

@property (copy, nonatomic) NSArray *activityItems;
@property (nonatomic, readonly) WFFileRepresentation *workflowFile;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) struct CGRect sourceRect;
@property (nonatomic) unsigned long long arrowDirection;

+ (id)activityType;

- (id)activityType;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (id)initWithSourceView:(id)arg1 sourceRect:(struct CGRect)arg2 barButtonItem:(id)arg3;

@end
