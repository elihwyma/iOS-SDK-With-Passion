/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFSettingsCell.h>

@class WFWorkflowImportQuestion;

@interface WFImportQuestionsEditTableViewCell : WFSettingsCell

{
    WFWorkflowImportQuestion *_question;
}

@property (weak, nonatomic) WFWorkflowImportQuestion *question;

+ (long long)cellStyle;

@end
