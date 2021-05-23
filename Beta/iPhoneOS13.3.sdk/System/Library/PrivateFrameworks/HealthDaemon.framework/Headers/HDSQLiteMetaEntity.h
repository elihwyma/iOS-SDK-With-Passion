/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteEntity.h>

@interface HDSQLiteMetaEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)_typePredicate:(id)arg1;
+ (id)_tableNamePredicate:(id)arg1;
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2;
+ (id)queryWithDatabase:(id)arg1 type:(id)arg2 tableName:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 types:(id)arg2 tableName:(id)arg3;
+ (id)_namePredicate:(id)arg1;

- (id)typeWithDatabase:(id)arg1;
- (id)nameWithDatabase:(id)arg1;
- (id)tableNameWithDatabase:(id)arg1;
- (id)SQLWithDatabase:(id)arg1;

@end
