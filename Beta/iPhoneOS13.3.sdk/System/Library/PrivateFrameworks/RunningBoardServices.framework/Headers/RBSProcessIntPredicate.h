/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessIntPredicate : RBSProcessPredicateImpl

{
    unsigned long long _identifier;
}

@property (nonatomic, readonly) unsigned long long identifier;

+ (_Bool)supportsBSXPCSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithIdentifier:(unsigned long long)arg1;
- (_Bool)matchesProcess:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)processPredicate;

@end
