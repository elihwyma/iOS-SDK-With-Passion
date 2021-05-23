/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NFSecureElement, NSArray, NSHashTable, NSLock, NSMutableArray, NSNumber, NSString, NSUUID;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKSecureElement : NSObject

{
    _Bool _deletingAllApplets;
    NSObject<OS_dispatch_source> *_deletingAllAppletsTimer;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsTimerConcurrentQueue;
    NSObject<OS_dispatch_queue> *_deletingAllAppletsPropertyConcurrentQueue;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    CDUnknownBlockType _secureElementSessionPrelude;
    CDUnknownBlockType _secureElementSessionPostlude;
    _Bool _startingSession;
    _Bool _startingPrioritySession;
    NSMutableArray *_sessionAccessHandlers;
    NSMutableArray *_prioritySessionAccessHandlers;
    NSHashTable *_observers;
    NSLock *_observersLock;
    _Bool _registeredForHardwareUpdates;
    NFSecureElement *_secureElement;
    NSArray *_secureElementArray;
    CDUnknownBlockType _pairingChangeHandler;
}

@property (copy, nonatomic) CDUnknownBlockType secureElementSessionPrelude;
@property (copy, nonatomic) CDUnknownBlockType secureElementSessionPostlude;
@property (nonatomic, readonly) _Bool isOwnable;
@property (nonatomic, readonly) _Bool isProductionSigned;
@property (nonatomic, readonly) _Bool isInRestrictedMode;
@property (nonatomic, readonly) _Bool isDeletingAllApplets;
@property (nonatomic, readonly) unsigned long long supportedTechnologies;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (nonatomic, readonly) NSString *primaryRegionTopic;
@property (nonatomic, readonly) NSNumber *primaryJSBLSequenceCounter;
@property (nonatomic, readonly) NSString *primarySecureElementIdentifier;
@property (nonatomic, readonly) NSArray *secureElementIdentifiers;
@property (nonatomic, readonly) NSUUID *ownerUserUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)secureElementIdentifiers;
+ (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
+ (_Bool)supportsExpressMode:(id)arg1;
+ (id)primarySecureElementIdentifier;
+ (id)sharedSecureElement;
+ (_Bool)isInFailForward;
+ (_Bool)hardwareSupportsExpressForAutomaticSelectionTechnologyType:(long long)arg1;
+ (_Bool)supportsExpressForAutomaticSelectionTechnologyType:(long long)arg1 byHardware:(_Bool *)arg2;
+ (_Bool)supportsExpressMode:(id)arg1 byHardware:(_Bool *)arg2;
+ (_Bool)hardwareSupportsExpressMode:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (_Bool)supportsExpressModeForExpressPassType:(long long)arg1;
- (void)connectToServerWithPushTopic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stateInformationWithCompletion:(CDUnknownBlockType)arg1;
- (void)signatureForAuthToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signedPlatformDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)signChallenge:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)hasRegistrationInformation;
- (_Bool)setRegistrationInformation:(id)arg1 primaryRegionTopic:(id)arg2;
- (void)markAppletWithIdentifierForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)SEPPairingInfoWithCompletion:(CDUnknownBlockType)arg1;
- (void)initializeSecureElementQueuingServerConnection:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (unsigned long long)ownershipStateForUserUUID:(id)arg1;
- (_Bool)setOwnerUserUUID:(id)arg1 keybagUUID:(id)arg2;
- (void)_accessSecureElementManagerSessionWithPriority:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_executeSecureElementSessionHandlersWithPriority:(_Bool)arg1 session:(id)arg2;
- (void)_updateHardwareManagerListener;
- (void)accessSecureElementManagerSessionWithHandler:(CDUnknownBlockType)arg1;
- (void)accessPrioritySecureElementManagerSessionWithHandler:(CDUnknownBlockType)arg1;
- (void)markAppletsWithIdentifiersForDeletion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerPairingChangeHandler;
- (void)contactlessPaymentPassesAvailableDidChange;
- (void)secureElement:(id)arg1 didChangeRestrictedMode:(_Bool)arg2;
- (void)remoteAdminCleanupProgress:(double)arg1;
- (void)pairingStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)allAppletsWithCompletion:(CDUnknownBlockType)arg1;
- (void)appletWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markAllAppletsForDeletionWithExternalAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)signChallenge:(id)arg1 forPaymentApplication:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (_Bool)queueConnectionToServerWithPushTopic:(id)arg1;
- (_Bool)queueConnectionToServerForAppletIdentifiers:(id)arg1;
- (void)peerPaymentEnrollmentDataWithAlternateDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
