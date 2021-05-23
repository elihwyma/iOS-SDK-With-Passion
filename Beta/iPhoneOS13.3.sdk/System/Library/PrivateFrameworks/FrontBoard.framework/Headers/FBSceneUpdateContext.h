/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class FBSSceneSettings, FBSSceneSettingsDiff, FBSSceneTransitionContext, NSString;

@protocol NSObject><NSCopying;

@interface FBSceneUpdateContext : NSObject <Swift>

{
    NSString *_sceneID;
    unsigned long long _transactionID;
    FBSSceneSettings *_settings;
    FBSSceneSettingsDiff *_settingsDiff;
    FBSSceneTransitionContext *_transitionContext;
    id <NSObject><NSCopying> _clientContext;
}

@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned long long transactionID;
@property (retain, nonatomic) FBSSceneSettings *settings;
@property (retain, nonatomic) FBSSceneSettingsDiff *settingsDiff;
@property (weak, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (copy, nonatomic) id <NSObject><NSCopying> clientContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextWithScene:(id)arg1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
