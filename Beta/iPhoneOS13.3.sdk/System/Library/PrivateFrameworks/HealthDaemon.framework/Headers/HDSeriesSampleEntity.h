/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSampleEntity.h>

@class NSString;

@interface HDSeriesSampleEntity : HDSampleEntity

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)foreignKeys;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id *)arg5;
+ (CDUnknownBlockType)objectInsertionFilterForProfile:(id)arg1;
+ (id)freezeSeriesWithIdentifier:(id)arg1 metadata:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (id)seriesSampleWithID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)deleteSeriesWithID:(id)arg1 deleteHFDData:(_Bool)arg2 insertDeletedObject:(_Bool)arg3 profile:(id)arg4 database:(id)arg5 error:(id *)arg6;
+ (_Bool)replaceObjectID:(id)arg1 replacementObjectID:(id)arg2 deleteOriginalHFDData:(_Bool)arg3 insertDeletedObject:(_Bool)arg4 profile:(id)arg5 database:(id)arg6 error:(id *)arg7;
+ (long long)_insertionEra;
+ (void)updateInsertionEra;
+ (id)additionalPredicateForEnumeration;
+ (id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 authorizationFilter:(CDUnknownBlockType)arg4;

- (id)freezeWithDatabase:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)HFDKeyWithDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)canAddDatumInDatabase:(id)arg1 error:(id *)arg2;
- (_Bool)updateSampleCount:(long long)arg1 withDatabase:(id)arg2 error:(id *)arg3;

@end
