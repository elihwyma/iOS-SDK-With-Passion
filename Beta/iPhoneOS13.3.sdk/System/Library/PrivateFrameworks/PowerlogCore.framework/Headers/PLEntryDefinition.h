/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

#import <Foundation/NSObject.h>

@interface PLEntryDefinition : NSObject

+ (id)sharedInstance;
+ (id)definitionForEntryKey:(id)arg1;
+ (_Bool)isOnDemandQueryableForEntryKey:(id)arg1;
+ (id)subEntryKeyKeyForEntryKey:(id)arg1;
+ (int)limitOfType:(id)arg1 forEntryKey:(id)arg2;
+ (id)pruneEmptyValueEntryFromDict:(id)arg1;
+ (id)entryDefinitionsForOperatorClass:(Class)arg1;
+ (id)configsForEntryDefinition:(id)arg1;
+ (id)keyConfigsForEntryDefinition:(id)arg1;
+ (id)dynamicKeyConfigsForEntryDefinition:(id)arg1;
+ (id)arrayKeysForEntryDefinition:(id)arg1;
+ (id)aggregateBucketDefinitionsForEntryDefinition:(id)arg1;
+ (id)allKeysForEntryDefinition:(id)arg1;
+ (id)subEntryKeyKeyForEntryDefinition:(id)arg1;
+ (id)allDynamicKeysForEntryDefinition:(id)arg1;
+ (id)allAggregateKeysForEntryDefinition:(id)arg1;
+ (id)allIndexKeysForEntryDefinition:(id)arg1;
+ (id)allAggregatePrimaryKeysForEntryDefinition:(id)arg1;
+ (_Bool)hasDynamicKeysForEntryDefinition:(id)arg1;
+ (_Bool)hasArrayKeysForEntryDefinition:(id)arg1;
+ (_Bool)isOnDemandQueryableForEntryDefinition:(id)arg1;
+ (_Bool)filterEntryLoggingForEntryDefinition:(id)arg1;
+ (_Bool)isAggregateForEntryDefinition:(id)arg1;
+ (_Bool)isAggregateWallClockBucketForEntryDefinition:(id)arg1;
+ (_Bool)overridesEntryDateForEntryDefinition:(id)arg1;
+ (double)schemaVersionForEntryDefinition:(id)arg1;
+ (int)cacheCountForEntryDefition:(id)arg1;
+ (_Bool)cacheSQLPrepareStatementForEntryDefinition:(id)arg1;
+ (id)manualSortOrderForEntryDefinition:(id)arg1;
+ (id)logSelectorStringForEntryDefinition:(id)arg1;
+ (int)limitOfType:(id)arg1 forEntryDefinition:(id)arg2;
+ (id)entryDefinitionsForOperator:(id)arg1;
+ (id)configsForEntryKey:(id)arg1;
+ (id)keyConfigsForEntryKey:(id)arg1;
+ (id)dynamicKeyConfigsForEntryKey:(id)arg1;
+ (id)arrayKeysForEntryKey:(id)arg1;
+ (id)aggregateBucketDefinitionsForEntryKey:(id)arg1;
+ (id)allKeysForEntryKey:(id)arg1;
+ (id)allDynamicKeysForEntryKey:(id)arg1;
+ (id)allAggregateKeysForEntryKey:(id)arg1;
+ (id)allIndexKeysForEntryKey:(id)arg1;
+ (id)allAggregatePrimaryKeysForEntryKey:(id)arg1;
+ (_Bool)hasDynamicKeysForEntryKey:(id)arg1;
+ (_Bool)hasArrayKeysForEntryKey:(id)arg1;
+ (_Bool)filterEntryLoggingForEntryKey:(id)arg1;
+ (_Bool)isAggregateForEntryKey:(id)arg1;
+ (_Bool)isAggregateWallClockBucket:(id)arg1;
+ (_Bool)overridesEntryDateForEntryKey:(id)arg1;
+ (double)schemaVersionForEntryKey:(id)arg1;
+ (int)cacheCountForEntryKey:(id)arg1;
+ (_Bool)cacheSQLPrepareStatementForEntryKey:(id)arg1;
+ (id)manualSortOrderForEntryKey:(id)arg1;
+ (id)logSelectorStringForEnteryKey:(id)arg1;
+ (id)sortedKeysFromEntryDefinition:(id)arg1;
+ (short)aggregateFunctionForEntryDefinition:(id)arg1 forKey:(id)arg2;
+ (id)notificationNameForEntryKey:(id)arg1 withFilterDefintion:(id)arg2;

- (id)commonTypeDict_StringFormat;
- (id)commonTypeDict_RealFormat;
- (id)commonTypeDict_IntegerFormat;
- (id)commonTypeDict_IntegerFormat_withUnit_s;
- (id)commonTypeDict_RealFormat_withUnit_s;
- (id)commonTypeDict_BoolFormat;
- (id)commonTypeDict_DateFormat;
- (id)commonTypeDict_RawDataFormat;
- (id)commonTypeDict_RealFormat_withUnit_mJ;
- (id)commonTypeDict_IntegerFormat_aggregateFunction_sum;
- (id)commonTypeDict_RealFormat_aggregateFunction_sum;
- (id)commonTypeDict_IntegerFormat_withUnit_mA;
- (id)commonTypeDict_RealFormat_withUnit_mW;
- (id)commonTypeDict_RealFormat_withUnit_mWhr;
- (id)commonTypeDict_IntegerFormat_withUnit_mAh;
- (id)commonTypeDict_IntegerFormat_withUnit_mV;
- (id)commonTypeDict_IntegerFormat_withUnit_ms;
- (id)commonTypeDict_IntegerFormat_withUnit_us;
- (id)commonTypeDict_DateFormat_isCFAbsoluteTime;

@end
