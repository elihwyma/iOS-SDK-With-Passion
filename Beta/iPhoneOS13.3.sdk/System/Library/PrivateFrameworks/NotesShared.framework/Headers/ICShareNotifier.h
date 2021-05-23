/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICShareNotifier : NSObject

+ (_Bool)shouldShowNotificationForNote:(id)arg1;
+ (id)replicaIDsThatEditedTimestamp:(id)arg1 sinceTimestamp:(id)arg2;
+ (id)participantsWithReplicaIDs:(id)arg1 inNote:(id)arg2;
+ (void)showNotificationForNote:(id)arg1 editors:(id)arg2;
+ (_Bool)shouldPreventNotificationsForRecordID:(id)arg1;
+ (id)notificationTitleForEditors:(id)arg1;
+ (void)showNotificationWithTitle:(id)arg1 message:(id)arg2 userInfo:(id)arg3;
+ (id)displayableEditorNames:(id)arg1;
+ (id)defaultsKeyForPreventingNotificationsForIdentifier:(id)arg1;
+ (void)clearNotificationForRecordID:(id)arg1;
+ (void)showNotificationIfNecessaryForCloudObject:(id)arg1 accountID:(id)arg2;
+ (void)setShouldPreventNotifications:(_Bool)arg1 forRecordID:(id)arg2;

@end
