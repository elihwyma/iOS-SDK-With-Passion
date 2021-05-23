/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <NSObject.h>

@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject

{
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

- (id)init;
- (id)_daemonConnection;
- (_Bool)setupAssistantNeedsToRun;
- (void)ensureSilentLoginUpgrade;
- (void)ensureShortLivedTokenUpgrade;
- (id)backupMetadata;
- (void)observeFinishSetupTriggers;
- (void)performSilentICDPUpgrade;
- (void)deferDataMigratorExit;
- (void)cancelDataMigratorDeferredExit;

@end
