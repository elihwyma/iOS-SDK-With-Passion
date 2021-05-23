/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <BSAction.h>

@class FBSSceneSnapshotContext;

@interface FBSSceneSnapshotRequestAction : BSAction

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) FBSSceneSnapshotContext *context;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)initWithType:(unsigned long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
