/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCIssueReadingHistory, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;

@protocol FCContentContext, FCPrivateDataContextInternal, FCPushNotificationHandling;

@interface FCPrivateDataContext : NSObject

{
    _Bool _privateDataSyncingEnabled;
    FCIssueReadingHistory *_issueReadingHistory;
    FCPersonalizationData *_personalizationData;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCSubscriptionList *_subscriptionList;
    FCUserInfo *_userInfo;
    NSString *_privateDataDirectory;
    FCTagSettings *_tagSettings;
    id <FCPushNotificationHandling> _privatePushNotificationHandler;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id <FCPrivateDataContextInternal> _internalPrivateDataContext;
    id <FCContentContext> _contentContext;
}

@property (retain, nonatomic) id <FCPrivateDataContextInternal> internalPrivateDataContext;
@property (retain, nonatomic) id <FCContentContext> contentContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) FCIssueReadingHistory *issueReadingHistory;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (nonatomic, readonly) FCUserInfo *userInfo;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) id <FCPushNotificationHandling> privatePushNotificationHandler;
@property (nonatomic, readonly, getter=isPrivateDataSyncingEnabled) _Bool privateDataSyncingEnabled;
@property (copy, nonatomic, readonly) NSString *privateDataDirectory;

- (id)init;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDataHostDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(_Bool)arg7;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 privateDatabase:(id)arg3 privateDataDirectory:(id)arg4 privateDataActionProvider:(id)arg5 encryptionDelegate:(id)arg6 networkBehaviorMonitor:(id)arg7 privateDataSyncingEnabled:(_Bool)arg8;
- (void)preparePrivateDataControllersForUse;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)_privateDataControllers;

@end
