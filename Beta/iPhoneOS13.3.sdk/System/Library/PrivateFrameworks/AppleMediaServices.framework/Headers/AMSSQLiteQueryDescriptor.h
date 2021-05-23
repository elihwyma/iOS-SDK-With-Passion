/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSSQLitePredicate, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSSQLiteQueryDescriptor : NSObject

{
    Class _entityClass;
    long long _limitCount;
    Class _memoryEntityClass;
    NSString *_orderingClause;
    NSArray *_orderingDirections;
    NSArray *_orderingProperties;
    AMSSQLitePredicate *_predicate;
    _Bool _returnsDistinctEntities;
}

@property (nonatomic) Class entityClass;
@property (nonatomic) Class memoryEntityClass;
@property (nonatomic) long long limitCount;
@property (copy, nonatomic) NSString *orderingClause;
@property (copy, nonatomic) NSArray *orderingDirections;
@property (copy, nonatomic) NSArray *orderingProperties;
@property (nonatomic) _Bool returnsDistinctEntities;
@property (copy, nonatomic) AMSSQLitePredicate *predicate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2;

@end
