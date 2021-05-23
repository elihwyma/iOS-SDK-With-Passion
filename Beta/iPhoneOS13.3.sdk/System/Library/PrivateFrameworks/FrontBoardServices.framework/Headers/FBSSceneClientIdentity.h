/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString, RBSProcessIdentity;

@interface FBSSceneClientIdentity : NSObject <Swift>

{
    _Bool _local;
    RBSProcessIdentity *_processIdentity;
}

@property (nonatomic, readonly, getter=isLocal) _Bool local;
@property (copy, nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)identityForProcessIdentity:(id)arg1;
+ (id)localIdentity;
+ (id)identityForBundleID:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
