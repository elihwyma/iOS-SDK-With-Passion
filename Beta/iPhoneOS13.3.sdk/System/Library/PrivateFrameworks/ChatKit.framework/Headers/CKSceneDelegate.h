/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIWindow, UIWindowScene;

@interface CKSceneDelegate : NSObject

{
    _Bool _handlingLaunchTask;
    UIWindowScene *_scene;
    UIWindow *_window;
}

@property (weak, nonatomic, readonly) UIWindowScene *scene;
@property (retain, nonatomic) UIWindow *window;
@property (nonatomic, getter=isHandlingLaunchTask) _Bool handlingLaunchTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)userInfoDictionaryForState:(id)arg1;
+ (id)stateFromUserInfoDictionary:(id)arg1;
+ (Class)containerClassForType:(long long)arg1;

- (id)init;
- (long long)type;
- (void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3;
- (void)sceneDidDisconnect:(id)arg1;
- (void)sceneDidBecomeActive:(id)arg1;
- (void)sceneWillResignActive:(id)arg1;
- (void)sceneWillEnterForeground:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)scene:(id)arg1 openURLContexts:(id)arg2;
- (id)stateRestorationActivityForScene:(id)arg1;
- (void)scene:(id)arg1 continueUserActivity:(id)arg2;
- (void)updateSceneActivationConditions;
- (void)updateSceneTitleForConversation:(id)arg1;
- (id)predicateMatchingConversation:(id)arg1;
- (id)prefersToActivatePredicate;
- (id)canActivatePredicate;

@end
