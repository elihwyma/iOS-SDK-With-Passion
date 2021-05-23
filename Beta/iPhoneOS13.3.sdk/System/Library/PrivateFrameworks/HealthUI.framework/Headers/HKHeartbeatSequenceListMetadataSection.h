/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKDataMetadataSection.h>

@class HKDisplayTypeController, HKHealthStore, HKUnitPreferenceController, NSArray;

@protocol HKHeartbeatSequenceListMetadataSectionDelegate;

@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection

{
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKHeartbeatSequenceListMetadataSectionDelegate> _delegate;
    NSArray *_sequencesSamples;
}

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (weak, nonatomic) id <HKHeartbeatSequenceListMetadataSectionDelegate> delegate;
@property (retain, nonatomic) NSArray *sequencesSamples;

- (id)sectionTitle;
- (unsigned long long)numberOfRowsInSection;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5;
- (void)_startAssociatedSequenceQueryForEvent:(id)arg1;

@end
