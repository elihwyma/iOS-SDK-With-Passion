/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneDefinition.h>

@class FBSSceneClientIdentity, FBSSceneIdentity, FBSSceneSpecification;

@interface FBSMutableSceneDefinition : FBSSceneDefinition

@property (copy, nonatomic) FBSSceneIdentity *identity;
@property (copy, nonatomic) FBSSceneClientIdentity *clientIdentity;
@property (copy, nonatomic) FBSSceneSpecification *specification;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
