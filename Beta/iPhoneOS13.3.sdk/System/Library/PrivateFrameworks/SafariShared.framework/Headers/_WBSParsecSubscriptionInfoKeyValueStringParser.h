/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface _WBSParsecSubscriptionInfoKeyValueStringParser : NSObject

{
    NSString *_string;
    unsigned long long _index;
}

+ (id)parseKeyValuePairsFromString:(id)arg1;

- (id)_initWithString:(id)arg1;
- (_Bool)_isAtEnd;
- (id)_parseKeyValuePairs;
- (_Bool)_parseKeyValuePairWithKey:(id *)arg1 value:(id *)arg2;
- (unsigned short)_previewCharacter;
- (unsigned short)_consumeCharacter;
- (void)_skipWhitespace;
- (id)_parseKey;
- (id)_parseValue;
- (id)_parseUpToCharacterFromSet:(id)arg1;
- (id)_parseJSONValue;

@end
