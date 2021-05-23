/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

@class NSString;

@interface HDDataExternalSyncIdentifierEntityPredicate : HDSQLitePredicate

{
    HDSQLitePredicate *_valuePredicate;
    _Bool _matchObjectsWithoutKey;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_propertyForKey:(id)arg1;
+ (id)predicateWithMetadataKey:(id)arg1 allowedValues:(id)arg2;
+ (id)predicateWithMetadataKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;
+ (id)predicateWithMetadataKey:(id)arg1 exists:(_Bool)arg2;
+ (id)_valuePredicateForKey:(id)arg1 allowedValues:(id)arg2;
+ (id)_valuePredicateForKey:(id)arg1 value:(id)arg2 operatorType:(unsigned long long)arg3;
+ (Class)_valueClassForKey:(id)arg1;

- (id)SQLForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;

@end
