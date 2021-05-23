/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBScene, NSString, SBWindow;

@interface SBFullScreenOcclusionTestRecipe : NSObject <Swift>

{
    SBWindow *_window;
    FBScene *_scene;
    FBScene *_scene2;
    _Bool _doTheThing;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)load;

- (id)init;
- (void)dealloc;
- (id)title;
- (void)sceneManager:(id)arg1 willDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3;
- (void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)handleVolumeIncrease;
- (void)handleVolumeDecrease;

@end
