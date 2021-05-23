/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <NSObject.h>

#import <RunningBoardServices/Swift-Protocol.h>

@class NSString, RBSProcessIdentity, RBSProcessPredicateImpl;

@interface RBSProcessPredicate : NSObject <Swift>

{
    RBSProcessPredicateImpl *_predicate;
}

@property (nonatomic, readonly) unsigned int euid;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *extensionPoint;
@property (copy, nonatomic, readonly) NSString *jobLabel;
@property (copy, nonatomic, readonly) NSString *serviceName;
@property (copy, nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly) RBSProcessPredicateImpl *predicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)predicate;
+ (_Bool)supportsBSXPCSecureCoding;
+ (id)predicateMatching:(id)arg1;
+ (id)predicatePowerLogProcesses;
+ (id)predicateMatchingIdentifier:(id)arg1;
+ (id)predicateMatchingIdentity:(id)arg1;
+ (id)predicateMatchingPredicates:(id)arg1;
+ (id)predicateMatchingEuid:(unsigned int)arg1;
+ (id)predicateMatchingBundleIdentifier:(id)arg1;
+ (id)predicateMatchingExtensionPoint:(id)arg1;
+ (id)predicateMatchingHandle:(id)arg1;
+ (id)predicateMatchingJobLabel:(id)arg1;
+ (id)predicateMatchingServiceName:(id)arg1;
+ (id)predicateMatchingTarget:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)processIdentifier;
- (id)succinctDescription;
- (_Bool)matchesProcess:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)processPredicate;
- (id)initWithPredicate:(id)arg1;

@end
