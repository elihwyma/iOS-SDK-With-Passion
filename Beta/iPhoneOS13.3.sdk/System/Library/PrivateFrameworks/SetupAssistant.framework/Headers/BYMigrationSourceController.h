/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class BYBuddyDaemonMigrationSourceClient;

@interface BYMigrationSourceController : NSObject

{
    BYBuddyDaemonMigrationSourceClient *_migrationSourceClient;
}

@property (retain, nonatomic) BYBuddyDaemonMigrationSourceClient *migrationSourceClient;

- (id)init;
- (void)launchSetupForMigration:(id)arg1;
- (void)setFileTransferSession:(id)arg1;

@end
