/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDMedicalRecordEntityEncoder : HDEntityEncoder

+ (_Bool)applyConceptIndexToObject:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (void)resetConceptIndexDueToError:(id)arg1 profile:(id)arg2;

- (id)orderedProperties;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)createBareObject;

@end
