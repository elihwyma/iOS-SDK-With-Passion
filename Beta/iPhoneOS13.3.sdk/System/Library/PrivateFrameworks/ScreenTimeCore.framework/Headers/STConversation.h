/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <Foundation/NSObject.h>

@class CNContactStore, CNDowntimeWhitelist, DMFCommunicationPolicyMonitor, DMFEmergencyModeMonitor, NSMapTable, NSString, STManagementState;

@protocol OS_dispatch_queue;

@interface STConversation : NSObject

{
    NSMapTable *_contextByHandles;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    NSObject *_didFetchInitialStateLock;
    _Bool _emergencyModeEnabled;
    _Bool _didFetchInitialScreenTimePolicyState;
    _Bool _didFetchInitialApplicationState;
    _Bool _didFetchInitialEmergencyModeState;
    int _policyNotifyToken;
    int _emergencyModeNotifyToken;
    CNContactStore *_contactsStore;
    CNDowntimeWhitelist *_whitelist;
    STManagementState *_managementState;
    DMFCommunicationPolicyMonitor *_policyMonitor;
    NSString *_bundleIdentifier;
    long long _generalScreenTimePolicy;
    long long _whileLimitedPolicy;
    unsigned long long _currentApplicationState;
    DMFEmergencyModeMonitor *_emergencyModeMonitor;
    STConversation *_me;
    CDUnknownBlockType _conversationCompletionHandler;
}

@property (readonly) CNContactStore *contactsStore;
@property (readonly) CNDowntimeWhitelist *whitelist;
@property (retain) STManagementState *managementState;
@property (retain) DMFCommunicationPolicyMonitor *policyMonitor;
@property (copy, readonly) NSString *bundleIdentifier;
@property long long generalScreenTimePolicy;
@property long long whileLimitedPolicy;
@property unsigned long long currentApplicationState;
@property (retain) DMFEmergencyModeMonitor *emergencyModeMonitor;
@property _Bool emergencyModeEnabled;
@property _Bool didFetchInitialScreenTimePolicyState;
@property _Bool didFetchInitialApplicationState;
@property _Bool didFetchInitialEmergencyModeState;
@property (readonly) int policyNotifyToken;
@property (readonly) int emergencyModeNotifyToken;
@property (retain) STConversation *me;
@property (copy) CDUnknownBlockType conversationCompletionHandler;

+ (void)requestConversationWithBundleIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)allowableByContactsHandles:(id)arg1;
- (id)initSynchronouslyWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stConversationCommonInitWithBundleIdentifier:(id)arg1 contactStore:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stConversationCommonInitSetupObservationOfStateChanges;
- (void)callCompletionHandlerIfNeededWithConversation:(id)arg1 error:(id)arg2;
- (void)_updateAllContextsUpdateGeneral:(_Bool)arg1 updateLimited:(_Bool)arg2 updateCurrentApplicationState:(_Bool)arg3 updateAllowedByContactsHandle:(_Bool)arg4 refreshContacts:(_Bool)arg5 updateEmergencyMode:(_Bool)arg6;
- (void)_currentApplicationStateDidChange;
- (void)_screenTimePolicyDidChange;
- (void)_emergencyModeDidChange;
- (void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
- (void)_contactsStoreDidChange;
- (void)_populateAllowedContactsByHandlesForContactHandles:(id)arg1 context:(id)arg2;
- (void)_updateContext:(id)arg1 forHandles:(id)arg2 updateGeneral:(_Bool)arg3 updateLimited:(_Bool)arg4 updateCurrentApplicationState:(_Bool)arg5 updateAllowedByContactsHandle:(_Bool)arg6 refreshContacts:(_Bool)arg7 updateEmergencyMode:(_Bool)arg8;
- (_Bool)_shouldGeneralScreenTimeAllowHandles:(id)arg1 context:(id)arg2;
- (_Bool)_shouldWhileLimitedAllowHandles:(id)arg1 context:(id)arg2;
- (id)_contactsByHandle:(id)arg1 error:(id *)arg2;
- (_Bool)_doesContainAtLeastOneContactInHandles:(id)arg1 contactsByHandle:(id)arg2;
- (id)_filteredArrayForKnownHandlesInArray:(id)arg1;

@end
