/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDSQLitePredicate, NSArray, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <Swift>

{
    _Bool _returnsDistinctEntities;
    Class _entityClass;
    long long _limitCount;
    NSArray *_orderingTerms;
    HDSQLitePredicate *_predicate;
    NSString *_groupBy;
    NSArray *_preferredEntityJoinOrder;
}

@property (nonatomic) Class entityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSArray *orderingTerms;
@property (nonatomic) _Bool returnsDistinctEntities;
@property (copy, nonatomic) HDSQLitePredicate *predicate;
@property (copy, nonatomic) NSString *groupBy;
@property (copy, nonatomic) NSArray *preferredEntityJoinOrder;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3;
- (id)_joinClauseForProperties:(id)arg1;
- (id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2;
- (id)_SQLForDeleteWithError:(id *)arg1;
- (CDUnknownBlockType)_joinClauseComparatorWithPreferredEntityOrder:(id)arg1;
- (id)_SQLForSelectWithProperties:(id)arg1;

@end
