/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField

{
    NSMutableCharacterSet *_numericTrimmingSet;
    unsigned long long _maxNumbersAllowed;
    _Bool _allowsNewlineAcceptance;
    _Bool _autoAcceptWhenMaxNumbersMet;
}

@property (nonatomic) unsigned long long maxNumbersAllowed;
@property (nonatomic) _Bool allowsNewlineAcceptance;
@property (nonatomic) _Bool autoAcceptWhenMaxNumbersMet;

+ (_Bool)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;

- (_Bool)resignFirstResponder;
- (id)initWithDefaultSizeAndLightStyle:(_Bool)arg1;
- (void)_appendString:(id)arg1;
- (void)_deleteLastCharacter;
- (_Bool)shouldInsertPasscodeText:(id)arg1;
- (_Bool)_hasMaxDigitsSpecified;
- (void)_reallyAppendString:(id)arg1;

@end
