/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSData, WFWorkflowIcon;

@interface WFHomeScreenIcon : NSObject

{
    WFWorkflowIcon *_workflowIcon;
    NSData *_customImageData;
}

@property (nonatomic, readonly) WFWorkflowIcon *workflowIcon;
@property (nonatomic, readonly) NSData *customImageData;

- (id)initWithWorkflowIcon:(id)arg1 customImageData:(id)arg2;

@end
