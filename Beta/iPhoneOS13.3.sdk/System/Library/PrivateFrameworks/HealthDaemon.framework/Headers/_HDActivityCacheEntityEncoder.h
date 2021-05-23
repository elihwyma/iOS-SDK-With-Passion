/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDActivityCacheEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)createBareObject;
- (_Bool)_shouldIncludeActivityCachePrivateProperties;
- (_Bool)_shouldIncludeActivityCacheStatistics;
- (id)_decodeActivityQuantityStatisticsInfosWithRow:(struct HDSQLiteRow *)arg1 column:(int)arg2;
- (void)_applyPrivateActivityCachePropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;
- (void)_applyActivityCacheStatisticsToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;

@end
