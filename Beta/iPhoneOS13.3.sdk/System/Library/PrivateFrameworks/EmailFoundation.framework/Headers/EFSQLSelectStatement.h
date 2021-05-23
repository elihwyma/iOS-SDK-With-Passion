/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@protocol EFSQLExpressable;

@interface EFSQLSelectStatement : NSObject <Swift>

{
    _Bool _distinct;
    id <EFSQLExpressable> _where;
    unsigned long long _limit;
    NSString *_tableName;
    NSMutableArray *_results;
    NSMutableArray *_joinExpressions;
    NSArray *_groupExpressions;
    NSMutableArray *_orderExpressions;
}

@property (copy, nonatomic, readonly) NSString *tableName;
@property (nonatomic, readonly) NSMutableArray *results;
@property (nonatomic, readonly) NSMutableArray *joinExpressions;
@property (retain, nonatomic) NSArray *groupExpressions;
@property (nonatomic, readonly) NSMutableArray *orderExpressions;
@property (nonatomic) _Bool distinct;
@property (retain, nonatomic) id <EFSQLExpressable> where;
@property (nonatomic) unsigned long long limit;
@property (copy, nonatomic, readonly) NSString *queryString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)initWithResult:(id)arg1;
- (id)initWithResult:(id)arg1 table:(id)arg2;
- (id)initWithResultColumn:(id)arg1 table:(id)arg2;
- (void)addResultColumn:(id)arg1;
- (void)addResultColumn:(id)arg1 fromTable:(id)arg2;
- (void)addResult:(id)arg1 alias:(id)arg2;
- (id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;
- (id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;
- (void)groupByColumn:(id)arg1 fromTable:(id)arg2;
- (void)orderByColumn:(id)arg1 fromTable:(id)arg2 ascending:(_Bool)arg3;
- (void)orderBy:(id)arg1 ascending:(_Bool)arg2;
- (id)join:(id)arg1 on:(id)arg2;
- (id)leftOuterJoin:(id)arg1 on:(id)arg2;
- (id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;
- (void)groupByColumn:(id)arg1;
- (void)orderByColumn:(id)arg1 ascending:(_Bool)arg2;
- (id)initWithResultColumn:(id)arg1;
- (void)groupBy:(id)arg1;

@end
