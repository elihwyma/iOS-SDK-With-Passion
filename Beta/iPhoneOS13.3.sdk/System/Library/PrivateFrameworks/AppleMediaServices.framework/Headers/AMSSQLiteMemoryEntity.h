/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSSQLiteMemoryEntity : NSObject

{
    long long _databaseID;
    NSMutableDictionary *_propertyValues;
    NSMutableDictionary *_externalPropertyValues;
}

@property (nonatomic) long long databaseID;
@property (copy, nonatomic, readonly) NSDictionary *propertyValues;
@property (copy, nonatomic, readonly) NSDictionary *externalPropertyValues;

+ (Class)databaseEntityClass;
+ (id)defaultProperties;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2;
+ (id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)anyOnConnection:(id)arg1 predicate:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)valueForExternalProperty:(id)arg1;
- (void)reloadFromDatabaseEntity:(id)arg1 properties:(id)arg2;
- (void)setValues:(id *)arg1 forProperties:(const id *)arg2 count:(long long)arg3;
- (void)setValues:(id *)arg1 forExternalProperties:(const id *)arg2 count:(long long)arg3;
- (id)initWithDatabaseEntity:(id)arg1 properties:(id)arg2;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (void)setValuesWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2;

@end
