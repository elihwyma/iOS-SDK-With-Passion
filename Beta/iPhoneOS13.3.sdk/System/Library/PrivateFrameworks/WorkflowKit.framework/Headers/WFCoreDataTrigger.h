/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, WFCoreDataRunEvent, WFCoreDataWorkflow;

@interface WFCoreDataTrigger : NSManagedObject

@property (retain, nonatomic) NSString *workflowID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool enabled;
@property (nonatomic) _Bool shouldPrompt;
@property (retain, nonatomic) NSData *triggerData;
@property (copy, nonatomic) NSString *triggerID;
@property (retain, nonatomic) WFCoreDataRunEvent *runEvents;
@property (retain, nonatomic) WFCoreDataWorkflow *workflow;

+ (id)fetchRequest;

- (id)descriptor;
- (id)trigger;

@end
