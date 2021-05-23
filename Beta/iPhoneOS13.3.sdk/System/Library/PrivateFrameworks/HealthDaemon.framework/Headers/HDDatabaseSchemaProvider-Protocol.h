/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class NSString;

@protocol HDDatabaseSchemaProvider

@property (copy, nonatomic, readonly) NSString *schemaName;

- (unsigned short)currentSchemaVersionForProtectionClass: /* Error: Ran out of types for this method. */;
- (unsigned short)databaseEntitiesForProtectionClass: /* Error: Ran out of types for this method. */;
- (unsigned short)registerMigrationStepsForProtectionClass:migrator: /* Error: Ran out of types for this method. */;

@end
