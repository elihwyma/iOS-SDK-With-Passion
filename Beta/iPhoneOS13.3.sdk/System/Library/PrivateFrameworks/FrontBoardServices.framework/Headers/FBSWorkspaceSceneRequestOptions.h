/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class FBSSceneClientSettings, NSString;

@interface FBSWorkspaceSceneRequestOptions : NSObject

{
    NSString *_identifier;
    FBSSceneClientSettings *_initialClientSettings;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) FBSSceneClientSettings *initialClientSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;

@end
