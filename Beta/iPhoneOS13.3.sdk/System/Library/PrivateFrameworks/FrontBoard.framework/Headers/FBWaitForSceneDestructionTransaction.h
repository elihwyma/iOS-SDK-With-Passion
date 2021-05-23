/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBTransaction.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBScene, FBSceneManager, NSString;

@interface FBWaitForSceneDestructionTransaction : FBTransaction <Swift>

{
    FBSceneManager *_sceneManager;
    FBScene *_sceneToWaitForDeath;
}

@property (nonatomic, readonly) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_begin;
- (_Bool)_canBeInterrupted;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (id)initWithScene:(id)arg1;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;

@end
