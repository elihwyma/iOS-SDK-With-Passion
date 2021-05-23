/*
 Image: /System/Library/PrivateFrameworks/HealthDiagnosticExtensionCore.framework/HealthDiagnosticExtensionCore
 */

#import <HealthDiagnosticExtensionCore/HDDiagnosticOperation.h>

@interface HDCloudSyncDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (id)reportFilename;
- (_Bool)_reportCloudSyncStatusWithHealthStore:(id)arg1;
- (void)_reportCloudSyncJournalStats;
- (void)_reportCloudSyncErrors;
- (void)_reportCloudSyncStoreDetailsWithDatabase:(id)arg1;
- (void)_reportCloudSyncDescriptionWithHealthStore:(id)arg1;
- (void)_reportCloudSyncStoreDetailsWithSyncProvenance:(long long)arg1 storeUUID:(id)arg2 database:(id)arg3;
- (void)_reportCloudSyncKeyValuesWithDatabase:(id)arg1;

@end
