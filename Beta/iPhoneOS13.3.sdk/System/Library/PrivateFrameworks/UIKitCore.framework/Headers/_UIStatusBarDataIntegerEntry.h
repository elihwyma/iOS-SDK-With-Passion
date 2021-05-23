/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDataEntry.h>

@interface _UIStatusBarDataIntegerEntry : _UIStatusBarDataEntry

{
    _Bool _displayRawValue;
    long long _rawValue;
    long long _displayValue;
}

@property (nonatomic) long long rawValue;
@property (nonatomic) long long displayValue;
@property (nonatomic) _Bool displayRawValue;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_ui_descriptionBuilder;

@end
