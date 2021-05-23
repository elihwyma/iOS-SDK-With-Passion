/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteTruePredicate.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSSet;

@interface HDSQLiteJoinPredicate : HDSQLiteTruePredicate <Swift>

{
    NSSet *_joinClauses;
}

@property (copy, nonatomic, readonly) NSSet *joinClauses;

+ (id)predicateWithJoinClauses:(id)arg1;

- (id)SQLJoinClausesForEntityClass:(Class)arg1;

@end
