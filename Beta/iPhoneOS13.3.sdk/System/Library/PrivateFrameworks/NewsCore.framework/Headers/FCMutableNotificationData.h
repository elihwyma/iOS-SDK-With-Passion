/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCNotificationDropboxData.h>

@class NSMutableDictionary, NSString;

@interface FCMutableNotificationData : FCNotificationDropboxData

@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *baseURLString;
@property (copy, nonatomic, readonly) NSString *notificationUserID;
@property (copy, nonatomic, readonly) NSString *deviceToken;
@property (copy, nonatomic, readonly) NSString *storefrontID;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setStorefrontID:(id)arg1;
- (void)setBaseURLString:(id)arg1;
- (void)setNotificationUserID:(id)arg1;

@end
