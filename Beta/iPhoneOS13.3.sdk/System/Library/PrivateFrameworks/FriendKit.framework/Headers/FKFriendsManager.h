/*
 Image: /System/Library/PrivateFrameworks/FriendKit.framework/FriendKit
 */

#import <Foundation/NSObject.h>

@interface FKFriendsManager : NSObject

+ (id)managerForDomain:(id)arg1;
+ (void)setGroupSize:(unsigned long long)arg1 domain:(id)arg2;
+ (void)setMaxGroupCount:(unsigned long long)arg1 domain:(id)arg2;
+ (void)setFriendsChangedExternallyNotificationName:(id)arg1 domain:(id)arg2;
+ (void)setEnableEmptyTrailingGroup:(_Bool)arg1 domain:(id)arg2;
+ (void)setFriendGroupTitleChangedExternallyNotificationName:(id)arg1 domain:(id)arg2;
+ (void)setRefreshAgainstContactsOnInitEnabled:(_Bool)arg1 domain:(id)arg2;
+ (id)collapseChangeLogsIntoChangeLog:(id)arg1;

@end
