/*
 Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLStorageOperator

+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)eventIntervalCacheSizeWithPayload:(id)arg1 withEntryDate:(id)arg2;
+ (id)eventPointCacheFlushWithPayload:(id)arg1;
+ (id)entryEventIntervalDefinitionCacheSize;
+ (id)entryEventPointDefinitionOTA;
+ (id)entryEventPointDefinitionTimeCorrection;
+ (id)entryEventPointDefinitionArchive;
+ (id)entryEventPointDefinitionPLLog;
+ (id)entryEventPointDefinitionCacheFlush;
+ (id)entryEventForwardDefinitionSchemaChange;
+ (id)entryEventForwardDefinitionConfiguration;
+ (id)entryEventForwardDefinitionTimeOffset;
+ (id)entryEventForwardDefinitionActivityStates;
+ (id)entryEventForwardDefinitionTaskingMode;
+ (id)entryEventForwardDefinitionSubmissionTag;
+ (id)entryEventNoneDefinitionActivity;
+ (id)entryEventNoneDefinitionAdditionalTablesTurnedOn;
+ (id)entryEventNoneDefinitionArchiveInfo;

- (void)log;
- (void)initOperatorDependancies;
- (id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2;
- (void)logEventForwardTimeOffset:(id)arg1;
- (void)logEventForwardConfiguration:(id)arg1;
- (void)logEventForwardSchemaChange:(id)arg1;
- (void)logEventPointPLLog:(id)arg1;
- (void)logEventPointCacheFlush:(id)arg1;
- (void)logEventPointOTA:(id)arg1;
- (void)logEventPointTimeCorrection:(id)arg1;
- (void)logEventPointArchive:(id)arg1;
- (void)logEventForwardTaskingMode:(id)arg1;
- (void)logEventNoneAdditionalTablesTurnedOn:(id)arg1;

@end
