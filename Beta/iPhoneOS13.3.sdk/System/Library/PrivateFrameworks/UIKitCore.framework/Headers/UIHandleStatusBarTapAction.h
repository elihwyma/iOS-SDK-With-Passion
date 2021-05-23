/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@interface UIHandleStatusBarTapAction : BSAction

@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) int statusBarStyleOverride;

- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithStatusBarStyle:(long long)arg1;
- (id)initWithStatusBarStyleOverride:(int)arg1;
- (id)initWithStatusBarStyle:(long long)arg1 andStatusBarStyleOverride:(int)arg2;

@end
