/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, NSMutableCharacterSet, NSNumberFormatter, NSString;

@interface PKPaymentSetupFieldText : PKPaymentSetupField

{
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_amountFormatter;
    _Bool _secureText;
    _Bool _secureVisibleText;
    _Bool _numeric;
    _Bool _luhnCheck;
    _Bool _keepPaddingCharactersForSubmission;
    unsigned long long _minLength;
    unsigned long long _maxLength;
    NSString *_currencyCode;
    NSString *_displayFormatPlaceholder;
    NSMutableCharacterSet *_allowedCharacters;
    NSArray *_paddingCharacters;
}

@property (nonatomic) unsigned long long minLength;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic, getter=isSecureText) _Bool secureText;
@property (nonatomic, getter=isSecureVisibleText) _Bool secureVisibleText;
@property (nonatomic, getter=isNumeric) _Bool numeric;
@property (nonatomic, getter=useLuhnCheck) _Bool luhnCheck;
@property (copy, nonatomic) NSString *displayFormatPlaceholder;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) _Bool keepPaddingCharactersForSubmission;
@property (retain, nonatomic) NSMutableCharacterSet *allowedCharacters;
@property (retain, nonatomic) NSArray *paddingCharacters;

- (id)displayString;
- (void)setCurrentValue:(id)arg1;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (void)updateWithAttribute:(id)arg1;
- (id)_submissionStringForValue:(id)arg1;
- (_Bool)submissionStringMeetsAllRequirements;
- (_Bool)hasDisplayFormat;
- (id)stringByApplyingDisplayFormat:(id)arg1;
- (id)displayFormatPaddingCharacters;
- (void)updateDisplayFormat:(id)arg1;

@end
