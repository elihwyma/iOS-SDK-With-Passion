/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@interface UIStatusBarTapAction : BSAction

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double xPosition;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithType:(long long)arg1 xPosition:(double)arg2;

@end
