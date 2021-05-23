/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class FIUIHealthSettingsDatePicker, NSString;

@interface FIUIHealthSettingsBirthDatePickerController : NSObject

{
    FIUIHealthSettingsDatePicker *_datePickerView;
    CDUnknownBlockType _dateOfBirthUpdateHandler;
}

@property (retain, nonatomic) FIUIHealthSettingsDatePicker *datePickerView;
@property (copy, nonatomic) CDUnknownBlockType dateOfBirthUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)forceUpdate;
- (void)setDateOfBirth:(id)arg1;

@end
