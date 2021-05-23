/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSAttribute.h>

@class NSString;

@interface RBSDomainAttribute : RBSAttribute

{
    NSString *_domain;
    NSString *_name;
    NSString *_sourceEnvironment;
}

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sourceEnvironment;
@property (copy, nonatomic, readonly) NSString *fullyQualifiedName;

+ (id)attributeWithDomain:(id)arg1 name:(id)arg2;
+ (id)attributeWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)succinctDescriptionBuilder;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)_initWithDomain:(id)arg1 name:(id)arg2 sourceEnvironment:(id)arg3;

@end
