/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@interface ML3Predicate : NSObject

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (id)spotlightPredicate;
- (_Bool)isTrueAlways;
- (_Bool)isFalseAlways;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;

@end
