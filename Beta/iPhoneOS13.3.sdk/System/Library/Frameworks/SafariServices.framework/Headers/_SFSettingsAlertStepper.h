/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/_SFSettingsAlertControl.h>

@class NSString, _SFSettingsAlertButton;

__attribute__((visibility("hidden")))
@interface _SFSettingsAlertStepper : _SFSettingsAlertControl

{
    _SFSettingsAlertButton *_incrementButton;
    _SFSettingsAlertButton *_decrementButton;
    _SFSettingsAlertButton *_resetButton;
    long long _value;
}

@property (nonatomic, readonly) long long value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initUsingResetButton:(_Bool)arg1;
- (void)setImage:(id)arg1 forButton:(long long)arg2;
- (void)setText:(id)arg1 forButton:(long long)arg2;
- (void)setEnabled:(_Bool)arg1 forButton:(long long)arg2;
- (void)_decrementTapped:(id)arg1;
- (void)_incrementTapped:(id)arg1;
- (void)_resetTapped:(id)arg1;
- (id)_button:(long long)arg1;

@end
