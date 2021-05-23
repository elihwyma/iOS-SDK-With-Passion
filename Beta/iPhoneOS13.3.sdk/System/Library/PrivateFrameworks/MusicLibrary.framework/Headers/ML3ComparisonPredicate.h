/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3PropertyPredicate.h>

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate

{
    _Bool _caseInsensitive;
    int _comparison;
    id _value;
    NSString *_treatNullAsString;
    NSString *_transformFunction;
}

@property (nonatomic, readonly) id value;
@property (nonatomic, readonly) int comparison;
@property (nonatomic, readonly) _Bool caseInsensitive;
@property (copy, nonatomic, readonly) NSString *treatNullAsString;
@property (copy, nonatomic, readonly) NSString *transformFunction;

+ (_Bool)supportsSecureCoding;
+ (id)predicateWithProperty:(id)arg1 equalToInt64:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToValue:(id)arg2;
+ (id)predicateWithProperty:(id)arg1 equalToInteger:(long long)arg2;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4 treatNullAsString:(id)arg5;
+ (id)predicateWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 transformFunction:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;
- (id)operator;
- (id)valueToBindForOperation:(long long)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 comparison:(int)arg3 caseInsensitive:(_Bool)arg4 transformFunction:(id)arg5 treatNullAsString:(id)arg6;

@end
