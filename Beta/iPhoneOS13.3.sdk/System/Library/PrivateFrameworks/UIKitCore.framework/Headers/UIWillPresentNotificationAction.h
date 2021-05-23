/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class UNNotification;

@interface UIWillPresentNotificationAction : BSAction

{
    _Bool _isDeliverable;
    UNNotification *_notification;
}

@property (retain, nonatomic, readonly) UNNotification *notification;
@property (nonatomic, readonly) _Bool isDeliverable;
@property (nonatomic, readonly) _Bool isLocal;
@property (nonatomic, readonly) _Bool isRemote;

- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)UIActionType;
- (id)_trigger;
- (id)initWithNotification:(id)arg1 deliverable:(_Bool)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithNotification:(id)arg1 timeout:(double)arg2 withHandler:(CDUnknownBlockType)arg3;

@end
