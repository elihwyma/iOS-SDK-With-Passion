/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDCDASampleEntityEncoder : HDEntityEncoder

- (id)orderedProperties;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)createBareObject;
- (_Bool)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;

@end
