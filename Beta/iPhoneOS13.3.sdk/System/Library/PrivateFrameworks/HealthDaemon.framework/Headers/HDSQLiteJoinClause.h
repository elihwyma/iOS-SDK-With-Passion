/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDSQLiteJoinClause : NSObject

{
    NSString *_joinAsName;
    NSString *_localTable;
    Class _targetEntityClass;
    NSString *_localReferenceProperty;
    NSString *_targetKeyProperty;
    long long _joinType;
}

@property (copy, nonatomic, readonly) NSString *localTable;
@property (nonatomic, readonly) Class targetEntityClass;
@property (copy, nonatomic, readonly) NSString *joinAsName;
@property (copy, nonatomic, readonly) NSString *localReferenceProperty;
@property (copy, nonatomic, readonly) NSString *targetKeyProperty;
@property (nonatomic, readonly) long long joinType;

+ (id)innerJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;
+ (id)leftJoinClauseFromTable:(id)arg1 toTargetEntity:(Class)arg2 as:(id)arg3 localReference:(id)arg4 targetKey:(id)arg5;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithJoinType:(long long)arg1 fromTable:(id)arg2 toTargetEntity:(Class)arg3 as:(id)arg4 localReference:(id)arg5 targetKey:(id)arg6;
- (id)copyWithJoinType:(long long)arg1;
- (id)SQLJoinClause;

@end
