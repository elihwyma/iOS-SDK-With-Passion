/*
 Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSMutableDictionary, NSString;

@interface PBTextReader : NSObject

{
    NSCharacterSet *_whitespaceAndNewlineCharacterSet;
    NSCharacterSet *_tagNameCharacterSet;
    NSCharacterSet *_nonHexDigitCharacterSet;
    unsigned long long _pos;
    unsigned long long _length;
    NSString *_string;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_cachedObjectTypes;
}

- (id)init;
- (void)dealloc;
- (_Bool)_hasMore;
- (id)readMessageType:(Class)arg1 fromString:(id)arg2;
- (id)_stringAtCurrentPositionWithPadding:(unsigned long long)arg1;
- (struct _NSRange)_rangeOfCharactersInSetAtCurrentPosition:(id)arg1;
- (void)_readTag:(id *)arg1 andType:(unsigned long long *)arg2;
- (id)_readValue;
- (id)_readObject:(Class)arg1;
- (id)_readStruct:(id)arg1;
- (id)_parseNumber:(id)arg1 maxValue:(unsigned long long)arg2 isSigned:(_Bool)arg3;
- (id)_readString;

@end
