/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <PassKitCore/PKNumericSuggestionsAlgorithm.h>

@class NSArray, NSDecimalNumber, NSDecimalNumberHandler, NSString, PKNumericSuggestionLastInput;

@interface PKNumericSuggestionsEnterValueAlgorithm : PKNumericSuggestionsAlgorithm

{
    NSDecimalNumberHandler *_roundingBehavior;
    NSArray *_valuesToDefaults;
    NSArray *_defaultSuggestions;
    unsigned long long _powerOfTenFactor;
    PKNumericSuggestionLastInput *_lastInput;
    _Bool _useBuiltInDefaults;
    _Bool _hasValidDefaultSuggestions;
    NSDecimalNumber *_cardBalance;
    NSDecimalNumber *_minBalance;
    NSDecimalNumber *_maxBalance;
    NSDecimalNumber *_minLoadAmount;
    NSDecimalNumber *_maxLoadAmount;
    NSArray *_defaultValues;
    long long _decimalPrecision;
    NSString *_currencyCode;
}

@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minBalance;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (copy, nonatomic) NSArray *defaultValues;
@property (nonatomic) unsigned long long powerOfTenFactor;
@property (nonatomic) long long decimalPrecision;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic, readonly) _Bool hasValidDefaultSuggestions;

- (id)init;
- (void)_generateCalculatedSuggestions;
- (id)initWithLastInput:(id)arg1;
- (_Bool)_lastInputExistsInGeneratedSuggestions:(id)arg1 withLastInput:(id)arg2;
- (id)_maxAmountSuggestion;
- (_Bool)_useMaximumAmountSuggestionWithAmount:(id)arg1;
- (id)_possibleValueForAmount:(id)arg1;
- (_Bool)_possibleAmountIsValidWithDefaultValue:(id)arg1 amount:(id)arg2;
- (id)_useMaxAmountSuggestion;
- (id)_generateDefaultSuggestions;
- (id)_generateValuesToDefaults;
- (_Bool)_amountIsValid:(id)arg1;
- (id)suggestionsWithAmount:(id)arg1;
- (void)setUseBuiltInDefaults:(_Bool)arg1;

@end
