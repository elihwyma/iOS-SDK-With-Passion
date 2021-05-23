/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSQLiteStatement.h>

@interface HDMetadataValueStatement : HDSQLiteStatement

+ (id)metadataValueStatementWithDatabase:(id)arg1;

- (id)initWithDatabase:(id)arg1;
- (_Bool)enumerateResultsForObjectID:(long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;

@end
