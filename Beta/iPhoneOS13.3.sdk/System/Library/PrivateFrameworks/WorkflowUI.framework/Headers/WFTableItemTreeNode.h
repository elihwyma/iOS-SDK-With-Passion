/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTreeNode.h>

@class WFTableItem;

@interface WFTableItemTreeNode : WFTreeNode

{
    WFTableItem *_item;
}

@property (weak, nonatomic) WFTableItem *item;

@end
