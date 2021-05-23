/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@class NSArray, NSString;

@interface ML3SearchStringPredicate : ML3Predicate

{
    NSArray *_properties;
    NSString *_searchString;
}

@property (copy, nonatomic) NSArray *properties;
@property (copy, nonatomic) NSString *searchString;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (id)initWithConcatenatedProperties:(id)arg1 searchString:(id)arg2;

@end
