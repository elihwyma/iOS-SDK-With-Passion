/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTagFieldParameter.h>

@protocol WFDynamicTagFieldDataSource;

@interface WFDynamicTagFieldParameter : WFTagFieldParameter

{
    id <WFDynamicTagFieldDataSource> _dataSource;
}

@property (weak, nonatomic) id <WFDynamicTagFieldDataSource> dataSource;

- (id)suggestedTags;

@end
