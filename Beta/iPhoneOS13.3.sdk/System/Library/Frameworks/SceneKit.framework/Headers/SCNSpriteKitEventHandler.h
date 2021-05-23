/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, SKScene;

__attribute__((visibility("hidden")))
@interface SCNSpriteKitEventHandler : NSObject

{
    SKScene *_scene;
    NSMutableDictionary *_touchMap;
    _Bool _mouseIsDown;
    _Bool _rightMouseIsDown;
}

@property (retain, nonatomic) SKScene *scene;

- (id)init;
- (void)dealloc;
- (_Bool)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (_Bool)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
