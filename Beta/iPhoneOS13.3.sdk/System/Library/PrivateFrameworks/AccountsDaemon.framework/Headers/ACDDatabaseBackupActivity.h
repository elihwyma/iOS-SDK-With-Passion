/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class ACDDatabase;

@protocol OS_dispatch_queue, OS_xpc_object;

@interface ACDDatabaseBackupActivity : NSObject

{
    _Bool _xpcActivityPending;
    NSObject<OS_xpc_object> *_activityExecutionCriteria;
    NSObject<OS_dispatch_queue> *_queue;
    ACDDatabase *_database;
}

@property (nonatomic, readonly) ACDDatabase *database;

+ (id)new;

- (id)init;
- (id)initWithDatabase:(id)arg1;
- (id)activityCriteria;
- (void)scheduleBackupIfNonexistent;
- (void)_registerActivityIfNeededSchedulingBackup:(_Bool)arg1;
- (void)_registerActivitySchedulingBackup:(_Bool)arg1;
- (void)scheduleBackup;
- (void)registerActivityIfNeeded;

@end
