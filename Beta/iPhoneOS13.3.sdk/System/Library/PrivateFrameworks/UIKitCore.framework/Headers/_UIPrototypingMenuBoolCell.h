/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIPrototypingMenuCell.h>

@class UISwitch;

__attribute__((visibility("hidden")))
@interface _UIPrototypingMenuBoolCell : _UIPrototypingMenuCell

{
    UISwitch *_valueSwitch;
}

@property (retain, nonatomic) UISwitch *valueSwitch;

+ (long long)_layoutAxis;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_switchDidChangeValue:(id)arg1;
- (void)_prototypingSettingDidChange;

@end
