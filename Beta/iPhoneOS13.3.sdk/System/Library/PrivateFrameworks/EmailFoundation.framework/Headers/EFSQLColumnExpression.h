/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class EFSQLDisqualifiedColumnExpression, NSString;

@interface EFSQLColumnExpression : NSObject <Swift>

{
    NSString *_name;
    NSString *_tableName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *tableName;
@property (nonatomic, readonly) EFSQLDisqualifiedColumnExpression *disqualified;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

+ (id)column:(id)arg1;
+ (id)table:(id)arg1 column:(id)arg2;
+ (id)allColumns;

- (_Bool)isEqual:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)like:(id)arg1;
- (id)plus:(id)arg1;
- (id)isNull;
- (id)concatenate:(id)arg1;
- (id)equalTo:(id)arg1;
- (id)beginsWith:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)endsWith:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)contains:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)doesNotContain:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)in:(id)arg1;
- (id)inSelect:(id)arg1;
- (id)notIn:(id)arg1;
- (id)cachedSelf;
- (id)initWithName:(id)arg1 table:(id)arg2;
- (id)glob:(id)arg1;
- (id)like:(id)arg1 patternType:(unsigned long long)arg2;
- (id)notGlob:(id)arg1;
- (id)notLike:(id)arg1 patternType:(unsigned long long)arg2;
- (id)is:(id)arg1;
- (id)isNot:(id)arg1;
- (id)notEqualTo:(id)arg1;
- (id)greaterThan:(id)arg1;
- (id)greaterThanEqualTo:(id)arg1;
- (id)lessThan:(id)arg1;
- (id)lessThanEqualTo:(id)arg1;
- (id)notLike:(id)arg1;
- (id)notInSelect:(id)arg1;
- (id)between:(id)arg1;
- (id)notBetween:(id)arg1;
- (id)isNotNull;
- (id)minus:(id)arg1;
- (id)matchesMask:(id)arg1;
- (id)doesNotMatchMask:(id)arg1;
- (id)expressionForPredicateOperatorType:(unsigned long long)arg1 constValue:(id)arg2;

@end
