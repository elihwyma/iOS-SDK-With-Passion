/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstaller : NSObject

{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)sendCallbackWithDictionary:(id)arg1;
- (void)_preflightAppDeletion:(id)arg1;
- (id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (_Bool)unregisterBundle:(id)arg1 placeholderOnly:(_Bool)arg2 notification:(int *)arg3;
- (void)_postProcessingForApp:(id)arg1 type:(id)arg2 notification:(int)arg3;
- (void)sendCallbackDeliveryComplete;
- (_Bool)validateEntitlementsForInstall:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_douninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (_Bool)dispatchRegistration:(id)arg1;
- (id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)registerBundle:(id)arg1 withOptions:(id)arg2;
- (void)_doinstallApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 notificationJournaller:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;

@end
