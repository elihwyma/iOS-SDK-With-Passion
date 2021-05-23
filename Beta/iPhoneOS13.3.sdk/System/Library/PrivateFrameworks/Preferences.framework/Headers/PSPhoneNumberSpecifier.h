/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <Preferences/PSTextFieldSpecifier.h>

#import <Preferences/Swift-Protocol.h>

@class NSString;

@interface PSPhoneNumberSpecifier : PSTextFieldSpecifier <Swift>

{
    NSString *_countryCode;
}

@property (retain, nonatomic) NSString *countryCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;

@end
