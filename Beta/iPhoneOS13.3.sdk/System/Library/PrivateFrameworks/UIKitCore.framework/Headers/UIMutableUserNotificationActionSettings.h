/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIUserNotificationActionSettings.h>

@class NSString;

@interface UIMutableUserNotificationActionSettings : UIUserNotificationActionSettings

@property (copy, nonatomic) NSString *category;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setActions:(id)arg1 forContext:(unsigned long long)arg2;

@end
