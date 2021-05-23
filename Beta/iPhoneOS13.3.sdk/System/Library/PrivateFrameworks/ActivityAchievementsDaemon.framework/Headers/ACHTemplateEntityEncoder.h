/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <HDEntityEncoder.h>

@interface ACHTemplateEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;

@end
