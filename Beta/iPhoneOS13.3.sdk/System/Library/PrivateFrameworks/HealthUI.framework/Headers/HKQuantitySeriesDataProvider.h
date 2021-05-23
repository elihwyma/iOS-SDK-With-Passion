/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKDisplayTypeController, HKHealthStore, HKQuantitySample, HKQuantitySeriesSampleEditor, HKUnitPreferenceController, NSMutableArray, NSString;

@protocol HKQuantitySeriesDataProviderDelegate;

@interface HKQuantitySeriesDataProvider : NSObject

{
    _Bool _hasSubsamplesToRemove;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id <HKQuantitySeriesDataProviderDelegate> _delegate;
    HKHealthStore *_healthStore;
    HKQuantitySample *_parentSample;
    NSMutableArray *_quantities;
    HKQuantitySeriesSampleEditor *_editor;
}

@property (retain, nonatomic) HKQuantitySample *parentSample;
@property (retain, nonatomic) NSMutableArray *quantities;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKQuantitySeriesSampleEditor *editor;
@property (nonatomic) _Bool hasSubsamplesToRemove;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) id <HKQuantitySeriesDataProviderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;
- (void)queryForSubsamples:(CDUnknownBlockType)arg1;
- (void)commitDeletionsIfNeeded;
- (id)textForQuantity:(id)arg1;
- (void)deleteQuantity:(id)arg1;

@end
