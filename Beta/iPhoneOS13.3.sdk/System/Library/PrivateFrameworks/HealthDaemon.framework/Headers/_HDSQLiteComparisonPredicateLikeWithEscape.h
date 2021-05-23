/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteComparisonPredicate.h>

@class NSString;

@interface _HDSQLiteComparisonPredicateLikeWithEscape : HDSQLiteComparisonPredicate

{
    NSString *_escapeCharacter;
}

@property (nonatomic, readonly) NSString *escapeCharacter;

- (id)SQLForEntityClass:(Class)arg1;
- (id)initWithProperty:(id)arg1 value:(id)arg2 escapeCharacter:(id)arg3;

@end
