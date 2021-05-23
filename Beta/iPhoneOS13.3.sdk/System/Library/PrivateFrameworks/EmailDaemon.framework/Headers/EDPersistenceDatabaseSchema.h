/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@interface EDPersistenceDatabaseSchema : NSObject

+ (id)schema;
+ (id)propertyMapper;
+ (id)protectedSchema;
+ (id)mailboxesTableName;
+ (id)propertiesTableSchema;
+ (id)partialMailboxesTableSchema;
+ (id)additionalSchemaProviders;
+ (id)objectPropertyMapperForSchema:(id)arg1 protectedSchema:(id)arg2;
+ (void)_initializeSchemas;
+ (id)_schemaProviders;
+ (id)_schemaWithPopulationBlock:(CDUnknownBlockType)arg1;
+ (id)_protectedSchemaProviders;
+ (id)propertiesTableName;
+ (void)ef_resetOnceTokens;

@end
