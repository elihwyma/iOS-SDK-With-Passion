/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3ContainsPredicate : ML3PropertyPredicate

{
    id _values;
}

@property (copy, nonatomic) id values;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 valueSet:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)initWithProperty:(id)arg1 values:(id)arg2;

@end
