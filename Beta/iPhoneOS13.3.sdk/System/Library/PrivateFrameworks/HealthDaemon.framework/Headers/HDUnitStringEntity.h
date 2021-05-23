/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDUnitStringEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)storeUnitString:(id)arg1 database:(id)arg2 error:(id *)arg3;
+ (id)_predicateForLookupByUnitString:(id)arg1;

@end
