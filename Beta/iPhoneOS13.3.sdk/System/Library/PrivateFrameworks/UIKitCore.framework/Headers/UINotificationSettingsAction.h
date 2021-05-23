/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UINotificationSettingsAction : BSAction

{
    UNNotification *_notification;
}

@property (copy, nonatomic, readonly) UNNotification *notification;

- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)UIActionType;
- (id)initWithNotification:(id)arg1;

@end
