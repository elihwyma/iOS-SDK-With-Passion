/*
 Image: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
 */

#import <CoreIDV/DIAttribute.h>

@class NSString;

@interface DIAttributeText : DIAttribute

{
    _Bool _isSecureText;
    _Bool _isSecureVisibleText;
    _Bool _isNumeric;
    _Bool _luhnCheck;
    NSString *defaultValue;
    NSString *currentValue;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSString *_displayFormatPlaceholder;
}

@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) _Bool isSecureText;
@property (nonatomic) _Bool isSecureVisibleText;
@property (nonatomic) _Bool isNumeric;
@property (copy, nonatomic) NSString *defaultValue;
@property (nonatomic, getter=useLuhnCheck) _Bool luhnCheck;
@property (copy, nonatomic) NSString *displayFormatPlaceholder;
@property (copy, nonatomic, getter=getCurrentValue) NSString *currentValue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)submissionString;
- (id)displayFormatPaddingCharacters;

@end
