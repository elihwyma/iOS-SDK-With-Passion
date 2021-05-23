/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <SymptomEvaluator/ExpertSystemHandlerCore.h>

@class AnalyticsWorkspace, ArbitratorExpertSystemState, DiagnosticCaseUsageAnalytics, NSArray, SystemSettingsRelay;

__attribute__((visibility("hidden")))
@interface ArbitratorExpertSystemHandler : ExpertSystemHandlerCore

{
    ArbitratorExpertSystemState *currentState;
    NSArray *states;
    id flowAnalyticsObserver;
    SystemSettingsRelay *settingsRelay;
    unsigned int administrativeState;
    AnalyticsWorkspace *arbitratorWorkspace;
    DiagnosticCaseUsageAnalytics *caseUsageSpace;
    _Bool _initializationComplete;
    _Bool _observingSetupAssistantFinished;
    id _foregroundStateObserver;
    unsigned long long _externalStepper;
}

@property unsigned long long externalStepper;

+ (id)sharedInstance;
+ (id)configureClass:(id)arg1;
+ (id)internalStateDictionary;
+ (_Bool)disableResourceNotifyDampening;
+ (void)setInitializeAsHelper:(_Bool)arg1;
+ (void)resetAllForCustomerBuilds;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetAll;
- (void)_dumpState;
- (_Bool)noteSymptom:(id)arg1;
- (void)_administrativeDisable;
- (void)_administrativeEnable;
- (id)internalStateDictionary;
- (void)_completeInitialization:(_Bool)arg1;
- (void)_purgeDiagnosticCaseUsage;
- (_Bool)_initializeWorkspace;
- (void)_scheduleMaintenanceActivity;
- (void)handleResourceNotifyOfType:(unsigned long long)arg1 event:(id)arg2;
- (void)triggerABCSnapshotWithSignature:(id)arg1 events:(id)arg2 uuid:(id)arg3;
- (_Bool)shouldGenerateReportForSignature:(id)arg1 trigger:(unsigned long long)arg2;
- (id)_retrieveReportRecordForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (void)recordReportForSignature:(id)arg1 aggregateReport:(id)arg2 specificReport:(id)arg3;
- (void)_removeAllReportRecords;
- (void)_saveReportRecord:(id)arg1;
- (id)_reportRecordKeyForDomain:(id)arg1 type:(id)arg2 subType:(id)arg3 process:(id)arg4;
- (void)_addReportRecordWithKey:(id)arg1 count:(long long)arg2 lastSeen:(double)arg3;
- (long long)_removeAllDiagnosticCaseUsageFor:(id)arg1;
- (void)scheduleABCNotificationForCarrierSeedUser;
- (void)alertCarrierSeedUserAboutABC;
- (void)removeSetupAssistantFinishedObserver;
- (_Bool)_arbitratorReady;
- (void)resetDiagnosticCaseUsage;
- (void)_removeReportRecordForKey:(id)arg1;
- (void)observeSetupAssistantFinished;
- (_Bool)requireUserNotification;
- (void)setupAssistantFinished;

@end
