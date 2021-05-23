/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class NSString, UIPickerView;

@interface FIUIHealthSettingsPickerController : NSObject

{
    _Bool _isMetricLocale;
    UIPickerView *_pickerView;
}

@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) _Bool isMetricLocale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;

@end
