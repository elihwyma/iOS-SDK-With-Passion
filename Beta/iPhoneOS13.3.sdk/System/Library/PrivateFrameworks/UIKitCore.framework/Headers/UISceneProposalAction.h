/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSAction.h>

@class NSString;

@interface UISceneProposalAction : BSAction

@property (copy, nonatomic, readonly) NSString *sceneIdentifier;
@property (copy, nonatomic, readonly) BSAction *action;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)UIActionType;
- (id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
