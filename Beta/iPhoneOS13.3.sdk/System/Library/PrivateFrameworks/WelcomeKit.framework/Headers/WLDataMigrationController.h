/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <WelcomeKit/WLDaemonConnection.h>

@protocol WLDataMigrationDelegate, WLDataMigratorProtocol;

@interface WLDataMigrationController : WLDaemonConnection

{
    id <WLDataMigratorProtocol> _migrator;
    id <WLDataMigrationDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <WLDataMigrationDelegate> delegate;

- (id)initWithDelegate:(id)arg1;
- (void)startMigrationUsingRetryPolicies:(_Bool)arg1;

@end
