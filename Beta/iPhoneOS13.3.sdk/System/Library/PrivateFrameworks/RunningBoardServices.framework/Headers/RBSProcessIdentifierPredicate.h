/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentifierPredicate : RBSProcessPredicateImpl

{
    id <RBSProcessIdentifier> _identifier;
}

@property (nonatomic, readonly) id <RBSProcessIdentifier> identifier;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)matchesProcess:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)processPredicate;

@end
