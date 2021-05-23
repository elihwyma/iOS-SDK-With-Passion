/*
 Image: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
 */

#import <UIKit/UIControl.h>

@class BCBatteryDevice, HACCBatteryGroupView, NSNumberFormatter, NSString, UIImageView, UILabel;

@protocol HACCContentModuleDelegate;

@interface HACCStatusView : UIControl

{
    NSNumberFormatter *_numberFormatter;
    unsigned long long module;
    id <HACCContentModuleDelegate> delegate;
    UILabel *_titleLabel;
    UIImageView *_iconView;
    HACCBatteryGroupView *_batteryView;
    BCBatteryDevice *_batteryDevice;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) HACCBatteryGroupView *batteryView;
@property (retain, nonatomic) BCBatteryDevice *batteryDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;

+ (id)_backgroundUpdateQueue;

- (_Bool)enabled;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)updateConstraints;
- (void)buttonTapped:(id)arg1;
- (void)updateValue;
- (id)contentValue;
- (id)_productIdentifierForBTDevice:(id)arg1;
- (id)liveListenImageName:(id)arg1;

@end
