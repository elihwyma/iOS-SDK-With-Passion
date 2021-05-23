/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIUserNotificationAction.h>

@class NSDictionary, NSString;

@interface UIMutableUserNotificationAction : UIUserNotificationAction

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long behavior;
@property (copy, nonatomic) NSDictionary *parameters;
@property (nonatomic) unsigned long long activationMode;
@property (nonatomic, getter=isAuthenticationRequired) _Bool authenticationRequired;
@property (nonatomic, getter=isDestructive) _Bool destructive;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
