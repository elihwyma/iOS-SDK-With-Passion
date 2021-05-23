/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WFWorkflowMigration : NSObject

{
    NSMutableSet *_warnings;
    NSMutableDictionary *_workflow;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly) NSMutableDictionary *workflow;
@property (nonatomic, readonly) NSMutableArray *actions;
@property (nonatomic, readonly) NSString *actionIdentifierKey;
@property (nonatomic, readonly) NSString *actionParametersKey;
@property (nonatomic, readonly) NSMutableSet *warnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)workflowNeedsMigration:(id)arg1 fromClientVersion:(id)arg2;
+ (id)migrationClassDependencies;

- (void)finish;
- (void)migrateWorkflow;
- (void)migrateWorkflowIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enumerateActionsWithIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
