/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataThermalEntry : _UIStatusBarDataEntry

{
    _Bool _sunlightMode;
    long long _color;
}

@property (nonatomic) long long color;
@property (nonatomic) _Bool sunlightMode;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
