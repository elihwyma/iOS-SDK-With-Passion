/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteCheckConstraint.h>

@class NSString;

@interface HDSQLiteRawCheckConstraint : HDSQLiteCheckConstraint

{
    NSString *__rawSQL;
}

@property (copy, nonatomic, readonly) NSString *_rawSQL;

+ (id)checkConstraintWithSQL:(id)arg1;

- (id)SQLCheckConstraint;
- (id)_initWithSQL:(id)arg1;

@end
