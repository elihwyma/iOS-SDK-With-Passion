/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScene, UISceneSession;

__attribute__((visibility("hidden")))
@interface _UISceneUnassociatedContext : NSObject

{
    UIScene *_scene;
    UISceneSession *_session;
}

@property (retain, nonatomic) UIScene *scene;
@property (retain, nonatomic) UISceneSession *session;

@end
