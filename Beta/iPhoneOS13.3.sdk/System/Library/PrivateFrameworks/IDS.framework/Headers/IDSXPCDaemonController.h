/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class IDSXPCConnection, NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface IDSXPCDaemonController : NSObject

{
    IDSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_collaboratorPromiseDictionary;
    _Bool _sync;
    NSMutableDictionary *_syncCollaboratorDictionary;
}

@property (retain, nonatomic) IDSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary;
@property (retain, nonatomic) NSMutableDictionary *syncCollaboratorDictionary;

+ (id)weakSharedInstance;
+ (void)performDaemonControllerTask:(CDUnknownBlockType)arg1;

- (void)dealloc;
- (id)initWithQueue:(id)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)performTask:(CDUnknownBlockType)arg1;
- (id)pairingCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)registrationCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)reunionSyncCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)pairingCollaboratorWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_initWithQueue:(id)arg1 isSync:(_Bool)arg2;
- (id)_daemonProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_collaboratorWithIdentifier:(id)arg1 interface:(id)arg2 timeout:(double)arg3 errorHandler:(CDUnknownBlockType)arg4 resolverBlock:(CDUnknownBlockType)arg5;
- (id)_sync_collaboratorWithIdentifier:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 resolverBlock:(CDUnknownBlockType)arg3;
- (id)_timingOutDaemonProxyWithTimeout:(double)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)initSyncControllerWithQueue:(id)arg1;
- (id)opportunisticCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)interalTestingCollaboratorWithErrorHandler:(CDUnknownBlockType)arg1;

@end
