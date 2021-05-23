/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSMutableArray, NSMutableDictionary, NSString, _HDAuthorizationRequestGroup;

@protocol OS_dispatch_queue;

@interface HDAuthorizationManager : NSObject

{
    NSMutableDictionary *_openAppCompletionHandlersByBundleID;
    NSMutableDictionary *_remoteAuthorizationRecordsByBundleID;
    _Bool _suppressAuthorizationPrompt;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableDictionary *_requestGroupsByBundleIdentifier;
    NSMutableArray *_pendingRequestGroups;
    _HDAuthorizationRequestGroup *_promptingRequestGroup;
    NSMutableDictionary *_pendingObjectAuthorizationRequestsByBundleIdentifier;
    NSMutableDictionary *_activeObjectPromptSessionsBySessionIdentifier;
    double _requestSessionTimeout;
}

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) NSMutableDictionary *requestGroupsByBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *pendingRequestGroups;
@property (retain, nonatomic) _HDAuthorizationRequestGroup *promptingRequestGroup;
@property (retain, nonatomic) NSMutableDictionary *pendingObjectAuthorizationRequestsByBundleIdentifier;
@property (retain, nonatomic) NSMutableDictionary *activeObjectPromptSessionsBySessionIdentifier;
@property (nonatomic) _Bool suppressAuthorizationPrompt;
@property (nonatomic) double requestSessionTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (id)diagnosticDescription;
- (void)openAppForAuthorization:(id)arg1 sessionIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resetAllAuthorizationRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (void)applicationsUninstalledNotification:(id)arg1;
- (void)_queue_setAuthorizationStatuses:(id)arg1 authorizationModes:(id)arg2 forBundleIdentifier:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)_authorizationRequestStatusForClientBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 updateAuthorizationStatuses:(_Bool)arg4 error:(id *)arg5;
- (void)_queue_enqueueAuthorizationRequestWithIdentifier:(id)arg1 bundleIdentifier:(id)arg2 writeTypes:(id)arg3 readTypes:(id)arg4 authorizationNeededHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_queue_handleNextAuthorizationRequestGroup;
- (void)_queue_cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (void)_queue_beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queue_endAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)_queue_resetAllAuthorizationRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_queue_resetAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)_performNanoSyncImmediatelyWithReason:(id)arg1;
- (void)_queue_requestGroupDidFinishPrompting:(id)arg1 error:(id)arg2;
- (id)_validateRequiredAuthorizationWithRequestGroup:(id)arg1;
- (_Bool)hasRequiredAuthorizationStatusesForBundleIdentifier:(id)arg1 requiredReadTypes:(id)arg2 error:(id *)arg3;
- (id)_queue_activePromptSessionForBundleIdentifier:(id)arg1;
- (long long)authorizationRequestStatusForClientBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 error:(id *)arg4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)arg1;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestRemoteAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)arg1 samples:(id)arg2 promptIfNeeded:(_Bool)arg3 authorizationNeededHandler:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

@end
