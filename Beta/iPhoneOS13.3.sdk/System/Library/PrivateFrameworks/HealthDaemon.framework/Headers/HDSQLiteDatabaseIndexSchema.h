/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface HDSQLiteDatabaseIndexSchema : NSObject

{
    _Bool _isUnique;
    NSString *_name;
    NSArray *_columns;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *columns;
@property (nonatomic) _Bool isUnique;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
