/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDKeyValueEntity.h>

@interface HDProtectedKeyValueEntity : HDKeyValueEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (id)userCharacteristicForType:(id)arg1 profile:(id)arg2 entity:(id *)arg3 error:(id *)arg4;
+ (id)modificationDateForCharacteristicWithType:(id)arg1 profile:(id)arg2 error:(id *)arg3;
+ (_Bool)setUserCharacteristic:(id)arg1 forType:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (long long)_deviceLocalCategory;
+ (id)_keyForDataType:(id)arg1 error:(id *)arg2;
+ (id)keyForUserCharacteristicType:(id)arg1;
+ (id)_insertOrReplaceSQL;

@end
