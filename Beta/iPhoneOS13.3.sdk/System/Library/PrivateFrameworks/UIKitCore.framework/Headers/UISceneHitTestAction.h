/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@interface UISceneHitTestAction : BSAction

@property (nonatomic, readonly) struct CGPoint touchLocation;

- (void)sendResponse:(id)arg1;
- (long long)UIActionType;
- (id)initWithTouchLocation:(struct CGPoint)arg1 responseHandler:(CDUnknownBlockType)arg2;

@end
