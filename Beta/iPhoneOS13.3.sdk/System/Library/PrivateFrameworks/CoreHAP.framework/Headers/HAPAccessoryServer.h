/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class HAPAccessory, HAPDeviceID, HMFVersion, NSArray, NSData, NSHashTable, NSNumber, NSObject, NSString;

@protocol HAPAccessoryServerDelegate, HAPKeyStore, HMFLocking, OS_dispatch_queue;

@interface HAPAccessoryServer : HMFObject

{
    NSString *_name;
    NSString *_identifier;
    id <HMFLocking> _lock;
    _Bool _hasPairings;
    _Bool _reachable;
    _Bool _securitySessionOpen;
    _Bool _supportsTimedWrite;
    _Bool _bleLinkConnected;
    _Bool _incompatibleUpdate;
    NSNumber *_category;
    unsigned long long _configNumber;
    id <HAPAccessoryServerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSData *_setupHash;
    unsigned long long _authMethod;
    HAPAccessory *_primaryAccessory;
    NSArray *_accessories;
    long long _linkType;
    HMFVersion *_version;
    NSHashTable *_internalDelegates;
    NSObject<OS_dispatch_queue> *_internalDelegateQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    unsigned long long _stateNumber;
    id <HAPKeyStore> _keyStore;
    unsigned long long _pairSetupType;
}

@property (nonatomic, readonly) NSHashTable *internalDelegates;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalDelegateQueue;
@property (weak, readonly) id <HAPAccessoryServerDelegate> delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly, getter=isPaired) _Bool paired;
@property (nonatomic) _Bool hasPairings;
@property (nonatomic, getter=isReachable) _Bool reachable;
@property (getter=isSecuritySessionOpen) _Bool securitySessionOpen;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *category;
@property (nonatomic) unsigned long long configNumber;
@property (nonatomic) unsigned long long stateNumber;
@property (nonatomic, getter=isIncompatibleUpdate) _Bool incompatibleUpdate;
@property (retain, nonatomic) HAPAccessory *primaryAccessory;
@property (copy, nonatomic) NSArray *accessories;
@property (weak, nonatomic, readonly) id <HAPKeyStore> keyStore;
@property (copy, nonatomic) NSData *setupHash;
@property (copy) HMFVersion *version;
@property (nonatomic) unsigned long long pairSetupType;
@property (copy, readonly) HAPDeviceID *deviceID;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic) _Bool supportsTimedWrite;
@property (nonatomic) unsigned long long authMethod;
@property (nonatomic, readonly, getter=isBLELinkConnected) _Bool bleLinkConnected;

+ (_Bool)isAccessoryServerWithIdentifierPaired:(id)arg1 keyStore:(id)arg2;

- (id)init;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)reconfirm;
- (id)initWithKeystore:(id)arg1;
- (void)continuePairingAfterAuthPrompt;
- (_Bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startPairingWithConsentRequired:(_Bool)arg1 config:(id)arg2 ownershipToken:(id)arg3;
- (_Bool)requiresTimedWrite:(id)arg1;
- (void)enumerateInternalDelegatesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enableEvents:(_Bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3 queue:(id)arg4;
- (void)continuePairingUsingWAC;
- (void)discoverAccessories;
- (_Bool)tryPairingPassword:(id)arg1 error:(id *)arg2;
- (void)tearDownAndRestablishSession;
- (_Bool)stopPairingWithError:(id *)arg1;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)handleUpdatesForCharacteristics:(id)arg1 stateNumber:(id)arg2;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)identifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)productData;
- (void)addInternalDelegate:(id)arg1;
- (_Bool)matchesSetupID:(id)arg1 serverIdentifier:(id)arg2;
- (_Bool)matchesSetupID:(id)arg1;
- (void)removeInternalDelegate:(id)arg1;

@end
