/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, _UICanvasUserActivityManager;

__attribute__((visibility("hidden")))
@interface _UISceneUserActivityBSActionsHandler : NSObject

{
    _UICanvasUserActivityManager *_canvasUserActivityManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_launchOptionsFromActions:(id)arg1 forFBSScene:(id)arg2 uiSceneSession:(id)arg3 transitionContext:(id)arg4;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;

@end
