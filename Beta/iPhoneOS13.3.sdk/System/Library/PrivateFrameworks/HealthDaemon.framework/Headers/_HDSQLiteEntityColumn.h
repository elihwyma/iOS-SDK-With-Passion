/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLiteEntityForeignKey, NSString;

@interface _HDSQLiteEntityColumn : NSObject

{
    unsigned char _keyPathType;
    NSString *_name;
    NSString *_columnType;
    HDSQLiteEntityForeignKey *_foreignKey;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *columnType;
@property (nonatomic, readonly) unsigned char keyPathType;
@property (nonatomic, readonly) HDSQLiteEntityForeignKey *foreignKey;

- (id)description;
- (id)creationSQL;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 foreignKey:(id)arg4;
- (id)_columnNameAndTypeString;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3;
- (id)initWithName:(id)arg1 columnType:(id)arg2 keyPathType:(unsigned char)arg3 targetEntityClass:(Class)arg4 targetProperty:(id)arg5 deletionAction:(long long)arg6;

@end
