/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessArbiterProxy : NSObject

{
    NSXPCConnection *_server;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_presentersByID;
    NSMutableDictionary *_presenterMessengersByID;
    NSMutableSet *_providers;
    NSMapTable *_providerMessengersByID;
    NSMutableArray *_providerListeners;
    _Bool _disableFileProviderReregistration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_idForReactor:(id)arg1;
+ (id)_fetchProviderMessengerForListener:(id)arg1;
+ (void)_setProviderMessenger:(id)arg1 forListener:(id)arg2;
+ (id)_fileReactorDebuggingInformation;
+ (void)_accessPresenterOperationRecordsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)_willBeginOperationForReactor:(id)arg1 withDescription:(id)arg2;

- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (id)_onqueue_filePresenters;
- (void)addFilePresenter:(id)arg1;
- (id)_onqueue_fileProviders;
- (void)addFileProvider:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)performBarrierAsync:(CDUnknownBlockType)arg1;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (id)initWithServer:(id)arg1 queue:(id)arg2;
- (void)removeFilePresenter:(id)arg1;
- (id)filePresenters;
- (void)removeFileProvider:(id)arg1;
- (id)fileProviders;
- (id)idForFileReactor:(id)arg1;
- (void)getDebugInfoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)itemHasPresentersAtURL:(id)arg1;
- (void)setAutomaticFileProviderReregistrationDisabled:(_Bool)arg1;
- (void)performBarrier;
- (void)handleCanceledServer;

@end
