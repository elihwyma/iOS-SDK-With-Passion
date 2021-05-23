/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSeriesBuilderEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (_Bool)discardBuilderWithIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)persistentEntityForBuilderIdentifier:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (id)createPersistentEntityForBuilderIdentifier:(id)arg1 seriesType:(id)arg2 state:(long long)arg3 profile:(id)arg4 error:(id *)arg5;
+ (Class)seriesEntityClass;

- (_Bool)insertMetadata:(id)arg1 transaction:(id)arg2 error:(id *)arg3;
- (long long)stateWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)setBuilderState:(long long)arg1 transaction:(id)arg2 error:(id *)arg3;
- (id)metadataWithTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)_setMetadata:(id)arg1 transaction:(id)arg2 error:(id *)arg3;

@end
