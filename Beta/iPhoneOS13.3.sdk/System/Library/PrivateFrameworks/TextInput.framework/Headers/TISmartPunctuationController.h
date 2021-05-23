/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, TISmartPunctuationOptions;

@interface TISmartPunctuationController : NSObject

{
    _Bool _leftSingleQuotationMarkInserted;
    _Bool _leftDoubleQuotationMarkInserted;
    NSCharacterSet *_alphanumericCharacterSet;
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_decimalDigitCharacterSet;
    NSCharacterSet *_punctuationCharacterSet;
    NSCharacterSet *_openerCharacterSet;
    NSCharacterSet *_germanApostrophePrecedingSet;
    NSCharacterSet *_dutchApostropheFollowingSet;
    NSCharacterSet *_cornerBracketCharacterSet;
    NSCharacterSet *_bookTitleMarkCharacterSet;
    NSCharacterSet *_dashCharacterSet;
    NSCharacterSet *_enDashCharacterSet;
    NSCharacterSet *_emDashCharacterSet;
    _Bool _smartQuotesEnabled;
    _Bool _smartDashesEnabled;
    unsigned long long _autoQuoteType;
    TISmartPunctuationOptions *_smartPunctuationOptions;
}

@property (nonatomic) _Bool smartQuotesEnabled;
@property (nonatomic) _Bool smartDashesEnabled;
@property (nonatomic) unsigned long long autoQuoteType;
@property (retain, nonatomic) TISmartPunctuationOptions *smartPunctuationOptions;

+ (id)_chineseContextualVariantMapping;

- (id)init;
- (void)reset;
- (id)smartPunctuationedStringForString:(id)arg1;
- (id)smartPunctuationResultsForString:(id)arg1;
- (id)smartPunctuationOutputForInput:(id)arg1 isLockedInput:(_Bool)arg2 documentState:(id)arg3;
- (void)_initializeQuoteCharacterSetsIfNecessary;
- (void)_initializeDashCharacterSetsIfNecessary;
- (id)_alternatingStringForInputString:(id)arg1 isLockedInput:(_Bool)arg2 hasMarkedText:(_Bool)arg3;
- (id)_checkInput:(id)arg1 forContextualQuotesInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualChinesePunctuationInDocumentState:(id)arg2;
- (id)_checkInput:(id)arg1 forContextualDashesInDocumentState:(id)arg2;

@end
