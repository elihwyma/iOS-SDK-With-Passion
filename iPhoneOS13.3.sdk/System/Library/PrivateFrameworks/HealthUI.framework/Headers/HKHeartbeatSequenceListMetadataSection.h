//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

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

@property(retain, nonatomic) NSArray *sequencesSamples; // @synthesize sequencesSamples=_sequencesSamples;
@property(nonatomic) __weak id <HKHeartbeatSequenceListMetadataSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
// - (void).cxx_destruct;
- (void)selectCellForIndex:(NSUInteger)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (id)cellForIndex:(NSUInteger)arg1 tableView:(id)arg2;
- (NSUInteger)numberOfRowsInSection;
- (id)sectionTitle;
- (void)_startAssociatedSequenceQueryForEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 delegate:(id)arg5;

@end

