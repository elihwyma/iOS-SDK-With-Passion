/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <SpringBoardUIServices/SBUIPasscodeLockViewWithKeypad.h>

@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad

{
    unsigned long long _numberOfDigits;
}

@property (nonatomic, readonly) unsigned long long numberOfDigits;

- (id)initWithLightStyle:(_Bool)arg1 numberOfDigits:(unsigned long long)arg2;
- (id)initWithLightStyle:(_Bool)arg1;
- (id)_newEntryField;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;

@end
