/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSString.h>

@interface NSString (SMSPhoneNumberNormalization)

- (id)unformattedPhoneNumber;
- (id)__ck_stringByExpandingTildeInPath;
- (_Bool)__ck_shouldUseBigEmoji;
- (_Bool)ck_isSiriRecognizableWithLanguageCode:(id)arg1;
- (struct _NSRange)__ck_rangeOfSequenceOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)__ck_containsOnlyCharactersFromSet:(id)arg1;
- (_Bool)isAddressBookLabel;

@end
