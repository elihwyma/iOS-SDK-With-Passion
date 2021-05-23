/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVContentKeySessionInternal, NSData, NSString, NSURL;

@protocol AVContentKeySessionDelegate, OS_dispatch_queue;

@interface AVContentKeySession : NSObject

{
    AVContentKeySessionInternal *_session;
}

@property (nonatomic, readonly, getter=isInternal) _Bool internal;
@property (weak, readonly) id <AVContentKeySessionDelegate> delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) NSURL *storageURL;
@property (readonly) NSString *keySystem;
@property (readonly) NSData *contentProtectionSessionIdentifier;

+ (void)initialize;
+ (id)pendingExpiredSessionReportsWithAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (void)removePendingExpiredSessionReports:(id)arg1 withAppIdentifier:(id)arg2 storageDirectoryAtURL:(id)arg3;
+ (id)contentKeySessionWithKeySystem:(id)arg1;
+ (id)contentKeySessionWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (struct OpaqueFigSecureStopManager *)copyDefaultSecureStopManagerForAppIdentifier:(id)arg1 storageDirectoryAtURL:(id)arg2;
+ (id)_uniqueIDForCyptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (id)_internalQueue;
- (int)setAppIdentifier:(id)arg1;
- (void)processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;
- (void)renewExpiringResponseDataForContentKeyRequest:(id)arg1;
- (void)expire;
- (void)addContentKeyRecipient:(id)arg1;
- (void)removeContentKeyRecipient:(id)arg1;
- (id)initWithStorageDirectoryAtURL:(id)arg1;
- (id)_weakReference;
- (const struct OpaqueFigContentKeySession *)_figContentKeySession;
- (int)createAndInstallCustomURLHandlerForAsset:(id)arg1 outHandler:(struct OpaqueFigCustomURLHandler **)arg2;
- (void)_willDeallocOrFinalize;
- (void)_invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1 synchronouslyWhenDelegateQueueIsNULL:(_Bool)arg2;
- (const struct OpaqueFigCPECryptor *)createDecryptorIfNecessaryForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 hlsMethod:(id)arg4 error:(id *)arg5;
- (void)createProtectorSessionIdentifierIfNecessary;
- (void)_setContentKeyRequest:(id)arg1 forCryptorUUID:(id)arg2 cryptorKeyRequestID:(unsigned long long)arg3;
- (_Bool)_setAuthorizationToken:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)clientCanReceivePersistableContentKeyRequest;
- (void)issueContentKeyRequestWithCustomURLHandler:(struct OpaqueFigCustomURLHandler *)arg1 identifier:(id)arg2 requestInfo:(struct __CFDictionary *)arg3 requestID:(unsigned long long)arg4 providesPersistableKey:(_Bool)arg5;
- (void)issueContentKeyRequestWithPreloadingRequestOptions:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 providesPersistableKey:(_Bool)arg4;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2;
- (void)failProcessingContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 error:(id)arg3;
- (const struct OpaqueFigCPECryptor *)copyDecryptorForIdentifier:(id)arg1 initializationData:(id)arg2;
- (id)_extractCryptKeyIdentifiersFromInitializationData:(id)arg1;
- (void)_processContentKeyRequestWithIdentifier:(id)arg1 initializationData:(id)arg2 options:(id)arg3;
- (id)contentKeyRecipients;
- (void)makeSecureTokenForExpirationDateOfPersistableContentKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidatePersistableContentKey:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)invalidateAllPersistableContentKeysForApp:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_handleSecureStopDidFinalizeRecordCallback;
- (id)_contentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (void)_removeContentKeyRequestForCryptorUUID:(id)arg1 cryptorKeyRequestID:(unsigned long long)arg2;
- (void)issueContentKeyRequest:(id)arg1 forKeyRenewal:(_Bool)arg2;
- (id)createCryptorOptionsForIdentifier:(id)arg1 initializationData:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 hlsMethod:(id)arg4;
- (void)_sendFinishLoadingForPreloadedKeyRequest:(struct __CFDictionary *)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler *)arg3;
- (id)initWithKeySystem:(id)arg1 storageDirectoryAtURL:(id)arg2 internal:(_Bool)arg3;
- (_Bool)hasProtector;
- (id)issueContentKeyRequestForInitializationData:(id)arg1;
- (void)_handleRequest:(struct __CFDictionary *)arg1 withRequestID:(unsigned long long)arg2 fromHandler:(struct OpaqueFigCustomURLHandler *)arg3 willHandleRequest:(_Bool *)arg4;
- (void)_handleUpdateToPersistentKey:(id)arg1 forKeyIdentifier:(id)arg2;
- (void)_handleKeyResponseError:(id)arg1 forCryptorUUID:(id)arg2 andCryptorKeyRequestID:(unsigned long long)arg3;
- (void)_handleKeyResponseSuccessfullyProcessedForCryptorUUID:(id)arg1 andCryptorKeyRequestID:(unsigned long long)arg2;

@end
