/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTreeNode.h>

@class WFTableSection;

@interface WFTableSectionTreeNode : WFTreeNode

{
    WFTableSection *_section;
}

@property (weak, nonatomic) WFTableSection *section;

@end
