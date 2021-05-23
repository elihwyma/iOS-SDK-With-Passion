/*
 Image: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
 */

#import <Foundation/NSObject.h>

@class DMXPCConnection;

@interface DMMigrationPluginWrapperConnection : NSObject

{
    DMXPCConnection *_connection;
}

+ (id)connection;

- (id)init;
- (void)invalidate;
- (void)resume;
- (int)pid;
- (void)handleMessage:(id)arg1;
- (void)runPluginAtPath:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
