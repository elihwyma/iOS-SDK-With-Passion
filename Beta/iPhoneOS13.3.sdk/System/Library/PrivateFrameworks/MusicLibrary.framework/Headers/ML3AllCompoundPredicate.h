/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3CompoundPredicate.h>

@interface ML3AllCompoundPredicate : ML3CompoundPredicate

+ (_Bool)supportsSecureCoding;
+ (id)predicateByFlatteningAllCompoundPredicate:(id)arg1;
+ (id)predicateByMergingContainmentPredicatesAllCompoundPredicate:(id)arg1;

- (id)compoundOperatorJoiner;

@end
