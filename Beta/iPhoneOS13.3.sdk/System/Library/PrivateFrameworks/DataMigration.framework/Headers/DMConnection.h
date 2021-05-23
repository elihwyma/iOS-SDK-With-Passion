/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@class DMXPCConnection;

@interface DMConnection : NSObject

{
    DMXPCConnection *_connection;
}

+ (id)connection;

- (id)init;
- (void)dealloc;
- (void)reportMigrationFailure;
- (void)forceMigrationOnNextRebootWithUserDataDisposition:(unsigned int)arg1;
- (void)isMigrationNeeded:(CDUnknownBlockType)arg1;
- (void)userDataDisposition:(CDUnknownBlockType)arg1;
- (void)previousBuildVersion:(CDUnknownBlockType)arg1;
- (void)orderedPluginIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)migrateCheckingNecessity:(_Bool)arg1 lastRelevantPlugin:(id)arg2 testMigrationInfrastructureOnly:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)changeVisibility:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)migrationPhaseDescription:(CDUnknownBlockType)arg1;
- (void)migrationPluginResults:(CDUnknownBlockType)arg1;
- (void)deferExitWithCompletion:(CDUnknownBlockType)arg1;
- (void)cancelDeferredExitWithCompletion:(CDUnknownBlockType)arg1;
- (void)testMigrationUIWithProgress:(_Bool)arg1 forceInvert:(_Bool)arg2;

@end
