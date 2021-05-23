/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDServiceEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;

@end
