/*
 Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ABVCardActivityAlertScanner : NSObject

{
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)arg1;
+ (_Bool)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scanAlertValueFromString:(id)arg1;

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (unsigned long long)position;
- (_Bool)atEnd;
- (unsigned short)nextCharacter;
- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (_Bool)scanPastItemDelimiter;
- (id)scanStringValue;
- (_Bool)scanPastKeyValueSeparator;
- (unsigned short)nextUnescapedCharacter;
- (id)scanQuotedStringValue;
- (id)scanUnquotedStringValue;
- (unsigned short)scanCharacter;
- (_Bool)scanPastCharacter:(unsigned short)arg1;
- (unsigned short)scanCharacterWithEscaping:(_Bool)arg1;
- (void)scanPastWhitespace;

@end
