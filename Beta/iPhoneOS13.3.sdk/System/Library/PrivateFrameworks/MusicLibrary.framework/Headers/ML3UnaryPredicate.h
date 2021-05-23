/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@interface ML3UnaryPredicate : ML3Predicate

{
    ML3Predicate *_predicate;
}

@property (retain, nonatomic) ML3Predicate *predicate;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithPredicate:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (id)databaseStatementParameters;

@end
