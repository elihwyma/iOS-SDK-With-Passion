/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UserNotificationsKit/NCNotificationRequest.h>

@interface NCNotificationRequest (AlertSuppression)

+ (id)_destinations;
+ (id)notificationRequestWithCardItem:(id)arg1;
+ (id)notificationRequestWithAlertItem:(id)arg1;
+ (id)_notificationOptionsForAlertItem:(id)arg1;
+ (long long)_soundTypeForSBSoundType:(long long)arg1;
+ (id)_notificationSoundFromSound:(id)arg1;

- (_Bool)sb_shouldSuppressAlert;

@end
