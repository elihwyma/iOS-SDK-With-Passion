/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@interface WFWorkflowMigrator : NSObject

+ (void)initialize;
+ (void)migrateWorkflowIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (id)migrationClasses;
+ (void)registerMigrationClass:(Class)arg1;

@end
