/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class SSXPCConnection;

@interface SSMigrator : NSObject

{
    SSXPCConnection *_connection;
}

- (id)init;
- (void)performMigration:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
