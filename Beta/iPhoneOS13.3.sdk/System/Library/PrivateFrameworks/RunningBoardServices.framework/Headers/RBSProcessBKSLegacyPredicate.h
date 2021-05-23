/*
 Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl

+ (id)legacyPredicate;
+ (id)legacyPredicateMatchingBundleIdentifier:(id)arg1;
+ (id)legacyPredicateMatchingProcessIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (_Bool)matchesProcess:(id)arg1;

@end
