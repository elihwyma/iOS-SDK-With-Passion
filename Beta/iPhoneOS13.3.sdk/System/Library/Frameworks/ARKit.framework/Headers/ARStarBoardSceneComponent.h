/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIScene;

@interface ARStarBoardSceneComponent : NSObject

{
    UIScene *_scene;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;

- (void)_scene:(id)arg1 willTransitionToActivationState:(long long)arg2 withReasonsMask:(unsigned long long)arg3;
- (void)_sceneWillInvalidate:(id)arg1;
- (id)initWithScene:(id)arg1;

@end
