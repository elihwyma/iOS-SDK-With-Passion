/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSDate, NSString, RLMLinkingObjects;

@interface WFRealmWorkflowQuarantine : RLMObject

{
    NSString *_sourceAppIdentifier;
    NSDate *_importDate;
    RLMLinkingObjects *_workflows;
}

@property (copy) NSString *sourceAppIdentifier;
@property (retain) NSDate *importDate;
@property (readonly) RLMLinkingObjects *workflows;

+ (id)className;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;
+ (id)linkingObjectsProperties;

@end
