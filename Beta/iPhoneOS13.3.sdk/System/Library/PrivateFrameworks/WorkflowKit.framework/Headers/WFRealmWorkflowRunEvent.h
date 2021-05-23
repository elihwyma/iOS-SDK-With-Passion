/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSDate, NSString, WFRealmWorkflow;

@interface WFRealmWorkflowRunEvent : RLMObject

{
    NSString *_identifier;
    WFRealmWorkflow *_workflow;
    NSDate *_date;
    NSString *_source;
    NSString *_triggerID;
    long long _outcome;
}

@property (retain) NSString *identifier;
@property (retain) WFRealmWorkflow *workflow;
@property (retain) NSDate *date;
@property NSString *source;
@property (copy) NSString *triggerID;
@property long long outcome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)className;
+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;

- (id)descriptor;

@end
