/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVContentKeyRequestInternal, NSData, NSDictionary, NSError;

@interface AVContentKeyRequest : NSObject

{
    AVContentKeyRequestInternal *_contentKeyRequest;
}

@property (readonly) long long status;
@property (readonly) NSError *error;
@property (readonly) id identifier;
@property (nonatomic, readonly) NSData *initializationData;
@property (copy, readonly) NSDictionary *options;
@property (readonly) _Bool canProvidePersistableContentKey;

+ (void)_validateProtocolVersionList:(id)arg1;
+ (void)_validateHLSEncryptionMethod:(id)arg1;
+ (int)_prepareCryptor:(struct OpaqueFigCPECryptor *)arg1 forRenewal:(_Bool)arg2 andReturnKeyRequestID:(unsigned long long *)arg3;
+ (id)_ensureProtocolVersionList:(id)arg1;
+ (void)_validateServerChallenge:(id)arg1;
+ (id)_mergePreloadingRequestOptions:(id)arg1 withCreateKeyRequestOptions:(id)arg2;
+ (id)_createKeyRequestDictionaryForApp:(id)arg1 persistentKey:(id)arg2 serverChallenge:(id)arg3 cryptorKeyRequestID:(unsigned long long)arg4 purpose:(int)arg5;

- (void)dealloc;
- (id)description;
- (void)_setError:(id)arg1;
- (void)_clearContext;
- (void)processContentKeyResponse:(id)arg1;
- (void)makeStreamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)renewsExpiringResponseData;
- (id)contentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)processContentKeyResponseData:(id)arg1;
- (struct OpaqueFigCPECryptor *)figCryptor;
- (int)_extractAndStoreKeyIDFromInitializationData:(id)arg1;
- (id)_keySystem;
- (id)initWithContentKeySession:(id)arg1 identifier:(id)arg2 initializationData:(id)arg3 preloadingRequestOptions:(id)arg4 providesPersistableKey:(_Bool)arg5;
- (void)_copyAndStoreCryptorUUID;
- (void)_setStatus:(long long)arg1;
- (void)_finishLoadingCustomURLRequestWithError:(id)arg1;
- (id)_getRetryReasonForError:(int)arg1;
- (struct OpaqueFigCPECryptor *)_setCryptorWithFormatDescription:(struct opaqueCMFormatDescription *)arg1 error:(id *)arg2;
- (void)processContentKeyResponseData:(id)arg1 renewalDate:(id)arg2;
- (void)_finishLoadingCustomURLRequestWithResponseData:(id)arg1 renewalDate:(id)arg2;
- (void)_handleKeyResponseError:(id)arg1;
- (_Bool)_canRespondByRequestingPersistableContentKeyRequest;
- (_Bool)respondByRequestingPersistableContentKeyRequestAndReturnError:(id *)arg1;
- (void)_sendResponseInfoToCustomURLHandlerWithRenewalDate:(id)arg1;
- (id)initWithContentKeySession:(id)arg1 customURLHandler:(struct OpaqueFigCustomURLHandler *)arg2 identifier:(id)arg3 requestInfo:(struct __CFDictionary *)arg4 requestID:(unsigned long long)arg5 providesPersistableKey:(_Bool)arg6 isRenewalRequest:(_Bool)arg7;
- (int)_prepareForKeyRenewal;
- (void)_handleKeyResponseSuccess;
- (void)processContentKeyResponseError:(id)arg1;
- (void)renewExpiringContentKeyResponseData;
- (void)respondByRequestingPersistableContentKeyRequest;

@end
