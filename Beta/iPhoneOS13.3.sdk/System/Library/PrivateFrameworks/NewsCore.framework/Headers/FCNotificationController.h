/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCommandQueue, FCUserInfo, NSString;

@protocol FCCoreConfigurationManager;

@interface FCNotificationController : NSObject

{
    _Bool _publisherNotificationsAllowed;
    _Bool _appleNewsNotificationsAllowed;
    NSString *_notificationsUserID;
    NSString *_deviceToken;
    FCUserInfo *_userInfo;
    FCCommandQueue *_commandQueue;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property (retain, nonatomic) FCUserInfo *userInfo;
@property (retain, nonatomic) FCCommandQueue *commandQueue;
@property (retain, nonatomic) id <FCCoreConfigurationManager> configurationManager;
@property (copy, nonatomic) NSString *notificationsUserID;
@property (copy, nonatomic) NSString *deviceToken;
@property (nonatomic) _Bool publisherNotificationsAllowed;
@property (nonatomic) _Bool appleNewsNotificationsAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)userInfoDidChangeNotificationsUserID:(id)arg1;
- (_Bool)registerNotificationsForTagID:(id)arg1 isPaid:(_Bool)arg2;
- (_Bool)unregisterNotificationsForTagID:(id)arg1;
- (_Bool)refreshNotificationsForChannelIDs:(id)arg1 paidChannelIDs:(id)arg2;
- (void)refreshNotificationsFromAppleNews;
- (void)setNewIssueNotificationsEnabled:(_Bool)arg1;
- (id)initWithUserInfo:(id)arg1 commandQueue:(id)arg2 configurationManager:(id)arg3 publisherNotificationsAllowed:(_Bool)arg4 appleNewsNotificationsAllowed:(_Bool)arg5;
- (void)_registerDeviceToken:(id)arg1;
- (id)appendBreakingNewsIfNeededToChannelIDs:(id)arg1;
- (_Bool)setMarketingNotificationsEnabled:(_Bool)arg1 error:(id *)arg2;
- (void)registerDeviceToken:(id)arg1;

@end
