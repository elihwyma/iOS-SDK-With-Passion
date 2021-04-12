//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIHealthSettingsForceUpdatable-Protocol.h>

@class UIPickerView;

@interface FIUIHealthSettingsPickerController : NSObject <UIPickerViewDelegate, UIPickerViewDataSource, FIUIHealthSettingsForceUpdatable>
{
    BOOL _isMetricLocale;
    UIPickerView *_pickerView;
}

@property(nonatomic) BOOL isMetricLocale; // @synthesize isMetricLocale=_isMetricLocale;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
// - (void).cxx_destruct;
- (void)forceUpdate;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)init;

@end

