/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

#import <CoreUtils/Swift-Protocol.h>

@class HMAccessory, HMHomeManager, HMMediaSystem, HMMediaSystemRole, HMUser, NSArray, NSDictionary, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface CUHomeKitManager : NSObject <Swift>

{
    int _homeKitPrefsNotifyToken;
    HMHomeManager *_homeManager;
    _Bool _homeManagerDidUpdateHomes;
    struct NSMutableDictionary *_homes;
    struct NSMutableDictionary *_resolvableAccessoriesMap;
    NSDictionary *_selfAccessoryAppData;
    _Bool _selfAccessoryEnabled;
    NSUUID *_selfAccessoryRoomID;
    _Bool _selfAccessoryMediaAccessEnabled;
    _Bool _selfAccessoryMediaSystemEnabled;
    _Bool _selfAccessorySiriAccessEnabled;
    HMUser *_selfAccessoryUser;
    struct NSMutableDictionary *_users;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    struct LogCategory *_ucat;
    _Bool _selfAccessorySiriEnabled;
    unsigned int _flags;
    unsigned int _state;
    unsigned int _selfAccessoryMediaAccessFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _stateChangedHandler;
    NSArray *_resolvableAccessories;
    CDUnknownBlockType _resolvableAccessoriesChangedHandler;
    HMAccessory *_selfAccessory;
    CDUnknownBlockType _selfAccessoryAppDataChangedHandler;
    CDUnknownBlockType _selfAccessoryUpdatedHandler;
    NSString *_selfAccessoryMediaAccessPassword;
    CDUnknownBlockType _selfAccessoryMediaAccessUpdatedHandler;
    HMMediaSystem *_selfAccessoryMediaSystem;
    HMAccessory *_selfAccessoryMediaSystemCounterpart;
    NSString *_selfAccessoryMediaSystemName;
    HMMediaSystemRole *_selfAccessoryMediaSystemRole;
    CDUnknownBlockType _selfAccessoryMediaSystemUpdatedHandler;
    CDUnknownBlockType _selfAccessorySiriAccessUpdatedHandler;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) unsigned int state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler;
@property (copy, nonatomic, readonly) NSArray *resolvableAccessories;
@property (copy, nonatomic) CDUnknownBlockType resolvableAccessoriesChangedHandler;
@property (nonatomic, readonly) HMAccessory *selfAccessory;
@property (copy, nonatomic, readonly) NSDictionary *selfAccessoryAppData;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryAppDataChangedHandler;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryUpdatedHandler;
@property (nonatomic, readonly) unsigned int selfAccessoryMediaAccessFlags;
@property (copy, nonatomic, readonly) NSString *selfAccessoryMediaAccessPassword;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryMediaAccessUpdatedHandler;
@property (nonatomic, readonly) HMMediaSystem *selfAccessoryMediaSystem;
@property (nonatomic, readonly) HMAccessory *selfAccessoryMediaSystemCounterpart;
@property (copy, nonatomic) NSString *selfAccessoryMediaSystemName;
@property (nonatomic, readonly) HMMediaSystemRole *selfAccessoryMediaSystemRole;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryMediaSystemUpdatedHandler;
@property (nonatomic, readonly) _Bool selfAccessorySiriEnabled;
@property (copy, nonatomic) CDUnknownBlockType selfAccessorySiriAccessUpdatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidated;
- (void)_interrupted;
- (void)activate;
- (void)_updateState;
- (void)_updateAccessories;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)mediaSystem:(id)arg1 didUpdateName:(id)arg2;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(_Bool)arg2;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)_activateIfNeeded;
- (void)_updateHomes;
- (void)_updateSelfAccessoryIfNeeded;
- (void)_updateSelfAccessoryMediaAccess;
- (void)_updateSelfAccessoryMediaSystem;
- (void)_updateSelfAccessorySiriAccess;
- (void)_updateUsers;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityForAccessoryWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityForUserWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityCompleted:(id)arg1 options:(unsigned long long)arg2 error:(id)arg3 label:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_findPairedPeerWithContext:(id)arg1;
- (void)_findPairedPeerWithContext:(id)arg1 label:(id)arg2 pairingIdentity:(id)arg3 error:(id)arg4;
- (id)_bestUserAndLabel:(id *)arg1;
- (id)_cuPairingIdentityWithHMFPairingIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_isOwnerOfHome:(id)arg1;
- (id)_selfAccessoryMediaSystemUncached:(id *)arg1;

@end
