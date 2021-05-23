/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

#import <UserNotificationsKit/NCNotificationRequest.h>

@class BBBulletin, BBObserver, NSArray, NSString;

@interface NCNotificationRequest (Bulletin)

@property (nonatomic, readonly) BBBulletin *bulletin;
@property (nonatomic, readonly) BBObserver *observer;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (nonatomic, readonly) _Bool hasAttachments;
@property (nonatomic, readonly) _Bool hasOnlySingleTextInputAction;
@property (nonatomic, readonly) _Bool hasOnlySingleMinimalTextInputAction;
@property (nonatomic, readonly) _Bool showsTextInputOnAppearance;
@property (copy, nonatomic, readonly) NSArray *defaultEnvironmentActions;
@property (copy, nonatomic, readonly) NSArray *minimalEnvironmentActions;

+ (id)_notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5 hasPlayLightsAndSirens:(_Bool)arg6;
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4;
+ (id)notificationRequestForBulletin:(id)arg1 observer:(id)arg2 sectionInfo:(id)arg3 feed:(unsigned long long)arg4 playLightsAndSirens:(_Bool)arg5;

- (_Bool)hasSameContactAsNotificationRequest:(id)arg1;

@end
