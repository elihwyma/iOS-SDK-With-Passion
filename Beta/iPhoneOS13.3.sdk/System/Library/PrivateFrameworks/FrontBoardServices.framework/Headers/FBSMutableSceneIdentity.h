/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneIdentity.h>

@class NSString;

@interface FBSMutableSceneIdentity : FBSSceneIdentity

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workspaceIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
