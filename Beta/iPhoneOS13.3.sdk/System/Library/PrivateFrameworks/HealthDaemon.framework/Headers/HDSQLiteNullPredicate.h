/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePropertyPredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDSQLiteNullPredicate : HDSQLitePropertyPredicate <Swift>

{
    _Bool _matchesNull;
}

@property (nonatomic, readonly) _Bool matchesNull;

+ (id)isNotNullPredicateWithProperty:(id)arg1;
+ (id)isNullPredicateWithProperty:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLForEntityClass:(Class)arg1;
- (_Bool)isCompatibleWithPredicate:(id)arg1;

@end
