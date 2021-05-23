/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class AFSiriTask;

@interface UISiriTaskAction : BSAction

@property (retain, nonatomic, readonly) AFSiriTask *payload;

- (id)initWithPayload:(id)arg1;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;

@end
