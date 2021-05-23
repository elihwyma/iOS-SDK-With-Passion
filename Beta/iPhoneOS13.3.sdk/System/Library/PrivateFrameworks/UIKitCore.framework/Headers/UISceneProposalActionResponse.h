/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <BaseBoard/BSActionResponse.h>

@class NSString;

@interface UISceneProposalActionResponse : BSActionResponse

@property (copy, nonatomic, readonly) NSString *sceneIdentifier;

+ (id)responseWithSceneID:(id)arg1;

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)responseWithSceneID:(id)arg1;

@end
