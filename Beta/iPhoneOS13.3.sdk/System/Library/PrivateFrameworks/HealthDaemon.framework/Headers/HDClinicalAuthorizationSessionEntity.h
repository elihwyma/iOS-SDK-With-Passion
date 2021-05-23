/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthEntity.h>

@interface HDClinicalAuthorizationSessionEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)foreignKeys;
+ (id)databaseTable;
+ (id)checkConstraints;
+ (id)joinClausesForProperty:(id)arg1;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (id)_accountJoinClausesForProperty:(id)arg1;
+ (id)_gatewayJoinClausesForProperty:(id)arg1;

@end
