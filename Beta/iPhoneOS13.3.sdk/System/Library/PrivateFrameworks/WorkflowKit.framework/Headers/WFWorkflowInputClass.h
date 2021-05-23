/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSString;

@interface WFWorkflowInputClass : RLMObject

{
    NSString *_className;
}

@property (copy) NSString *className;

+ (id)primaryKey;
+ (id)requiredProperties;

@end
