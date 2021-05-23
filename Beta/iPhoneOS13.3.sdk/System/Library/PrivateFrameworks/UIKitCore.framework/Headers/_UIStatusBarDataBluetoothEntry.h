/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@class _UIStatusBarDataBatteryEntry;

@interface _UIStatusBarDataBluetoothEntry : _UIStatusBarDataEntry

{
    long long _state;
    _UIStatusBarDataBatteryEntry *_batteryEntry;
}

@property (nonatomic) long long state;
@property (copy, nonatomic) _UIStatusBarDataBatteryEntry *batteryEntry;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
