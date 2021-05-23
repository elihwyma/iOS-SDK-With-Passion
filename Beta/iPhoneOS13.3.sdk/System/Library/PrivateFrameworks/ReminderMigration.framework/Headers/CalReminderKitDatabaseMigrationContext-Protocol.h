/*
 Image: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
 */

#import <ReminderMigration/Swift-Protocol.h>

@class REMStore;

@protocol CalReminderKitDatabaseMigrationContext <Swift>

@property (nonatomic, readonly) REMStore *reminderStore;
@property (nonatomic, readonly) _Bool shouldPerformMigration;
@property (nonatomic, readonly) _Bool shouldDeleteMigratedData;

- (unsigned short)ensureAccountsExist:error: /* Error: Ran out of types for this method. */;
- (unsigned short)willBeginMigration;
- (unsigned short)didEndMigrationWithSuccess: /* Error: Ran out of types for this method. */;
- (unsigned short)recordMigrationFailure: /* Error: Ran out of types for this method. */;

@end
