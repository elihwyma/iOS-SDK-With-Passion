/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <UserNotifications/UNNotificationContent.h>

@interface UNNotificationContent (BLTBackwardCompatible)

+ (void)blt_swizzleEncodeWithCoder;

- (void)blt_encodeWithCoder:(id)arg1;
- (id)_blt_encodedShouldAddToNotificationsList;
- (void)_blt_setEncodedShouldAddToNotificationsList:(id)arg1;
- (void)blt_preEncodeShouldAddToNotificationsList:(_Bool)arg1;
- (void)blt_postEncode;

@end
