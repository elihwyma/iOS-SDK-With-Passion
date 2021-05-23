/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject

{
    _Bool _isAutoincrement;
    _Bool _isPrimaryKey;
    _Bool _isNullable;
    NSString *_name;
    NSString *_type;
    NSString *_defaultValue;
    NSString *_foreignKeyTargetTable;
    NSString *_foreignKeyTargetColumn;
    long long _deletionAction;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) _Bool isAutoincrement;
@property (nonatomic) _Bool isPrimaryKey;
@property (nonatomic) _Bool isNullable;
@property (copy, nonatomic) NSString *defaultValue;
@property (copy, nonatomic) NSString *foreignKeyTargetTable;
@property (copy, nonatomic) NSString *foreignKeyTargetColumn;
@property (nonatomic) long long deletionAction;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end
