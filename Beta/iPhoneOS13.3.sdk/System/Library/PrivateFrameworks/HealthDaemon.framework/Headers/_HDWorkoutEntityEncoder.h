/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDEntityEncoder.h>

@class HDSQLiteStatement;

@interface _HDWorkoutEntityEncoder : HDEntityEncoder

{
    HDSQLiteStatement *_workoutEntryLookupStatement;
    _Bool _includeCondenserInfo;
}

+ (long long)estimatedEncodedSize;

- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;
- (id)orderedProperties;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)createBareObject;

@end
