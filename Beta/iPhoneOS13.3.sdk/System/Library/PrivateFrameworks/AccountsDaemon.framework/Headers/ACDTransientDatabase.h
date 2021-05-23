/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSPersistentStoreCoordinator, NSString;

@interface ACDTransientDatabase : NSObject

{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)createConnection;
- (id)_addPersistentStoreWithType:(id)arg1 configuration:(id)arg2 URL:(id)arg3 options:(id)arg4 error:(id *)arg5;

@end
