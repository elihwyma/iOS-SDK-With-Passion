/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@protocol NCNotificationActionRunner;

@interface NCNotificationAction : NSObject

{
    NSString *_identifier;
    NSString *_title;
    unsigned long long _activationMode;
    NSURL *_launchURL;
    NSString *_launchBundleID;
    unsigned long long _behavior;
    NSDictionary *_behaviorParameters;
    id <NCNotificationActionRunner> _actionRunner;
    _Bool _requiresAuthentication;
    _Bool _destructiveAction;
    _Bool _shouldDismissNotification;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long activationMode;
@property (copy, nonatomic, readonly) NSURL *launchURL;
@property (copy, nonatomic, readonly) NSString *launchBundleID;
@property (nonatomic, readonly) unsigned long long behavior;
@property (copy, nonatomic, readonly) NSDictionary *behaviorParameters;
@property (nonatomic, readonly) id <NCNotificationActionRunner> actionRunner;
@property (nonatomic, readonly, getter=isSystemAction) _Bool systemAction;
@property (nonatomic, readonly) _Bool requiresAuthentication;
@property (nonatomic, readonly, getter=isDestructiveAction) _Bool destructiveAction;
@property (nonatomic, readonly) _Bool shouldDismissNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNotificationAction:(id)arg1;

@end
