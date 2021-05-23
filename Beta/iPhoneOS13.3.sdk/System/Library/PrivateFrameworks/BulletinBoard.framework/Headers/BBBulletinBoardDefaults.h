/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalSpokenNotificationSetting;
@property (nonatomic, getter=isSpokenNotificationsSupported) _Bool spokenNotificationsSupported;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
