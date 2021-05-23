/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDSearchableIndexBudgetConfiguration, NSMutableDictionary, NSMutableSet, NSString;

@protocol EDSearchableIndexSchedulable, OS_dispatch_queue;

@interface EDSearchableIndexScheduler : NSObject

{
    _Bool _dataSourceIndexingPermitted;
    _Bool _scheduling;
    _Bool _scheduledDeferralCheck;
    double _budgetedTimeRemaining;
    long long _budgetedItemCountRemaining;
    double _noActivityIndexingTime;
    double _maintenanceIndexingTime;
    id <EDSearchableIndexSchedulable> _schedulable;
    EDSearchableIndexBudgetConfiguration *_budgetConfiguration;
    NSString *_budgetTimeUserDefaultsKey;
    NSObject<OS_dispatch_queue> *_indexingStateQueue;
    NSMutableDictionary *_activities;
    NSMutableSet *_indexingEnabledForActivityTypes;
}

@property (nonatomic) _Bool scheduledDeferralCheck;
@property (copy, nonatomic) NSString *budgetTimeUserDefaultsKey;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *indexingStateQueue;
@property (retain, nonatomic) NSMutableDictionary *activities;
@property (retain, nonatomic) NSMutableSet *indexingEnabledForActivityTypes;
@property (getter=isDataSourceIndexingPermitted) _Bool dataSourceIndexingPermitted;
@property long long budgetedItemCountRemaining;
@property double budgetedTimeRemaining;
@property double noActivityIndexingTime;
@property double maintenanceIndexingTime;
@property (nonatomic, getter=isScheduling) _Bool scheduling;
@property (weak, nonatomic, readonly) id <EDSearchableIndexSchedulable> schedulable;
@property (nonatomic, readonly) EDSearchableIndexBudgetConfiguration *budgetConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)activityTypes;
+ (id)log;
+ (id)deferrableActivityTypes;
+ (id)budgetTimeUserDefaultsKeyForIndexName:(id)arg1;
+ (_Bool)isDeferrableActivityType:(id)arg1;

- (void)dealloc;
- (id)initWithSchedulable:(id)arg1 budgetConfiguration:(id)arg2;
- (_Bool)hasAvailableIndexingBudgetForSearchableIndexSchedulable:(id)arg1;
- (double)budgetedTimeRemainingForSearchableIndexSchedulable:(id)arg1;
- (long long)budgetedItemCountRemainingForSearchableIndexSchedulable:(id)arg1;
- (void)searchableIndexSchedulable:(id)arg1 didGenerateImportantPowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;
- (void)indexingDidSuspendForSearchableIndexSchedulable:(id)arg1;
- (void)indexingDidResumeForSearchableIndexSchedulable:(id)arg1;
- (void)didFinishIndexingBacklogForSearchableIndexSchedulable:(id)arg1;
- (void)searchableIndexSchedulable:(id)arg1 didIndexForTime:(double)arg2;
- (void)searchableIndexSchedulable:(id)arg1 didIndexItemCount:(long long)arg2;
- (void)searchableIndexSchedulable:(id)arg1 didGeneratePowerEventWithIdentifier:(id)arg2 eventData:(id)arg3;
- (double)_budgetTimeFromUserDefaults;
- (void)_stopAllIndexing;
- (void)_startScheduling;
- (void)_stopScheduling;
- (void)beginIndexingForActivityType:(id)arg1 activity:(id)arg2;
- (CDUnknownBlockType)_xpcCriteriaBuilderBlockForActivityType:(id)arg1;
- (void)_registerActivityForType:(id)arg1 builder:(CDUnknownBlockType)arg2 runner:(CDUnknownBlockType)arg3;
- (void)_setBudgetedTimeRemaining:(double)arg1;
- (void)_enableIndexingForActivityType:(id)arg1;
- (void)_logIndexingPowerEventWithIdentifier:(id)arg1 additionalEventData:(id)arg2 usePersistentLog:(_Bool)arg3;
- (void)_beginIndexingForActivityType:(id)arg1 activity:(id)arg2;
- (void)_disableIndexingForActivityType:(id)arg1 defer:(_Bool)arg2;
- (void)_stopIndexingForActivityType:(id)arg1 shouldDeferIfPossible:(_Bool)arg2;
- (_Bool)_isIndexingEnabledForActivityType:(id)arg1;
- (_Bool)_isIndexingEnabledByActivities;
- (void)_deferActivitiesIfNecessary;
- (void)_periodicallyCheckForDeferralIfNecessary;
- (void)_setDataSourceIndexingPermitted:(_Bool)arg1;
- (id)_xpcActivityIdentifierForActivityType:(id)arg1;
- (void)deferIndexingForActivityType:(id)arg1;
- (_Bool)isIndexingEnabledForActivityType:(id)arg1;

@end
