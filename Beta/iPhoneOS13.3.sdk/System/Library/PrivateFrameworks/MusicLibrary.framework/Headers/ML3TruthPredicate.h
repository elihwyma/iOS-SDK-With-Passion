/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@interface ML3TruthPredicate : ML3Predicate

{
    _Bool _truthValue;
}

+ (_Bool)supportsSecureCoding;
+ (id)truePredicate;
+ (id)falsePredicate;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_predicateString;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (_Bool)isTrueAlways;
- (_Bool)isFalseAlways;

@end
