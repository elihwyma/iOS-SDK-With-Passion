/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCEndpointConnection.h>

@class FCFileCoordinatedNotificationDropbox, NSString;

@protocol FCBundleSubscriptionManagerType;

@interface FCNotificationsEndpointConnection : FCEndpointConnection

{
    NSString *_deviceType;
    NSString *_deviceOSVersion;
    FCFileCoordinatedNotificationDropbox *_fileCoordinatedNotificationDropbox;
    id <FCBundleSubscriptionManagerType> _bundleSubscriptionManager;
}

@property (copy, nonatomic) NSString *deviceType;
@property (copy, nonatomic) NSString *deviceOSVersion;
@property (retain, nonatomic) FCFileCoordinatedNotificationDropbox *fileCoordinatedNotificationDropbox;
@property (retain, nonatomic) id <FCBundleSubscriptionManagerType> bundleSubscriptionManager;

- (void)configurationManager:(id)arg1 configurationDidChange:(id)arg2;
- (void)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)subscribeNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5 callbackQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)unsubscribeNotificationsForChannelIDs:(id)arg1 userID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4 callbackQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)initWithConfigurationManager:(id)arg1 bundleSubscriptionManager:(id)arg2;
- (id)_notificationDataInDropbox;
- (id)_pushNotifySubscriptionRequestWithChannelIDs:(id)arg1 paidChannelIDs:(id)arg2 userID:(id)arg3 deviceToken:(id)arg4 storefrontID:(id)arg5;
- (void)_sendNotificationsSubscriptionRequest:(id)arg1 pathComponent:(id)arg2 callbackQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateNotificationDropboxDataWithBaseURL:(id)arg1 notificationUserID:(id)arg2 deviceToken:(id)arg3 storefrontID:(id)arg4;
- (id)_marketingSubscriptionRequestWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3;
- (id)_deviceInfoWithDeviceToken:(id)arg1;
- (id)_notificationEntitiesWithChannelIDs:(id)arg1 isPaid:(_Bool)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 editorialChannelID:(id)arg4;
- (id)_notificationEntitiyWithChannelIDs:(id)arg1 isPaid:(_Bool)arg2 paidBundleSubscriptionStatus:(unsigned long long)arg3 notificationType:(int)arg4;
- (int)_pbNotificationEntityPaidBundleSubscriptionStatusFromSubscriptionState:(unsigned long long)arg1;
- (id)initWithBaseURLString:(id)arg1;
- (void)registerDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)unregisterDeviceWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)modifyMarketingSubscriptionWithType:(int)arg1 action:(int)arg2 dsid:(id)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
