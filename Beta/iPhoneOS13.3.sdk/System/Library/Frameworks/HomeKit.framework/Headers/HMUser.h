/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAssistantAccessControl, HMFPairingIdentity, HMFUnfairLock, HMHome, HMHomeAccessControl, HMMediaContentProfileAccessControl, HMMutableArray, HMSettings, HMSettingsController, NSString, NSUUID, _HMContext;

@protocol HMUserDelegatePrivate, OS_dispatch_queue;

@interface HMUser : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    HMMutableArray *_pendingAccessoryInvitations;
    _Bool _currentUser;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHomeAccessControl *_homeAccessControl;
    HMAssistantAccessControl *_assistantAccessControl;
    HMMediaContentProfileAccessControl *_mediaContentProfileAccessControl;
    NSString *_userID;
    HMHome *_home;
    HMFPairingIdentity *_pairingIdentity;
    HMSettings *_settings;
    HMSettings *_privateSettings;
    _HMContext *_context;
    id <HMUserDelegatePrivate> _delegate;
    HMSettingsController *_settingsController;
    HMSettingsController *_privateSettingsController;
    NSUUID *_uuid;
}

@property (retain) _HMContext *context;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userID;
@property (copy) HMFPairingIdentity *pairingIdentity;
@property (weak) id <HMUserDelegatePrivate> delegate;
@property (readonly) HMSettingsController *settingsController;
@property (readonly) HMSettingsController *privateSettingsController;
@property (retain, nonatomic) HMHomeAccessControl *homeAccessControl;
@property (copy) HMAssistantAccessControl *assistantAccessControl;
@property (copy) HMMediaContentProfileAccessControl *mediaContentProfileAccessControl;
@property (nonatomic, readonly) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (nonatomic, getter=isCurrentUser) _Bool currentUser;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly) HMSettings *settings;
@property (readonly) HMSettings *privateSettings;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)pairingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)assistantAccessControlForHome:(id)arg1;
- (id)logIdentifier;
- (void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)userSettingsForHome:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (id)messageDestination;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (_Bool)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (_Bool)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (void)updateHomeAccessControl:(_Bool)arg1 remoteAccess:(_Bool)arg2 camerasAccess:(id)arg3;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 homeAccessControl:(id)arg5;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)sendClientShareURL:(id)arg1 shareToken:(id)arg2 containerID:(id)arg3 fromUser:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchShareLookupInfo:(CDUnknownBlockType)arg1;
- (void)_handleUpdatedAssistantAccessControl:(id)arg1;
- (void)_handleMultiUserStatusChangedNotification:(id)arg1;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)pendingAccessoryInvitations;
- (id)mediaContentProfileAccessControlForHome:(id)arg1;
- (void)updateMediaContentProfileAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
