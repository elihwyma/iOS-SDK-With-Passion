/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UIViewController.h>

@class NSString, UIPickerView;

@interface EKUICustomRecurrenceIntervalViewController : UIViewController

{
    UIPickerView *_pickerView;
    _Bool _maximumInterval;
    long long _frequency;
    long long _interval;
    CDUnknownBlockType _changeBlock;
}

@property (copy) CDUnknownBlockType changeBlock;
@property (nonatomic) long long frequency;
@property (nonatomic) long long interval;
@property (nonatomic) _Bool maximumInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView;
- (id)initWithSelectedInterval:(long long)arg1 frequency:(long long)arg2 changeBlock:(CDUnknownBlockType)arg3;

@end
