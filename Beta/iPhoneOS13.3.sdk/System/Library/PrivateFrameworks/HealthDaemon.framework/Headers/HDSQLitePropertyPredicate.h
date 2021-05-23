/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <Swift>

{
    NSString *_property;
}

@property (nonatomic, readonly) NSString *property;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (_Bool)isCompatibleWithPredicate:(id)arg1;

@end
