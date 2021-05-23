/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, NSString, UIScene;

__attribute__((visibility("hidden")))
@interface _UISceneDisplayLink : NSObject

{
    NSMutableArray *_targetsAndActions;
    CADisplayLink *_displayLink;
    UIScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

+ (id)sceneDisplayLinkForWindowScene:(id)arg1;

- (void)_scene:(id)arg1 didTransitionFromActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (id)initWithScene:(id)arg1;
- (void)_displayLinkTick:(id)arg1;
- (void)_updateStatus;
- (void)registerTarget:(id)arg1 action:(SEL)arg2;
- (void)unregisterTarget:(id)arg1 action:(SEL)arg2;

@end
