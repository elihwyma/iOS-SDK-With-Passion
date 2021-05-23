/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKTableViewController.h>

@class HKHealthStore, HKHeartRhythmAvailability, HKKeyValueDomain, NPSManager;

__attribute__((visibility("hidden")))
@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController

{
    _Bool _deletingSamples;
    HKHealthStore *_healthStore;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
    HKKeyValueDomain *_keyValueDomain;
    NPSManager *_nanoPreferenceSyncManager;
}

@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, readonly) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (nonatomic, readonly) HKKeyValueDomain *keyValueDomain;
@property (nonatomic, readonly) NPSManager *nanoPreferenceSyncManager;
@property (nonatomic) _Bool deletingSamples;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithHealthStore:(id)arg1;
- (id)_buttonCellForTableView:(id)arg1 text:(id)arg2;
- (void)_resetOnboarding;
- (void)_deleteAllSamples;
- (void)_fakeNewAnalyzedSample;
- (void)_addNewSample;

@end
