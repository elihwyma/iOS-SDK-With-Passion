/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPassField.h>

@interface PKPassDateField : PKPassField

{
    _Bool _isRelative;
    _Bool _ignoresTimeZone;
    long long _dateStyle;
    long long _timeStyle;
}

@property (nonatomic) long long dateStyle;
@property (nonatomic) long long timeStyle;
@property (nonatomic) _Bool isRelative;
@property (nonatomic) _Bool ignoresTimeZone;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)value;

@end
