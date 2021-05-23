/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface ECEncodedWordDecoder : NSObject

{
    NSNumber *_stringEncoding;
    NSString *_language;
    NSData *_headerData;
    long long _encodedWordEncoding;
    struct _NSRange _encodedTextRange;
}

@property (copy, nonatomic, readonly) NSData *headerData;
@property (retain, nonatomic) NSNumber *stringEncoding;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) long long encodedWordEncoding;
@property (nonatomic) struct _NSRange encodedTextRange;

- (id)init;
- (id)_encodedWordStartSequence;
- (id)_lineSeparator;
- (id)_encodedWordDelimiter;
- (id)_encodedWordEndSequence;
- (id)_encodedWordLanguageDelimiter;
- (_Bool)_decodeBEncodedTextToData:(id)arg1;
- (_Bool)_decodeQEncodedTextToData:(id)arg1;
- (void)_enumerateQByteRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithHeaderData:(id)arg1;
- (struct _NSRange)identifyRangeOfEncodedWordAtIndex:(unsigned long long)arg1;
- (_Bool)decodeEncodedTextToData:(id)arg1;

@end
