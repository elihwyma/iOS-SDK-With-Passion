/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, HDSQLiteDatabase, NSDictionary;

@interface HDEntityEncoder : NSObject

{
    HDProfile *_profile;
    HDSQLiteDatabase *_database;
    Class _entityClass;
    NSDictionary *_encodingOptions;
    CDUnknownBlockType _authorizationFilter;
    long long _purpose;
    HDEntityEncoder *_superclassEncoder;
}

@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) HDSQLiteDatabase *database;
@property (nonatomic, readonly) Class entityClass;
@property (copy, nonatomic, readonly) NSDictionary *encodingOptions;
@property (copy, nonatomic, readonly) CDUnknownBlockType authorizationFilter;
@property (nonatomic, readonly) long long purpose;
@property (nonatomic, readonly) HDEntityEncoder *superclassEncoder;

+ (long long)estimatedEncodedSize;

- (void)finish;
- (id)initWithHealthEntityClass:(Class)arg1 profile:(id)arg2 database:(id)arg3 purpose:(long long)arg4 encodingOptions:(id)arg5 authorizationFilter:(CDUnknownBlockType)arg6;
- (id)orderedProperties;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 error:(id *)arg3;
- (_Bool)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3 error:(id *)arg4;
- (id)createBareObject;
- (_Bool)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow *)arg2 maxBytesPerRepresentation:(long long)arg3 error:(id *)arg4 handler:(CDUnknownBlockType)arg5;
- (void)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow *)arg3;

@end
