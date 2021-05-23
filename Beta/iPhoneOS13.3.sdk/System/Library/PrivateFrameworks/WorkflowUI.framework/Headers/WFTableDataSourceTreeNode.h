/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFTreeNode.h>

@class WFTableDataSource;

@interface WFTableDataSourceTreeNode : WFTreeNode

{
    WFTableDataSource *_dataSource;
}

@property (weak, nonatomic) WFTableDataSource *dataSource;

@end
