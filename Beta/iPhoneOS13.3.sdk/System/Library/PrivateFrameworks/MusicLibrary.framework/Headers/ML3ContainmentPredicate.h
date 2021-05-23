/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSSet;

@interface ML3ContainmentPredicate : ML3PropertyPredicate

{
    NSSet *_values;
}

@property (retain, nonatomic) NSSet *values;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)_orderedValues;
- (id)initWithProperty:(id)arg1 values:(id)arg2;

@end
