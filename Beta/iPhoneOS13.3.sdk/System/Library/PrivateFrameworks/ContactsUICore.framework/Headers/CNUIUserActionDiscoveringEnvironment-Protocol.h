/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <ContactsUICore/Swift-Protocol.h>

@class CNContactStore, CNUIIDSContactPropertyResolver;

@protocol CNCapabilities, CNLSApplicationWorkspace, CNMCProfileConnection, CNSchedulerProvider, CNTUCallProviderManager, CNUIDefaultUserActionFetcher, CNUIRTTUtilities, CNUIUserActionTargetDiscovering;

@protocol CNUIUserActionDiscoveringEnvironment <Swift>

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

- (unsigned short)copyWithContactStore: /* Error: Ran out of types for this method. */;

@end
