/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class NSString;

@interface RBSProcessStringPredicate : RBSProcessPredicateImpl

{
    NSString *_identifier;
}

@property (copy, nonatomic, readonly) NSString *identifier;

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
