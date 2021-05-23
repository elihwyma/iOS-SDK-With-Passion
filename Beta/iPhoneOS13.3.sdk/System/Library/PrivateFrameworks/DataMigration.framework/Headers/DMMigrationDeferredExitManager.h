/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@interface DMMigrationDeferredExitManager : NSObject

+ (id)_serialQueue;

- (id)_deferralDuration;
- (void)_exitClean;
- (void)migrationDidStart;
- (void)migrationDidEnd;
- (void)deferExitWithConnection:(id)arg1;
- (void)cancelDeferredExitWithConnection:(id)arg1;
- (void)_resetGlobalState;
- (_Bool)_isDeferringExit;

@end
