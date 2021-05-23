/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class UNNotificationResponse;

@interface UINotificationResponseAction : BSAction

{
    UNNotificationResponse *_response;
}

@property (retain, nonatomic, readonly) UNNotificationResponse *response;
@property (nonatomic, readonly) _Bool isLocal;
@property (nonatomic, readonly) _Bool isRemote;
@property (nonatomic, readonly) _Bool isDefaultAction;

- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)UIActionType;
- (id)_trigger;
- (id)initWithResponse:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
