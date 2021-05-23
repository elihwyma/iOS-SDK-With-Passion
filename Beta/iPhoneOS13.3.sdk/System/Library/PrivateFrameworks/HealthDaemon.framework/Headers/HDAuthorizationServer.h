/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDHealthStoreClient, HDProfile, NSMutableArray, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HDAuthorizationServer : NSObject

{
    _Atomic _Bool _invalidated;
    NSString *_sourceBundleIdentifier;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDHealthStoreClient *_client;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSUUID *_transactionSessionIdentifier;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (retain, nonatomic) NSMutableArray *authorizationRequestIdentifiers;
@property (retain, nonatomic) NSUUID *transactionSessionIdentifier;
@property (copy, readonly) NSString *sourceBundleIdentifier;

- (void)invalidate;
- (void)_invalidate;
- (id)initWithClient:(id)arg1 queue:(id)arg2;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)readAuthorizationStatusForType:(id)arg1 error:(id *)arg2;
- (_Bool)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id *)arg2;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id *)arg2;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(_Bool)arg2 authorizationNeededHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_performIfAuthorizedForTypes:(id)arg1 sharing:(_Bool)arg2 onQueue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (id)_authorizationStatusForTypes:(id)arg1 error:(id *)arg2;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(CDUnknownBlockType)arg4 requestCompletionHandler:(CDUnknownBlockType)arg5;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(CDUnknownBlockType)arg2 requestCompletionHandler:(CDUnknownBlockType)arg3;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)authorizationStatusForType:(id)arg1 error:(id *)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(CDUnknownBlockType)arg3 requestCompletionHandler:(CDUnknownBlockType)arg4;
- (void)handleAuthorizationRequestsWithPromptHandler:(CDUnknownBlockType)arg1 requestCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_setAuthorizationStatusesEntitled:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)allAuthorizationRecordsForType:(id)arg1 error:(id *)arg2;
- (id)allSourcesRequestingTypes:(id)arg1 error:(id *)arg2;
- (id)allDocumentAuthorizationRecordsForType:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)allObjectAuthorizationsForSampleWithUUID:(id)arg1 error:(id *)arg2;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (_Bool)resetAuthorizationStatusesForObjects:(id)arg1 error:(id *)arg2;
- (_Bool)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(CDUnknownBlockType)arg1;

@end
