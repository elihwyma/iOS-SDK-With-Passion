/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBSSceneSettings, FBSSceneTransitionContext, FBSceneUpdateContext, NSString;

@interface FBProcessWatchdogEventContext : NSObject <Swift>

{
    long long _event;
    FBSSceneSettings *_sceneSettings;
    FBSSceneTransitionContext *_sceneTransitionContext;
    FBSceneUpdateContext *_sceneUpdateContext;
}

@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) FBSceneUpdateContext *sceneUpdateContext;
@property (nonatomic, readonly) FBSSceneSettings *sceneSettings;
@property (weak, nonatomic, readonly) FBSSceneTransitionContext *sceneTransitionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
