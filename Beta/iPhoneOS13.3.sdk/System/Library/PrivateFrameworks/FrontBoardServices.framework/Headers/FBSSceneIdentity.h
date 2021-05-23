/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@interface FBSSceneIdentity : NSObject <Swift>

{
    NSString *_identifier;
    NSString *_workspaceIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *workspaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identity;
+ (id)identityForIdentifier:(id)arg1 workspaceIdentifier:(id)arg2;
+ (id)identityForIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
