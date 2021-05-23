/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (nonatomic, getter=_lifecycleActionType, setter=_setLifecycleActionType:) unsigned long long lifecycleActionType;
@property (retain, nonatomic) NSDictionary *payload;
@property (nonatomic) _Bool forTesting;
@property (nonatomic) _Bool safeMode;
@property (nonatomic) double userLaunchEventTime;
@property (nonatomic) double execTime;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic) _Bool shouldTakeKeyboardFocus;
@property (nonatomic) _Bool waitForBackgroundTaskCompletion;
@property (nonatomic) long long statusBarAnimation;
@property (nonatomic) _Bool disableTouchCancellationOnRotation;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (_Bool)isUISubclass;

@end
