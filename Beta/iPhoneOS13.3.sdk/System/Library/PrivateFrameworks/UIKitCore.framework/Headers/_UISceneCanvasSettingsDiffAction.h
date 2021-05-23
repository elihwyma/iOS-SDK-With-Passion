/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _UICanvasSettingsDiffAction;

__attribute__((visibility("hidden")))
@interface _UISceneCanvasSettingsDiffAction : NSObject

{
    id <_UICanvasSettingsDiffAction> _canvasDiffAction;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sceneArrayFromCanvasArray:(id)arg1;

- (id)initWithCanvasDiffAction:(id)arg1;
- (void)_performActionsForUIScene:(id)arg1 withUpdatedFBSScene:(id)arg2 settingsDiff:(id)arg3 fromSettings:(id)arg4 transitionContext:(id)arg5 lifecycleActionType:(unsigned int)arg6;

@end
