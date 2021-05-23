/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class FCIssueReadingHistory, FCNetworkBehaviorMonitor, FCPersonalizationData, FCPrivateChannelMembershipController, FCReadingHistory, FCReadingList, FCSubscriptionList, FCTagSettings, FCUserInfo, NSString;

@protocol FCPrivateDataContextInternal, FCPushNotificationHandling;

@protocol FCPrivateDataContext <Swift>

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
@property (nonatomic, readonly) id <FCPrivateDataContextInternal> internalPrivateDataContext;

- (unsigned short)privateStoreWithName:version:options: /* Error: Ran out of types for this method. */;

@end
