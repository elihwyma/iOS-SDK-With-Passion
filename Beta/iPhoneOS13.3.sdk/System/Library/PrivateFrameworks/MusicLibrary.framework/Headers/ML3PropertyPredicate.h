/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate

{
    NSString *_property;
}

@property (copy, nonatomic) NSString *property;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (_Bool)isDynamicForEntityClass:(Class)arg1;

@end
