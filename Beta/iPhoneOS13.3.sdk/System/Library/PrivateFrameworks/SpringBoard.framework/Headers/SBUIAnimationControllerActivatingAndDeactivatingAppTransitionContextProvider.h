/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, SBApplicationSceneEntity;

@interface SBUIAnimationControllerActivatingAndDeactivatingAppTransitionContextProvider : NSObject

{
    SBApplicationSceneEntity *_toAppSceneEntity;
    SBApplicationSceneEntity *_fromAppSceneEntity;
    SBApplicationSceneEntity *_toApplicationSceneEntity;
    SBApplicationSceneEntity *_fromApplicationSceneEntity;
}

@property (retain, nonatomic) SBApplicationSceneEntity *activatingAppSceneEntity;
@property (retain, nonatomic) SBApplicationSceneEntity *deactivatingAppSceneEntity;
@property (copy, nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *toApplicationSceneEntity;
@property (copy, nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBApplicationSceneEntity *fromApplicationSceneEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transitionContextProviderWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;

- (id)initWithToApplicationSceneEntity:(id)arg1 fromApplicationSceneEntity:(id)arg2;

@end
