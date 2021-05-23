/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BKSAnimationFenceHandle, BSAnimationSettings, BSMutableSettings, BSProcessHandle, FBSceneUpdateContext, FBWatchdogTransitionContext, NSSet, NSString;

@interface FBSSceneTransitionContext : NSObject <Swift>

{
    FBSceneUpdateContext *_updateContext;
    FBWatchdogTransitionContext *_watchdogTransitionContext;
    _Bool _allowCPUThrottling;
    BSAnimationSettings *_animationSettings;
    BKSAnimationFenceHandle *_animationFence;
    NSSet *_actions;
    BSProcessHandle *_originatingProcess;
    BSMutableSettings *_otherSettings;
    BSMutableSettings *_transientLocalClientSettings;
}

@property (retain, nonatomic) FBSceneUpdateContext *updateContext;
@property (retain, nonatomic) FBWatchdogTransitionContext *watchdogTransitionContext;
@property (copy, nonatomic) BSAnimationSettings *animationSettings;
@property (retain, nonatomic) BKSAnimationFenceHandle *animationFence;
@property (copy, nonatomic) NSSet *actions;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transitionContext;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (_Bool)_isEmpty;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)otherSettings;
- (id)transientLocalClientSettings;

@end
