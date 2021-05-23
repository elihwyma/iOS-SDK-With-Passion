/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneMessage.h>

@class FBSSceneClientSettingsDiff, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSSet;

@interface FBSSceneEvent : FBSSceneMessage

{
    long long _source;
    FBSSceneSettingsDiff *_settingsDiff;
    FBSSceneClientSettingsDiff *_clientSettingsDiff;
    FBSSceneTransitionContext *_transitionContext;
}

@property (nonatomic) long long source;
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (retain, nonatomic) FBSSceneClientSettingsDiff *clientSettingsDiff;
@property (retain, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (nonatomic, readonly) NSSet *actions;

- (id)init;
- (id)description;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
