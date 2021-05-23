/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/RLMObject.h>

@class NSData, NSString;

@interface WFConfiguredTriggerRealmObject : RLMObject

{
    _Bool _shouldPrompt;
    _Bool _enabled;
    NSString *_triggerID;
    NSString *_workflowID;
    NSData *_triggerData;
}

@property (copy, nonatomic) NSString *triggerID;
@property (copy, nonatomic) NSString *workflowID;
@property (copy, nonatomic) NSData *triggerData;
@property (nonatomic) _Bool shouldPrompt;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)primaryKey;
+ (id)requiredProperties;
+ (id)defaultPropertyValues;

- (id)descriptor;
- (id)trigger;
- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;

@end
