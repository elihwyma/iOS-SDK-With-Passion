/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class NSSet;

@interface RBSCompoundPredicate : RBSProcessPredicateImpl

{
    NSSet *_predicates;
}

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)matchesProcess:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;

@end
