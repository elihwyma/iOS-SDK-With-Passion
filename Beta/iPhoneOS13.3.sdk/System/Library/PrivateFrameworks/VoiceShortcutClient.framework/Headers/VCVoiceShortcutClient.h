/*
 Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface VCVoiceShortcutClient : NSObject

{
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSObject<OS_dispatch_queue> *_internalStateQueue;
    NSHashTable *_errorHandlers;
    NSXPCConnection *_xpcConnection;
    CDUnknownBlockType _creationBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *xpcQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalStateQueue;
@property (nonatomic, readonly) NSHashTable *errorHandlers;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic, readonly) CDUnknownBlockType creationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)standardClient;

- (void)dealloc;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (void)getVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateShortcutsVocabularyWithCompletion:(CDUnknownBlockType)arg1;
- (void)unregisterTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleXPCConnectionInterruption;
- (void)getNumberOfVoiceShortcutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)getVoiceShortcutWithPhrase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 shortcut:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)validateVoiceShortcutPhrases:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSyncToWatchWithForceReset:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)requestDataMigration:(id *)arg1;
- (void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)generateSingleUseTokenForWorkflowIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSiriPodcastsDatabaseURLWithCompletion:(CDUnknownBlockType)arg1;
- (void)getConfiguredTriggerDescriptionsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fireTriggerWithIdentifier:(id)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkTriggerStateWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkTriggerStateWithKeyPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteTriggerWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runShortcutWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)runShortcutWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obliterateShortcuts:(CDUnknownBlockType)arg1;
- (id)initWithXPCConnection:(id)arg1 XPCConnectionCreationBlock:(CDUnknownBlockType)arg2;
- (id)initWithXPCConnectionCreationBlock:(CDUnknownBlockType)arg1;
- (void)createVoiceShortcut:(id)arg1 phrase:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg1 resolvedActivityItems:(id)arg2 hostBundleIdentifier:(id)arg3 error:(id *)arg4;
- (void)generateSingleUseTokenForWorkflowReference:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)subscribeToVoiceShortcutDataUpdateNotifications;
- (void)unsubscribeFromVoiceShortcutDataUpdateNotifications;
- (_Bool)hasRunEventsInTheLast5DaysWithError:(id *)arg1;
- (id)asynchronousRemoteDataStoreWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteDataStoreWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)asynchronousRemoteDataStoreWithErrorHandler:(CDUnknownBlockType)arg1 synchronous:(_Bool)arg2;
- (void)callErrorHandlerIfNeeded:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (id)unsafePopConnectionErrorHandlers;
- (void)handleXPCConnectionInvalidation;
- (void)unsafeSetupXPCConnection;

@end
