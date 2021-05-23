/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSString, SSSQLitePredicate;

@interface SSSQLiteQueryDescriptor : NSObject

{
    Class _entityClass;
    long long _limitCount;
    Class _memoryEntityClass;
    NSString *_orderingClause;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    SSSQLitePredicate *_predicate;
    _Bool _returnsDistinctEntities;
}

@property (nonatomic) Class entityClass;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *orderingClause;
@property (copy, nonatomic) NSArray *orderingDirections;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) _Bool returnsDistinctEntities;
@property (copy, nonatomic) SSSQLitePredicate *predicate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_newSelectSQLWithProperties:(const id *)arg1 count:(unsigned long long)arg2 columns:(id)arg3;

@end
