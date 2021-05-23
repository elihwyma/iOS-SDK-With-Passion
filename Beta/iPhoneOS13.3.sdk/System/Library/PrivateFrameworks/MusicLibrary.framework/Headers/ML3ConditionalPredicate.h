/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@interface ML3ConditionalPredicate : ML3Predicate

{
    ML3Predicate *_conditionPredicate;
    ML3Predicate *_thenPredicate;
    ML3Predicate *_elsePredicate;
}

@property (copy, nonatomic, readonly) ML3Predicate *conditionPredicate;
@property (copy, nonatomic, readonly) ML3Predicate *thenPredicate;
@property (copy, nonatomic, readonly) ML3Predicate *elsePredicate;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (id)spotlightPredicate;

@end
