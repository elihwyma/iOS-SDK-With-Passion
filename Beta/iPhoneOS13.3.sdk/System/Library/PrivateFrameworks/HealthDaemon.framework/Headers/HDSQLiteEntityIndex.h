/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLitePredicate, NSArray, NSString;

@interface HDSQLiteEntityIndex : NSObject

{
    _Bool _unique;
    Class _entityClass;
    NSString *_name;
    NSArray *_columns;
    HDSQLitePredicate *_predicate;
}

@property (nonatomic, readonly) Class entityClass;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *disambiguatedName;
@property (nonatomic, readonly) NSArray *columns;
@property (nonatomic, readonly, getter=isUnique) _Bool unique;
@property (copy, nonatomic, readonly) HDSQLitePredicate *predicate;

- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(_Bool)arg4 predicate:(id)arg5;
- (id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3;
- (id)creationSQL;

@end
