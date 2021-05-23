/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CNVCardActivityAlertScanner : NSObject

{
    NSString *_string;
    unsigned long long _position;
}

+ (id)scannerWithString:(id)arg1;
+ (_Bool)characterIsStringValueCharacter:(unsigned short)arg1;
+ (id)scanAlertValueFromString:(id)arg1;

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
