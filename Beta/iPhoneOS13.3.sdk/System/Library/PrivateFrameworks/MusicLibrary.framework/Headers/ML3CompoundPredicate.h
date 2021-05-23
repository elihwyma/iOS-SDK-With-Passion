/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3CompoundPredicate : ML3Predicate

{
    NSArray *_predicates;
}

@property (retain, nonatomic) NSArray *predicates;
@property (copy, nonatomic, readonly) NSString *compoundOperatorJoiner;

+ (_Bool)supportsSecureCoding;
+ (id)predicateMatchingPredicates:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicates:(id)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (id)spotlightPredicate;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;

@end
