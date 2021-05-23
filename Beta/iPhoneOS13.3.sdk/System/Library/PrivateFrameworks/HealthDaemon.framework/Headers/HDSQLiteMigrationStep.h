/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HDSQLiteMigrationStep : NSObject

{
    CDUnknownBlockType _migrationHandler;
    long long _finalSchemaVersion;
    long long _foreignKeyStatus;
    NSString *_schemaName;
    long long _requiredPrimarySchemaVersion;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType migrationHandler;
@property (nonatomic, readonly) long long finalSchemaVersion;
@property (nonatomic) long long foreignKeyStatus;
@property (copy, nonatomic, readonly) NSString *schemaName;
@property (nonatomic, readonly) long long requiredPrimarySchemaVersion;

+ (id)migrationStepWithForeignKeysDisabledFrom:(long long)arg1 to:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)migrationStepFrom:(long long)arg1 to:(long long)arg2 handler:(CDUnknownBlockType)arg3;

- (id)description;
- (id)initForSchema:(id)arg1 toVersion:(long long)arg2 requiringVersion:(long long)arg3 foreignKeys:(long long)arg4 handler:(CDUnknownBlockType)arg5;

@end
