/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSString;

@interface WFWorkflowType : RLMObject

{
    NSString *_type;
}

@property (copy) NSString *type;

+ (id)primaryKey;
+ (id)requiredProperties;

@end
