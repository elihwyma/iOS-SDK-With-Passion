/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableOrderedSet;

@interface WFRunningWorkflowManager : NSObject

{
    CDUnknownBlockType _demoResetBlock;
    NSMutableOrderedSet *_runningWorkflowControllerSet;
    NSHashTable *_workflowControllerAssertionTable;
}

@property (nonatomic, readonly) NSMutableOrderedSet *runningWorkflowControllerSet;
@property (nonatomic, readonly) NSHashTable *workflowControllerAssertionTable;
@property (nonatomic, readonly) NSArray *runningWorkflows;
@property (nonatomic, readonly) NSArray *runningWorkflowControllers;
@property (copy, nonatomic) CDUnknownBlockType demoResetBlock;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)workflowControllerDidStart:(id)arg1;
- (void)workflowControllerDidStop:(id)arg1;
- (void)updateRunningWorkflowCount;
- (void)updateAssertions;

@end
