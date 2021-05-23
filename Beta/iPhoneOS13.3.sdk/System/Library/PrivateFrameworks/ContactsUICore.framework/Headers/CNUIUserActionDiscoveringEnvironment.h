/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNContactStore, CNUIIDSContactPropertyResolver, NSString;

@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionTargetDiscovering;

@interface CNUIUserActionDiscoveringEnvironment : NSObject

{
    CNContactStore *_contactStore;
    id <CNLSApplicationWorkspace> _applicationWorkspace;
    id <CNTUCallProviderManager> _callProviderManager;
    CNUIIDSContactPropertyResolver *_idsContactPropertyResolver;
    id <CNMCProfileConnection> _profileConnection;
    id <CNCapabilities> _capabilities;
    id <CNSchedulerProvider> _schedulerProvider;
    id <CNSchedulerProvider> _highLatencySchedulerProvider;
    id <CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;
    id <CNUIRTTUtilities> _ttyUtilities;
    id <CNUIUserActionTargetDiscovering> _targetDiscoveringHelper;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) id <CNLSApplicationWorkspace> applicationWorkspace;
@property (nonatomic, readonly) id <CNTUCallProviderManager> callProviderManager;
@property (nonatomic, readonly) CNUIIDSContactPropertyResolver *idsContactPropertyResolver;
@property (nonatomic, readonly) id <CNMCProfileConnection> profileConnection;
@property (nonatomic, readonly) id <CNCapabilities> capabilities;
@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) id <CNSchedulerProvider> schedulerProvider;
@property (nonatomic, readonly) id <CNSchedulerProvider> highLatencySchedulerProvider;
@property (nonatomic, readonly) id <CNUIDefaultUserActionFetcher> defaultUserActionFetcher;
@property (nonatomic, readonly) id <CNUIRTTUtilities> ttyUtilities;
@property (nonatomic, readonly) id <CNUIUserActionTargetDiscovering> targetDiscoveringHelper;

- (id)init;
- (id)nts_lazyContactStore;
- (id)initWithIDSAvailabilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;
- (id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9 ttyUtilities:(id)arg10;
- (id)copyWithContactStore:(id)arg1;
- (id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4;

@end
