/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDaemon, NSMapTable, NSMutableDictionary, NSMutableSet;

@interface HDTaskServerRegistry : NSObject

{
    NSMutableDictionary *_taskServerClassesByTaskIdentifier;
    NSMapTable *_taskServersByUUID;
    NSMutableSet *_loadedPluginURLs;
    struct os_unfair_lock_s _lock;
    HDDaemon *_daemon;
}

@property (weak, nonatomic, readonly) HDDaemon *daemon;

- (id)initWithDaemon:(id)arg1;
- (void)didCreateTaskServer:(id)arg1;
- (_Bool)registerTaskServerClassesWithProvider:(id)arg1 error:(id *)arg2;
- (id)createTaskServerEndpointForIdentifier:(id)arg1 taskUUID:(id)arg2 configuration:(id)arg3 client:(id)arg4 connectionQueue:(id)arg5 delegate:(id)arg6 error:(id *)arg7;
- (_Bool)registerTaskServerClasses:(id)arg1 error:(id *)arg2;
- (_Bool)_lock_registerTaskServerClass:(Class)arg1 error:(id *)arg2;
- (_Bool)_lock_loadTaskServersFromPluginAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)registerTaskServerClass:(Class)arg1 error:(id *)arg2;
- (_Bool)loadTaskServersFromPluginAtURL:(id)arg1 error:(id *)arg2;
- (id)taskServerForTaskUUID:(id)arg1;

@end
