/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class EFSQLSelectStatement, NSString;

@protocol EFSQLExpressable;

@interface _EFSQLJoinExpression : NSObject <Swift>

{
    _Bool _isLeftOuter;
    EFSQLSelectStatement *_select;
    NSString *_tableName;
    NSString *_tableAlias;
    id <EFSQLExpressable> _joinConstraint;
}

@property (weak, nonatomic, readonly) EFSQLSelectStatement *select;
@property (copy, nonatomic, readonly) NSString *tableName;
@property (copy, nonatomic, readonly) NSString *tableAlias;
@property (nonatomic, readonly) id <EFSQLExpressable> joinConstraint;
@property (nonatomic, readonly) _Bool isLeftOuter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (void)addResultColumn:(id)arg1;
- (id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)initWithSelect:(id)arg1 tableName:(id)arg2 tableAlias:(id)arg3 joinConstraint:(id)arg4 isLeftOuter:(_Bool)arg5;
- (id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)join:(id)arg1 on:(id)arg2;
- (id)leftOuterJoin:(id)arg1 on:(id)arg2;
- (id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (void)groupByColumn:(id)arg1;
- (void)orderByColumn:(id)arg1 ascending:(_Bool)arg2;

@end
